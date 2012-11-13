// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDSToStep_WireframeBuilder_HeaderFile
#define _TopoDSToStep_WireframeBuilder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TColStd_HSequenceOfTransient_HeaderFile
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#endif
#ifndef _TopoDSToStep_BuilderError_HeaderFile
#include <TopoDSToStep_BuilderError.hxx>
#endif
#ifndef _TopoDSToStep_Root_HeaderFile
#include <TopoDSToStep_Root.hxx>
#endif
#ifndef _Handle_Transfer_FinderProcess_HeaderFile
#include <Handle_Transfer_FinderProcess.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TColStd_HSequenceOfTransient;
class StdFail_NotDone;
class TopoDS_Shape;
class TopoDSToStep_Tool;
class Transfer_FinderProcess;
class TopoDS_Edge;
class TopoDS_Face;
class MoniTool_DataMapOfShapeTransient;


//! This builder Class provides services to build <br>
//!          a ProSTEP Wireframemodel from a Cas.Cad BRep. <br>
class TopoDSToStep_WireframeBuilder  : public TopoDSToStep_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopoDSToStep_WireframeBuilder();
  
  Standard_EXPORT   TopoDSToStep_WireframeBuilder(const TopoDS_Shape& S,TopoDSToStep_Tool& T,const Handle(Transfer_FinderProcess)& FP);
  
  Standard_EXPORT     void Init(const TopoDS_Shape& S,TopoDSToStep_Tool& T,const Handle(Transfer_FinderProcess)& FP) ;
  
  Standard_EXPORT     TopoDSToStep_BuilderError Error() const;
  
  Standard_EXPORT    const Handle_TColStd_HSequenceOfTransient& Value() const;
  //! Extraction of Trimmed Curves from TopoDS_Edge for the <br>
//!  Creation of a GeometricallyBoundedWireframeRepresentation <br>
  Standard_EXPORT     Standard_Boolean GetTrimmedCurveFromEdge(const TopoDS_Edge& E,const TopoDS_Face& F,MoniTool_DataMapOfShapeTransient& M,Handle(TColStd_HSequenceOfTransient)& L) const;
  //! Extraction of Trimmed Curves from TopoDS_Face for the <br>
//!  Creation of a GeometricallyBoundedWireframeRepresentation <br>
  Standard_EXPORT     Standard_Boolean GetTrimmedCurveFromFace(const TopoDS_Face& F,MoniTool_DataMapOfShapeTransient& M,Handle(TColStd_HSequenceOfTransient)& L) const;
  //! Extraction of Trimmed Curves from any TopoDS_Shape for the <br>
//!  Creation of a GeometricallyBoundedWireframeRepresentation <br>
  Standard_EXPORT     Standard_Boolean GetTrimmedCurveFromShape(const TopoDS_Shape& S,MoniTool_DataMapOfShapeTransient& M,Handle(TColStd_HSequenceOfTransient)& L) const;





protected:





private:



Handle_TColStd_HSequenceOfTransient myResult;
TopoDSToStep_BuilderError myError;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
