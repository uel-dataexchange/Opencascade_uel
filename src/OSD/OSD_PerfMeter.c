/*======================================================================
File    :       Perf.c
Purpose :       Set of functions to measure the CPU user time
Author  :       Michael SAZONOV <msv@nnov.matra-dtv.fr>
Created :       10/08/2000
History :	25/09/2001 : AGV : (const char *) in prototypes;
                09/11/2001 : AGV : Add functions perf_*_imeter for performance
                                   Add function perf_tick_meter
                14/05/2002 : AGV : Portability UNIX/Windows
======================================================================*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <OSD_PerfMeter.h>

/* ------- Definitions for Windows compiler -------- */
#ifdef WNT
#define STRICT
#include <windows.h>
typedef __int64 PERF_TIME;
#define PICK_TIME(_utime) {     \
  FILETIME t1, t2, ktime;       \
  GetThreadTimes (GetCurrentThread(), &t1, &t2, &ktime, (FILETIME *)&(_utime));\
}
#define GET_SECONDS(_utime) (((double)(_utime))/10000000.)

/* ------- POSIX Definitions  ---------------------- */
#else
#include <sys/times.h>
typedef clock_t PERF_TIME;
#define PICK_TIME(_utime) {     \
  struct tms tmbuf;             \
  times (&tmbuf);               \
  (_utime) = tmbuf.tms_utime;   \
}
#define GET_SECONDS(_utime) (((double)(_utime))/CLOCKS_PER_SEC)
// #define GET_SECONDS(_utime) (((double)(_utime))/CLK_TCK)
#endif

/*======================================================================
        DEFINITIONS
======================================================================*/

typedef struct {
  char*         name;           /* identifier */
  PERF_TIME     cumul_time;     /* cumulative time */
  PERF_TIME     start_time;     /* to store start time */
  int           nb_enter;       /* number of enters */
} t_TimeCounter;

#define MAX_METERS 100

static t_TimeCounter MeterTable[MAX_METERS];
static int nb_meters = 0;

static int	find_meter	 (const char * const MeterName);
static int	_perf_init_meter (const char * const MeterName,
                                  const int    doFind);

/*======================================================================
Function :      perf_init_meter
Purpose  :      Creates new counter (if it is absent) identified by
                MeterName and resets its cumulative value
Returns  :      iMeter if OK, -1 if alloc problem
======================================================================*/
int perf_init_meter (const char * const MeterName)
{
  return _perf_init_meter (MeterName, ~0);
}

/*======================================================================
Function :      perf_tick_meter
Purpose  :      Increments the counter of meter MeterName without changing
                its state with respect to measurement of time.
		creates new meter if there is no such meter
Returns  :      iMeter if OK, -1 if no such meter and cannot create a new one
======================================================================*/
int perf_tick_meter (const char * const MeterName)
{
  int ic = find_meter (MeterName);

  if (ic == -1) {
    /* create new meter */
    ic = _perf_init_meter (MeterName, 0);
  }

  if (ic >= 0)
    MeterTable[ic].nb_enter ++;

  return ic;
}

/*======================================================================
Function :      perf_tick_imeter
Purpose  :      Increments the counter of meter iMeter without changing
                its state with respect to measurement of time.
Returns  :      iMeter if OK, -1 if no such meter
======================================================================*/
int perf_tick_imeter (const int iMeter)
{
  if (iMeter >= 0 && iMeter < nb_meters) {
    MeterTable[iMeter].nb_enter ++;
    return iMeter;
  }
  return -1;
}

/*======================================================================
Function :      perf_start_meter
Purpose  :      Forces meter MeterName to begin to count by remembering
                the current data of timer;
		creates new meter if there is no such meter
Returns  :      iMeter if OK, -1 if no such meter and cannot create a new one
======================================================================*/
int perf_start_meter (const char * const MeterName)
{
  int ic = find_meter (MeterName);

  if (ic == -1) {
    /* create new meter */
    ic = _perf_init_meter (MeterName, 0);
  }

  if (ic >= 0)
    PICK_TIME (MeterTable[ic].start_time)

  return ic;
}

/*======================================================================
Function :      perf_start_imeter
Purpose  :      Forces meter with number iMeter to begin count by remembering
                the current data of timer;
		the meter must be previously created
Returns  :      iMeter if OK, -1 if no such meter
======================================================================*/
int perf_start_imeter (const int iMeter)
{
  if (iMeter >= 0 && iMeter < nb_meters) {
    PICK_TIME (MeterTable[iMeter].start_time)
    return iMeter;
  }
  return -1;
}

/*======================================================================
Function :      perf_stop_meter
Purpose  :      Forces meter MeterName to stop and cumulate time elapsed
                since start
Returns  :      iMeter if OK, -1 if no such meter or it is has not been started
======================================================================*/
int perf_stop_meter (const char * const MeterName)
{
  const int ic = find_meter (MeterName);

  if (ic >= 0 && MeterTable[ic].start_time) {
    t_TimeCounter * const ptc = &MeterTable[ic];
    PERF_TIME utime;
    PICK_TIME (utime)
    ptc->cumul_time += utime - ptc->start_time;
    ptc->start_time = 0;
    ptc->nb_enter++;
  }

  return ic;
}

/*======================================================================
Function :      perf_stop_imeter
Purpose  :      Forces meter with number iMeter to stop and cumulate the time
                elapsed since the start
Returns  :      iMeter if OK, -1 if no such meter or it is has not been started
======================================================================*/
int perf_stop_imeter (const int iMeter)
{
  if (iMeter >= 0 && iMeter < nb_meters) {
    t_TimeCounter * const ptc = &MeterTable[iMeter];
    if (ptc->start_time) {
      PERF_TIME utime;
      PICK_TIME (utime)
      ptc->cumul_time += utime - ptc->start_time;
      ptc->start_time = 0;
      ptc->nb_enter++;
      return iMeter;
    }
  }
  return -1;
}

/*======================================================================
Function :      perf_get_meter
Purpose  :      Tells the time cumulated by meter MeterName and the number
                of enters to this meter
Output   :      *nb_enter, *seconds if the pointers != NULL
Returns  :      iMeter if OK, -1 if no such meter
======================================================================*/
int perf_get_meter (const char  * const MeterName,
                    int         * nb_enter,
                    double      * seconds)
{
  const int ic = find_meter (MeterName);

  if (ic >= 0) {
    if (nb_enter) *nb_enter = MeterTable[ic].nb_enter;
    if (seconds)  *seconds  = GET_SECONDS(MeterTable[ic].cumul_time);
  }
  return ic;
}

/*======================================================================
Function :      perf_print_all_meters
Purpose  :      Prints on stdout the cumulated time and the number of
                enters for each meter in MeterTable;
                resets all meters
Output   :      none
Returns  :      none
======================================================================*/
void perf_print_all_meters (void)
{
  int i;
  for (i=0; i<nb_meters; i++) {
    const t_TimeCounter * const ptc = &MeterTable[i];
    if (ptc && ptc->nb_enter) {
      printf ("          Perf meter results               :"
              "   enters  seconds  \xe6sec/enter\n");
      break;
    }
  }
  
  while (i < nb_meters) {
    t_TimeCounter * const ptc = &MeterTable[i++];

    if (ptc && ptc->nb_enter) {
      const double secs = GET_SECONDS(ptc->cumul_time);

      if (ptc->start_time)
        printf ("Warning : meter %s has not been stopped\n", ptc->name);

      printf ("%-42s : %7d %8.2f %10.2f\n",
              ptc->name, ptc->nb_enter, secs,
              (secs>0. ? 1000000 * secs/ptc->nb_enter : 0.));

      ptc->cumul_time = 0;
      ptc->start_time = 0;
      ptc->nb_enter   = 0;
    }
  }
}

/*======================================================================
Function :      perf_close_meter
Purpose  :      Prints out a meter and resets it
Returns  :      none
======================================================================*/
void perf_close_meter (const char * const MeterName)
{
  const int ic = find_meter (MeterName);
  if (ic >= 0 && MeterTable[ic].nb_enter) {
    t_TimeCounter * const ptc = &MeterTable[ic];
    if (ptc->start_time)
      printf ("  ===> Warning : meter %s has not been stopped\n", ptc->name);
    printf ("  ===> [%s] : %d enters, %9.3f seconds\n",
            ptc->name, ptc->nb_enter, GET_SECONDS(ptc->cumul_time));
    ptc->cumul_time = 0;
    ptc->start_time = 0;
    ptc->nb_enter   = 0;
  }
}

/*======================================================================
Function :      perf_close_imeter
Purpose  :      Prints out a meter and resets it
Returns  :      none
======================================================================*/
void perf_close_imeter (const int iMeter)
{
  if (iMeter >= 0 && iMeter < nb_meters && MeterTable[iMeter].nb_enter) {
    t_TimeCounter * const ptc = &MeterTable[iMeter];
    if (ptc->start_time)
      printf ("  ===> Warning : meter %s has not been stopped\n", ptc->name);
    printf ("  ===> [%s] : %d enters, %9.3f seconds\n",
            ptc->name, ptc->nb_enter, GET_SECONDS(ptc->cumul_time));
    ptc->cumul_time = 0;
    ptc->start_time = 0;
    ptc->nb_enter   = 0;
  }
}

/*======================================================================
Function :      perf_destroy_all_meters
Purpose  :      Deletes all meters and frees memory
Returns  :      none
======================================================================*/
void perf_destroy_all_meters (void)
{
  int i;
  for (i=0; i<nb_meters; i++)
    free (MeterTable[i].name);
  nb_meters = 0;
}

/* agv - non portable: #pragma fini (perf_print_and_destroy)
         using atexit instead (see _perf_init_meter below)            */

void perf_print_and_destroy (void)
{
  perf_print_all_meters ();
  perf_destroy_all_meters ();
}

/*======================================================================
Function :      _perf_init_meter
Purpose  :      Creates new counter (if it is absent) identified by
                MeterName and resets its cumulative value
Returns  :      index of meter if OK, -1 if alloc problem
Remarks  :      For internal use in this module
======================================================================*/
static int _perf_init_meter (const char * const MeterName,
			     const int  doFind)
{
  static int hasbeencalled = 0;
  int ic = -1;
  if (doFind)
    ic = find_meter (MeterName);

  if (ic == -1) {
    if (nb_meters >= MAX_METERS) return 0;
    ic = nb_meters;

    MeterTable[ic].name = strdup (MeterName);
    if (!MeterTable[ic].name)
      return -1;

    nb_meters++;
  }

  MeterTable[ic].cumul_time = 0;
  MeterTable[ic].start_time = 0;
  MeterTable[ic].nb_enter   = 0;
  if (hasbeencalled == 0) {
    atexit (perf_print_and_destroy);
    hasbeencalled = ~0;
  }
  return ic;
}

/*======================================================================
Function :      find_meter
Purpose  :      Finds the meter MeterName in the MeterTable
Returns  :      Index of meter object, -1 if not found
Remarks  :      For internal use in this module
======================================================================*/
static int find_meter (const char * const MeterName)
{
  int i;
  for (i=0; i<nb_meters; i++)
    if (!strcmp (MeterTable[i].name, MeterName)) return i;
  return -1;
}
