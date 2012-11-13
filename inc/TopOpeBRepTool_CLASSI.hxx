// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_CLASSI_HeaderFile
#define _TopOpeBRepTool_CLASSI_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _TopOpeBRepTool_IndexedDataMapOfShapeBox2d_HeaderFile
#include <TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx>
#endif
#ifndef _TopOpeBRepTool_DataMapOfShapeface_HeaderFile
#include <TopOpeBRepTool_DataMapOfShapeface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Face;
class TopoDS_Shape;
class Bnd_Box2d;
class TopOpeBRepTool_face;
class TopTools_ListOfShape;
class TopTools_DataMapOfShapeListOfShape;



class TopOpeBRepTool_CLASSI  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepTool_CLASSI();
  
  Standard_EXPORT     void Init2d(const TopoDS_Face& Fref) ;
  
  Standard_EXPORT     Standard_Boolean HasInit2d() const;
  
  Standard_EXPORT     Standard_Boolean Add2d(const TopoDS_Shape& S) ;
  
  Standard_EXPORT     Standard_Boolean GetBox2d(const TopoDS_Shape& S,Bnd_Box2d& Box2d) ;
  
  Standard_EXPORT     Standard_Integer ClassiBnd2d(const TopoDS_Shape& S1,const TopoDS_Shape& S2,const Standard_Real tol,const Standard_Boolean checklarge) ;
  
  Standard_EXPORT     Standard_Integer Classip2d(const TopoDS_Shape& S1,const TopoDS_Shape& S2,const Standard_Integer stabnd2d12) ;
  
  Standard_EXPORT     Standard_Boolean Getface(const TopoDS_Shape& S,TopOpeBRepTool_face& fa) const;
  
  Standard_EXPORT     Standard_Boolean Classilist(const TopTools_ListOfShape& lS,TopTools_DataMapOfShapeListOfShape& mapgreasma) ;





protected:





private:



TopoDS_Face myFref;
TopOpeBRepTool_IndexedDataMapOfShapeBox2d mymapsbox2d;
TopOpeBRepTool_DataMapOfShapeface mymapsface;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
