// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepLProp_CLProps_HeaderFile
#define _BRepLProp_CLProps_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepAdaptor_Curve_HeaderFile
#include <BRepAdaptor_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _LProp_Status_HeaderFile
#include <LProp_Status.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class LProp_BadContinuity;
class Standard_DomainError;
class Standard_OutOfRange;
class LProp_NotDefined;
class BRepAdaptor_Curve;
class gp_Vec;
class gp_Pnt;
class gp_Dir;
class BRepLProp_CurveTool;



class BRepLProp_CLProps  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepLProp_CLProps(const BRepAdaptor_Curve& C,const Standard_Integer N,const Standard_Real Resolution);
  
  Standard_EXPORT   BRepLProp_CLProps(const BRepAdaptor_Curve& C,const Standard_Real U,const Standard_Integer N,const Standard_Real Resolution);
  
  Standard_EXPORT   BRepLProp_CLProps(const Standard_Integer N,const Standard_Real Resolution);
  
  Standard_EXPORT     void SetParameter(const Standard_Real U) ;
  
  Standard_EXPORT     void SetCurve(const BRepAdaptor_Curve& C) ;
  
  Standard_EXPORT    const gp_Pnt& Value() const;
  
  Standard_EXPORT    const gp_Vec& D1() ;
  
  Standard_EXPORT    const gp_Vec& D2() ;
  
  Standard_EXPORT    const gp_Vec& D3() ;
  
  Standard_EXPORT     Standard_Boolean IsTangentDefined() ;
  
  Standard_EXPORT     void Tangent(gp_Dir& D) ;
  
  Standard_EXPORT     Standard_Real Curvature() ;
  
  Standard_EXPORT     void Normal(gp_Dir& N) ;
  
  Standard_EXPORT     void CentreOfCurvature(gp_Pnt& P) ;





protected:





private:



BRepAdaptor_Curve myCurve;
Standard_Real u;
Standard_Integer level;
Standard_Real cn;
Standard_Real linTol;
gp_Pnt pnt;
gp_Vec d[3];
gp_Dir tangent;
Standard_Real curvature;
LProp_Status tangentStatus;
Standard_Integer significantFirstDerivativeOrder;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
