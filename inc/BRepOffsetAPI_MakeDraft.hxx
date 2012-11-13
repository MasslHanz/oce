// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_MakeDraft_HeaderFile
#define _BRepOffsetAPI_MakeDraft_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepFill_Draft_HeaderFile
#include <BRepFill_Draft.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BRepBuilderAPI_TransitionMode_HeaderFile
#include <BRepBuilderAPI_TransitionMode.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
class StdFail_NotDone;
class Standard_NoSuchObject;
class TopoDS_Shape;
class gp_Dir;
class Geom_Surface;
class TopoDS_Shell;
class TopTools_ListOfShape;


//! Build a draft surface along a wire <br>
class BRepOffsetAPI_MakeDraft  : public BRepBuilderAPI_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs the draft surface object defined by the shape <br>
//! Shape, the direction Dir, and the angle Angle. <br>
//! Shape must be a TopoDS_Wire, Topo_DS_Face or <br>
//! TopoDS_Shell with free boundaries. <br>
//! Exceptions <br>
//! Standard_NotDone if Shape is not a TopoDS_Wire, <br>
//! Topo_DS_Face or TopoDS_Shell with free boundaries. <br>
  Standard_EXPORT   BRepOffsetAPI_MakeDraft(const TopoDS_Shape& Shape,const gp_Dir& Dir,const Standard_Real Angle);
  //! Sets the options of this draft tool. <br>
//! If a transition has to be performed, it can be defined by <br>
//! the mode Style as RightCorner or RoundCorner, <br>
//! RightCorner being a corner defined by a sharp angle, <br>
//! and RoundCorner being a rounded corner. <br>
//! AngleMin is an angular tolerance used to detect <br>
//! whether a transition has to be performed or not. <br>
//! AngleMax sets the maximum value within which a <br>
//! RightCorner transition can be performed. <br>
//! AngleMin and AngleMax are expressed in radians. <br>
  Standard_EXPORT     void SetOptions(const BRepBuilderAPI_TransitionMode Style = BRepBuilderAPI_RightCorner,const Standard_Real AngleMin = 0.01,const Standard_Real AngleMax = 3.0) ;
  //! Sets the direction of the draft for this object. <br>
//! If IsInternal is true, the draft is internal to the argument <br>
//! Shape used in the constructor. <br>
  Standard_EXPORT     void SetDraft(const Standard_Boolean IsInternal = Standard_False) ;
  //! Performs the draft using the length LengthMax as the <br>
//! maximum length for the corner edge between two draft faces. <br>
  Standard_EXPORT     void Perform(const Standard_Real LengthMax) ;
  //! Performs the draft up to the surface Surface. <br>
//! If KeepInsideSurface is true, the part of Surface inside <br>
//! the draft is kept in the result. <br>
  Standard_EXPORT     void Perform(const Handle(Geom_Surface)& Surface,const Standard_Boolean KeepInsideSurface = Standard_True) ;
  //! Performs the draft up to the shape StopShape. <br>
//! If KeepOutSide is true, the part of StopShape which is <br>
//! outside the Draft is kept in the result. <br>
  Standard_EXPORT     void Perform(const TopoDS_Shape& StopShape,const Standard_Boolean KeepOutSide = Standard_True) ;
  //! Returns the shell resulting from performance of the <br>
//! draft along the wire. <br>
  Standard_EXPORT     TopoDS_Shell Shell() const;
  //! Returns the  list   of shapes generated   from the <br>
//!          shape <S>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Generated(const TopoDS_Shape& S) ;





protected:





private:



BRepFill_Draft myDraft;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
