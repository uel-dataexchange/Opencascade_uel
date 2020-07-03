// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_Wire_HeaderFile
#define _ShapeFix_Wire_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeFix_Wire_HeaderFile
#include <Handle_ShapeFix_Wire.hxx>
#endif

#ifndef _Handle_ShapeFix_Edge_HeaderFile
#include <Handle_ShapeFix_Edge.hxx>
#endif
#ifndef _Handle_ShapeAnalysis_Wire_HeaderFile
#include <Handle_ShapeAnalysis_Wire.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _ShapeFix_Root_HeaderFile
#include <ShapeFix_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_ShapeExtend_WireData_HeaderFile
#include <Handle_ShapeExtend_WireData.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _ShapeExtend_Status_HeaderFile
#include <ShapeExtend_Status.hxx>
#endif
class ShapeFix_Edge;
class ShapeAnalysis_Wire;
class TopoDS_Wire;
class TopoDS_Face;
class ShapeExtend_WireData;
class Geom_Surface;
class TopLoc_Location;
class ShapeAnalysis_WireOrder;


//! This class provides a set of tools for repairing a wire. <br>
class ShapeFix_Wire : public ShapeFix_Root {

public:

  //! Empty Constructor, creates clear object with default flags <br>
  Standard_EXPORT   ShapeFix_Wire();
  //! Create new object with default flags and prepare it for use <br>
//!          (Loads analyzer with all the data for the wire and face) <br>
  Standard_EXPORT   ShapeFix_Wire(const TopoDS_Wire& wire,const TopoDS_Face& face,const Standard_Real prec);
  //! Sets all modes to default <br>
  Standard_EXPORT     void ClearModes() ;
  //! Clears all statuses <br>
  Standard_EXPORT     void ClearStatuses() ;
  //! Load analyzer with all the data for the wire and face <br>
//!          and drops all fixing statuses <br>
  Standard_EXPORT     void Init(const TopoDS_Wire& wire,const TopoDS_Face& face,const Standard_Real prec) ;
  //! Load analyzer with all the data already prepared <br>
//!          and drops all fixing statuses <br>
//!          If analyzer contains face, there is no need to set it <br>
//!          by SetFace or SetSurface <br>
  Standard_EXPORT     void Init(const Handle(ShapeAnalysis_Wire)& saw) ;
  //! Load data for the wire, and drops all fixing statuses <br>
  Standard_EXPORT     void Load(const TopoDS_Wire& wire) ;
  //! Load data for the wire, and drops all fixing statuses <br>
  Standard_EXPORT     void Load(const Handle(ShapeExtend_WireData)& sbwd) ;
  //! Set working face for the wire <br>
        void SetFace(const TopoDS_Face& face) ;
  //! Set surface for the wire <br>
        void SetSurface(const Handle(Geom_Surface)& surf) ;
  //! Set surface for the wire <br>
        void SetSurface(const Handle(Geom_Surface)& surf,const TopLoc_Location& loc) ;
  //! Set working precision (to root and to analyzer) <br>
  Standard_EXPORT   virtual  void SetPrecision(const Standard_Real prec) ;
  //! Tells if the wire is loaded <br>
        Standard_Boolean IsLoaded() const;
  //! Tells if the wire and face are loaded <br>
        Standard_Boolean IsReady() const;
  //! returns number of edges in the working wire <br>
  Standard_EXPORT     Standard_Integer NbEdges() const;
  //! Makes the resulting Wire (by basic Brep_Builder) <br>
        TopoDS_Wire Wire() const;
  //! Makes the resulting Wire (by BRepAPI_MakeWire) <br>
        TopoDS_Wire WireAPIMake() const;
  //! returns field Analyzer (working tool) <br>
  Standard_EXPORT     Handle_ShapeAnalysis_Wire Analyzer() const;
  //! returns working wire <br>
       const Handle_ShapeExtend_WireData& WireData() const;
  //! returns working face (Analyzer.Face()) <br>
       const TopoDS_Face& Face() const;
  //! Returns (modifiable) the flag which defines whether it is <br>
//!          allowed to modify topology of the wire during fixing <br>
//!          (adding/removing edges etc.) <br>
        Standard_Boolean& ModifyTopologyMode() ;
  //! Returns (modifiable) the flag which defines whether the Fix..() <br>
//!          methods are allowed to modify geometry of the edges and vertices <br>
        Standard_Boolean& ModifyGeometryMode() ;
  //! Returns (modifiable) the flag which defines whether the Fix..() <br>
//!          methods are allowed to modify RemoveLoop of the edges <br>
        Standard_Integer& ModifyRemoveLoopMode() ;
  //! Returns (modifiable) the flag which defines whether the wire <br>
//!          is to be closed (by calling methods like FixDegenerated() <br>
//!          and FixConnected() for last and first edges). <br>
        Standard_Boolean& ClosedWireMode() ;
  //! Returns (modifiable) the flag which defines whether the 2d (True) <br>
//!          representation of the wire is preferable over 3d one (in the <br>
//!          case of ambiguity in FixEdgeCurves). <br>
        Standard_Boolean& PreferencePCurveMode() ;
  //! Returns (modifiable) the flag which defines whether tool <br>
//!          tries to fix gaps first by changing curves ranges (i.e. <br>
//!          using intersection, extrema, projections) or not. <br>
        Standard_Boolean& FixGapsByRangesMode() ;
  
        Standard_Integer& FixReorderMode() ;
  
        Standard_Integer& FixSmallMode() ;
  
        Standard_Integer& FixConnectedMode() ;
  
        Standard_Integer& FixEdgeCurvesMode() ;
  
        Standard_Integer& FixDegeneratedMode() ;
  
        Standard_Integer& FixSelfIntersectionMode() ;
  
        Standard_Integer& FixLackingMode() ;
  
        Standard_Integer& FixGaps3dMode() ;
  //! Returns (modifiable) the flag for corresponding Fix..() method <br>
//!          which defines whether this method will be called from the <br>
//!          method APIFix(): <br>
//!       -1 default <br>
//!        1 method will be called <br>
//!        0 method will not be called <br>
        Standard_Integer& FixGaps2dMode() ;
  
        Standard_Integer& FixReversed2dMode() ;
  
        Standard_Integer& FixRemovePCurveMode() ;
  
        Standard_Integer& FixAddPCurveMode() ;
  
        Standard_Integer& FixRemoveCurve3dMode() ;
  
        Standard_Integer& FixAddCurve3dMode() ;
  
        Standard_Integer& FixSeamMode() ;
  
        Standard_Integer& FixShiftedMode() ;
  
        Standard_Integer& FixSameParameterMode() ;
  
        Standard_Integer& FixVertexToleranceMode() ;
  
        Standard_Integer& FixNotchedEdgesMode() ;
  
        Standard_Integer& FixSelfIntersectingEdgeMode() ;
  
        Standard_Integer& FixIntersectingEdgesMode() ;
  //! Returns (modifiable) the flag for corresponding Fix..() method <br>
//!          which defines whether this method will be called from the <br>
//!          corresponding Fix..() method of the public level: <br>
//!       -1 default <br>
//!        1 method will be called <br>
//!        0 method will not be called <br>
        Standard_Integer& FixNonAdjacentIntersectingEdgesMode() ;
  //! This method performs all the available fixes. <br>
//!          If some fix is turned on or off explicitly by the Fix..Mode() flag, <br>
//!          this fix is either called or not depending on that flag. <br>
//!          Else (i.e. if flag is default) fix is called depending on the <br>
//!          situation: some fixes are not called or are limited if order of <br>
//!          edges in the wire is not OK, or depending on modes <br>
  Standard_EXPORT     Standard_Boolean Perform() ;
  //! Performs an analysis and reorders edges in the wire using <br>
//!          class WireOrder <br>
  Standard_EXPORT     Standard_Boolean FixReorder() ;
  //! Applies FixSmall(num) to all edges in the wire <br>
  Standard_EXPORT     Standard_Integer FixSmall(const Standard_Boolean lockvtx,const Standard_Real precsmall = 0.0) ;
  //! Applies FixConnected(num) to all edges in the wire <br>
//!          Connection between first and last edges is treated only if <br>
//!          flag ClosedMode is True <br>
//!          If <prec> is -1 then MaxTolerance() is taken. <br>
  Standard_EXPORT     Standard_Boolean FixConnected(const Standard_Real prec = -1.0) ;
  //! Groups the fixes dealing with 3d and pcurves of the edges. <br>
//!          The order of the fixes and the default behaviour are: <br>
//!          ShapeFix_Edge::FixReversed2d <br>
//!          ShapeFix_Edge::FixRemovePCurve (only if forced) <br>
//!          ShapeFix_Edge::FixAddPCurve <br>
//!          ShapeFix_Edge::FixRemoveCurve3d (only if forced) <br>
//!          ShapeFix_Edge::FixAddCurve3d <br>
//!          FixSeam, <br>
//!          FixShifted, <br>
//!          ShapeFix_Edge::FixSameParameter <br>
  Standard_EXPORT     Standard_Boolean FixEdgeCurves() ;
  //! Applies FixDegenerated(num) to all edges in the wire <br>
//!          Connection between first and last edges is treated only if <br>
//!          flag ClosedMode is True <br>
  Standard_EXPORT     Standard_Boolean FixDegenerated() ;
  //! Applies FixSelfIntersectingEdge(num) and <br>
//!          FixIntersectingEdges(num) to all edges in the wire and <br>
//!          FixIntersectingEdges(num1, num2) for all pairs num1 and num2 <br>
//!          such that num2 >= num1 + 2 <br>
//!          and removes wrong edges if any <br>
  Standard_EXPORT     Standard_Boolean FixSelfIntersection() ;
  //! Applies FixLacking(num) to all edges in the wire <br>
//!          Connection between first and last edges is treated only if <br>
//!          flag ClosedMode is True <br>
//!          If <force> is False (default), test for connectness is done with <br>
//!          precision of vertex between edges, else it is done with minimal <br>
//!          value of vertex tolerance and Analyzer.Precision(). <br>
//!          Hence, <force> will lead to inserting lacking edges in replacement <br>
//!          of vertices which have big tolerances. <br>
  Standard_EXPORT     Standard_Boolean FixLacking(const Standard_Boolean force = Standard_False) ;
  //! Fixes a wire to be well closed <br>
//!          It performs FixConnected, FixDegenerated and FixLacking between <br>
//!          last and first edges (independingly on flag ClosedMode and modes <br>
//!          for these fixings) <br>
//!          If <prec> is -1 then MaxTolerance() is taken. <br>
  Standard_EXPORT     Standard_Boolean FixClosed(const Standard_Real prec = -1.0) ;
  //! Fixes gaps between ends of 3d curves on adjacent edges <br>
//!          myPrecision is used to detect the gaps. <br>
  Standard_EXPORT     Standard_Boolean FixGaps3d() ;
  //! Fixes gaps between ends of pcurves on adjacent edges <br>
//!          myPrecision is used to detect the gaps. <br>
  Standard_EXPORT     Standard_Boolean FixGaps2d() ;
  //! Reorder edges in the wire as determined by WireOrder <br>
//!          that should be filled and computed before <br>
  Standard_EXPORT     Standard_Boolean FixReorder(const ShapeAnalysis_WireOrder& wi) ;
  //! Fixes Null Length Edge to be removed <br>
//!          If an Edge has Null Length (regarding preci, or <precsmall> <br>
//!          - what is smaller), it should be removed <br>
//!          It can be with no problem if its two vertices are the same <br>
//!          Else, if lockvtx is False, it is removed and its end vertex <br>
//!          is put on the preceeding edge <br>
//!          But if lockvtx is True, this edge must be kept ... <br>
  Standard_EXPORT     Standard_Boolean FixSmall(const Standard_Integer num,const Standard_Boolean lockvtx,const Standard_Real precsmall) ;
  //! Fixes connected edges (preceeding and current) <br>
//!          Forces Vertices (end of preceeding-begin of current) to be <br>
//!          the same one <br>
//!          Tests with starting preci or, if given greater, <prec> <br>
//!          If <prec> is -1 then MaxTolerance() is taken. <br>
  Standard_EXPORT     Standard_Boolean FixConnected(const Standard_Integer num,const Standard_Real prec) ;
  //! Fixes a seam edge <br>
//!          A Seam edge has two pcurves, one for forward. one for reversed <br>
//!          The forward pcurve must be set as first <br>
  Standard_EXPORT     Standard_Boolean FixSeam(const Standard_Integer num) ;
  //! Fixes edges which have pcurves shifted by whole parameter <br>
//!          range on the closed surface (the case may occur if pcurve <br>
//!          of edge was computed by projecting 3d curve, which goes <br>
//!          along the seam). <br>
//!          It compares each two consequent edges and tries to connect them <br>
//!          if distance between ends is near to range of the surface. <br>
//!          It also can detect and fix the case if all pcurves are connected, <br>
//!          but lie out of parametric bounds of the surface. <br>
//!          In addition to FixShifted from ShapeFix_Wire, more <br>
//!          sophisticated check of degenerate points is performed, <br>
//!          and special cases like sphere given by two meridians <br>
//!          are treated. <br>
  Standard_EXPORT     Standard_Boolean FixShifted() ;
  //! Fixes Degenerated Edge <br>
//!          Checks an <num-th> edge or a point between <num>th-1 and <num>th <br>
//!          edges for a singularity on a supporting surface. <br>
//!          If singularity is detected, either adds new degenerated edge <br>
//!          (before <num>th), or makes <num>th edge to be degenerated. <br>
  Standard_EXPORT     Standard_Boolean FixDegenerated(const Standard_Integer num) ;
  //! Fixes Lacking Edge <br>
//!          Test if two adjucent edges are disconnected in 2d (while <br>
//!          connected in 3d), and in that case either increase tolerance <br>
//!          of the vertex or add a new edge (straight in 2d space), in <br>
//!          order to close wire in 2d. <br>
//!          Returns True if edge was added or tolerance was increased. <br>
  Standard_EXPORT     Standard_Boolean FixLacking(const Standard_Integer num,const Standard_Boolean force = Standard_False) ;
  
  Standard_EXPORT     Standard_Boolean FixNotchedEdges() ;
  //! Fixes gap between ends of 3d curves on num-1 and num-th edges. <br>
//!          myPrecision is used to detect the gap. <br>
//!          If convert is True, converts curves to bsplines to bend. <br>
  Standard_EXPORT     Standard_Boolean FixGap3d(const Standard_Integer num,const Standard_Boolean convert = Standard_False) ;
  //! Fixes gap between ends of pcurves on num-1 and num-th edges. <br>
//!          myPrecision is used to detect the gap. <br>
//!          If convert is True, converts pcurves to bsplines to bend. <br>
  Standard_EXPORT     Standard_Boolean FixGap2d(const Standard_Integer num,const Standard_Boolean convert = Standard_False) ;

  Standard_EXPORT	Standard_Boolean IsGoingOverSingularity();
  
        Standard_Boolean StatusReorder(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusSmall(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusConnected(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusEdgeCurves(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusDegenerated(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusSelfIntersection(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusLacking(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusClosed(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusGaps3d(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusGaps2d(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusNotches(const ShapeExtend_Status status) const;
  //! Querying the status of perfomed API fixing procedures <br>
//!          Each Status..() methods gives information about the last call to <br>
//!          the corresponding Fix..() method of API level: <br>
//!          OK  : no problems detected; nothing done <br>
//!          DONE: some problem(s) was(were) detected and successfully fixed <br>
//!          FAIL: some problem(s) cannot be fixed <br>
        Standard_Boolean StatusRemovedSegment() const;
  //! Queries the status of last call to methods Fix... of <br>
//!          advanced level <br>
//!          For details see corresponding methods; universal statuses are: <br>
//!          OK  : problem not detected; nothing done <br>
//!          DONE: problem was detected and successfully fixed <br>
//!          FAIL: problem cannot be fixed <br>
        Standard_Boolean LastFixStatus(const ShapeExtend_Status status) const;
  //! Returns tool for fixing wires. <br>
        Handle_ShapeFix_Edge FixEdgeTool() const;




  DEFINE_STANDARD_RTTI(ShapeFix_Wire)

protected:

  //! Updates WireData if some replacements are made <br>
//!          This is necessary for wires (unlike other shape types) <br>
//!          since one edge can present in wire several times <br>
  Standard_EXPORT     void UpdateWire() ;

Handle_ShapeFix_Edge myFixEdge;
Handle_ShapeAnalysis_Wire myAnalyzer;
Standard_Boolean myGeomMode;
Standard_Boolean myTopoMode;
Standard_Boolean myClosedMode;
Standard_Boolean myPreference2d;
Standard_Boolean myFixGapsByRanges;
Standard_Integer myFixReversed2dMode;
Standard_Integer myFixRemovePCurveMode;
Standard_Integer myFixAddPCurveMode;
Standard_Integer myFixRemoveCurve3dMode;
Standard_Integer myFixAddCurve3dMode;
Standard_Integer myFixSeamMode;
Standard_Integer myFixShiftedMode;
Standard_Integer myFixSameParameterMode;
Standard_Integer myFixVertexToleranceMode;
Standard_Integer myFixNotchedEdgesMode;
Standard_Integer myFixSelfIntersectingEdgeMode;
Standard_Integer myFixIntersectingEdgesMode;
Standard_Integer myFixNonAdjacentIntersectingEdgesMode;
Standard_Integer myRemoveLoopMode;
Standard_Integer myFixReorderMode;
Standard_Integer myFixSmallMode;
Standard_Integer myFixConnectedMode;
Standard_Integer myFixEdgeCurvesMode;
Standard_Integer myFixDegeneratedMode;
Standard_Integer myFixSelfIntersectionMode;
Standard_Integer myFixLackingMode;
Standard_Integer myFixGaps3dMode;
Standard_Integer myFixGaps2dMode;
Standard_Integer myLastFixStatus;
Standard_Integer myStatusReorder;
Standard_Integer myStatusSmall;
Standard_Integer myStatusConnected;
Standard_Integer myStatusEdgeCurves;
Standard_Integer myStatusDegenerated;
Standard_Integer myStatusClosed;
Standard_Integer myStatusSelfIntersection;
Standard_Integer myStatusLacking;
Standard_Integer myStatusGaps3d;
Standard_Integer myStatusGaps2d;
Standard_Boolean myStatusRemovedSegment;
Standard_Integer myStatusNotches;
Standard_Boolean myFlagGoingOverSingularity;

private: 

  //! Detect and fix self-intersecting pcurve of edge <num>. <br>
//!          Fix is made by one of two methods: <br>
//!          - cut out the self-intersection loop on pcurve (thus <br>
//!            producing C0 pcurve). This also increases tolerance of edge <br>
//!            in order to satisfy SameParameter requirement. <br>
//!          - increase tolerance of the vertex of edge nearest to the <br>
//!            self-intersection point so that it comprises that point. <br>
//!          The first method is considered only if ModifyGeometryMode <br>
//!          is True. In that case, the method which requires less <br>
//!          increasing of tolerance is selected. <br>
  Standard_EXPORT     Standard_Boolean FixSelfIntersectingEdge(const Standard_Integer num) ;
  //! Test if two consequent edges are intersecting and fix it <br>
//!          by increasing of tolerance of vertex between edges, <br>
//!          shifting this vertex to the point of intersection, <br>
//!          cutting edges to the intersection point. <br>
//!          It also can give signal to remove edge if it whole is cut by <br>
//!          intersection (if flag ModifyTopologyMode is set). <br>
  Standard_EXPORT     Standard_Boolean FixIntersectingEdges(const Standard_Integer num) ;
  //! Tests if two edges <num1> and <num2> are intersecting and <br>
//!          fix intersection by increasing of tolerance of vertex <br>
//!          nearest to the point of intersection. <br>
  Standard_EXPORT     Standard_Boolean FixIntersectingEdges(const Standard_Integer num1,const Standard_Integer num2) ;
  
  Standard_EXPORT     void FixDummySeam(const Standard_Integer num) ;



};


#include <ShapeFix_Wire.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
