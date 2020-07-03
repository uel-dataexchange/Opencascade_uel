// File:	MAT_BasicElt.cxx
// Created:	Wed May  5 10:11:24 1993
// Author:	Yves FRICAUD
//		<yfr@phylox>


#include <MAT_BasicElt.ixx>
#include <MAT_SequenceOfArc.hxx>
#include <MAT_Node.hxx>

//========================================================================
// function:
// purpose :
//========================================================================
MAT_BasicElt::MAT_BasicElt(const Standard_Integer anInteger)
     : startLeftArc (0),
      endLeftArc   (0),
      index(anInteger)
{
}

//========================================================================
// function: StartArc
// purpose :
//========================================================================
Handle(MAT_Arc)  MAT_BasicElt::StartArc() const
{
  return (MAT_Arc*)startLeftArc;
}

//========================================================================
// function: EndArc
// purpose :
//========================================================================
Handle(MAT_Arc)  MAT_BasicElt::EndArc() const
{
  return (MAT_Arc*)endLeftArc;
}

//========================================================================
// function: Index
// purpose :
//========================================================================
Standard_Integer  MAT_BasicElt::Index() const
{
   return index;
}

//========================================================================
// function: GeomIndex
// purpose :
//========================================================================
Standard_Integer  MAT_BasicElt::GeomIndex() const
{
   return geomIndex;
}


//========================================================================
// function: SetStartArc
// purpose :
//========================================================================
void  MAT_BasicElt::SetStartArc(const Handle_MAT_Arc& anArc)
{
  startLeftArc = anArc.operator->();
}


//========================================================================
// function: SetEndArc
// purpose :
//========================================================================
void  MAT_BasicElt::SetEndArc(const Handle_MAT_Arc& anArc)
{
  endLeftArc = anArc.operator->();
}

//========================================================================
// function: SetIndex
// purpose :
//========================================================================
void MAT_BasicElt::SetIndex(const Standard_Integer anInteger)
{
  index = anInteger;
}

//========================================================================
// function: SetGeomIndex
// purpose :
//========================================================================
void MAT_BasicElt::SetGeomIndex(const Standard_Integer anInteger)
{
  geomIndex = anInteger;
}





