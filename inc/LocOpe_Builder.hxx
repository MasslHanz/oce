// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_Builder_HeaderFile
#define _LocOpe_Builder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _BRepAlgo_TopOpe_HeaderFile
#include <BRepAlgo_TopOpe.hxx>
#endif
#ifndef _TopTools_MapOfShape_HeaderFile
#include <TopTools_MapOfShape.hxx>
#endif
#ifndef _Handle_BOP_HistoryCollector_HeaderFile
#include <Handle_BOP_HistoryCollector.hxx>
#endif
class StdFail_NotDone;
class Standard_ConstructionError;
class TopoDS_Shape;
class TopTools_ListOfShape;
class BOP_HistoryCollector;


//! Provides    a  basic  tool    to  implement  local <br>
//!          topological operations. <br>
class LocOpe_Builder  {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor. <br>
  Standard_EXPORT   LocOpe_Builder();
  //! Creates a builder for local operations on <S>. <br>
  Standard_EXPORT   LocOpe_Builder(const TopoDS_Shape& S);
  //! Creates a builder for local operations between <S> <br>
//!          and  <Tool>. <br>
  Standard_EXPORT   LocOpe_Builder(const TopoDS_Shape& S,const TopoDS_Shape& Tool);
  //! Initializes a builder for local operations on <S>. <br>
  Standard_EXPORT     void Init(const TopoDS_Shape& S) ;
  //! Initializes a builder for local operations between <br>
//!          <S>  and <Tool>. <br>
  Standard_EXPORT     void Init(const TopoDS_Shape& S,const TopoDS_Shape& Tool) ;
  //! Performs the local operation on the formerly given <br>
//!          shape.  <L> defines   a   set  of faces  of    the <br>
//!          shape. The whole tool is used. The list may not be <br>
//!          empty.   The  boolean  <Fuse>   gives the type  of <br>
//!          operation. If set  to Standard_True, the operation <br>
//!          is  a fusion.    If  set  to   Standard_False, the <br>
//!          operation is a cutting one. <br>
//! <br>
//!          The Perform process stops just before constructing <br>
//!          any result in order to authorize  the selection of <br>
//!          parts of the tool.  After a call to Perform, it is <br>
//!          possible   to call     BuilPartsOfTool,       then <br>
//!          RemovePart/ActivatePart to select valid parts, and <br>
//!          it  is necessary to  call PerformResult to get any <br>
//!          result. <br>
  Standard_EXPORT     void Perform(const TopoDS_Shape& Tool,const TopTools_ListOfShape& L,const Standard_Boolean Fuse) ;
  //! Performs the local operation on the formerly given <br>
//!          shape and tool.  <LShape>  defines a set  of faces <br>
//!          of  the shape.  <LTool> defines  a set of faces of <br>
//!          the  tool.  The boolean  <Fuse>  gives the type of <br>
//!          operation.  If set to Standard_True, the operation <br>
//!          is  a  fusion.    If set   to  Standard_False, the <br>
//!          operation   is  a cutting  one. If <LShape> (resp. <br>
//!          <LTool>) is empty, the whole shape (resp. tool) is <br>
//!          used. <br>
//! <br>
//!          The Perform process stops just before constructing <br>
//!          any result in order to authorize  the selection of <br>
//!          parts of the tool.  After a call to Perform, it is <br>
//!          possible   to call     BuilPartsOfTool,       then <br>
//!          RemovePart/ActivatePart to select valid parts, and <br>
//!          it  is necessary to  call PerformResult to get any <br>
//!          result. <br>
  Standard_EXPORT     void Perform(const TopTools_ListOfShape& LShape,const TopTools_ListOfShape& LTool,const Standard_Boolean Fuse) ;
  //! Builds every valid parts of the tool. <br>
  Standard_EXPORT     void BuildPartsOfTool() ;
  //! Returns  the list of  the  parts of tool.  Each of <br>
//!          this part is a TopoDS_Shell. <br>
  Standard_EXPORT    const TopTools_ListOfShape& PartsOfTool() const;
  //! Removes <S> from the list of valid parts of tool. <br>
  Standard_EXPORT     void RemovePart(const TopoDS_Shape& S) ;
  //! Removes <S>  from  the list  of  invalid parts  of <br>
//!          tool. By default, all parts  of tool are valid for <br>
//!          the local operation. <br>
  Standard_EXPORT     void ActivatePart(const TopoDS_Shape& S) ;
  //! Invalidates the given parts of  tools if any,  and <br>
//!          performs the result of the local operation. <br>
  Standard_EXPORT     void PerformResult() ;
  //! Returns  Standard_True  if the operation  has been <br>
//!          successfuly done. <br>
        Standard_Boolean IsDone() const;
  //! Returns  Standard_True  if the Invalidate Parts <br>
//!          operation  has been successfuly done. <br>
        Standard_Boolean IsInvDone() const;
  //! Returns the result of the operation. <br>
       const TopoDS_Shape& ResultingShape() const;
  //! Returns the shape on which the operation is defined. <br>
       const TopoDS_Shape& OriginalShape() const;
  //! Returns the "tool" used to perform the local operation. <br>
       const TopoDS_Shape& Tool() const;
  
       const Handle_BOP_HistoryCollector& History() const;
  
  Standard_EXPORT     void InvalidateParts() ;
  
  Standard_EXPORT    const TopTools_ListOfShape& Edges() const;
  
  Standard_EXPORT    const TopTools_ListOfShape& TgtEdges() const;





protected:





private:



Standard_Boolean myDone;
TopoDS_Shape myShape;
TopoDS_Shape myTool;
TopoDS_Shape myResult;
TopTools_ListOfShape myParts;
TopTools_ListOfShape myRemoved;
Standard_Boolean myPdone;
Standard_Boolean myPerfdone;
Standard_Boolean myInvDone;
Standard_Boolean myFuse;
TopTools_ListOfShape myEdges;
TopTools_ListOfShape myTgtEdges;
BRepAlgo_TopOpe myAlgo;
TopTools_MapOfShape myShapeMap;
TopTools_MapOfShape myToolMap;


};


#include <LocOpe_Builder.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
