// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_ResConstraintOfMyGradientbisOfBSplineCompute_HeaderFile
#define _AppDef_ResConstraintOfMyGradientbisOfBSplineCompute_HeaderFile

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
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _math_Matrix_HeaderFile
#include <math_Matrix.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColStd_Array1OfInteger_HeaderFile
#include <TColStd_Array1OfInteger.hxx>
#endif
#ifndef _Handle_AppParCurves_HArray1OfConstraintCouple_HeaderFile
#include <Handle_AppParCurves_HArray1OfConstraintCouple.hxx>
#endif
class Standard_OutOfRange;
class AppDef_MultiLine;
class AppDef_MyLineTool;
class AppParCurves_MultiCurve;
class AppParCurves_HArray1OfConstraintCouple;
class math_Matrix;
class math_Vector;



class AppDef_ResConstraintOfMyGradientbisOfBSplineCompute  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   AppDef_ResConstraintOfMyGradientbisOfBSplineCompute(const AppDef_MultiLine& SSP,AppParCurves_MultiCurve& SCurv,const Standard_Integer FirstPoint,const Standard_Integer LastPoint,const Handle(AppParCurves_HArray1OfConstraintCouple)& Constraints,const math_Matrix& Bern,const math_Matrix& DerivativeBern,const Standard_Real Tolerance = 1.0e-10);
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Real Error() const;
  
  Standard_EXPORT    const math_Matrix& ConstraintMatrix() const;
  
  Standard_EXPORT    const math_Vector& Duale() const;
  
  Standard_EXPORT    const math_Matrix& ConstraintDerivative(const AppDef_MultiLine& SSP,const math_Vector& Parameters,const Standard_Integer Deg,const math_Matrix& DA) ;
  
  Standard_EXPORT    const math_Matrix& InverseMatrix() const;





protected:

  
  Standard_EXPORT     Standard_Integer NbConstraints(const AppDef_MultiLine& SSP,const Standard_Integer FirstPoint,const Standard_Integer LastPoint,const Handle(AppParCurves_HArray1OfConstraintCouple)& TheConstraints) const;
  
  Standard_EXPORT     Standard_Integer NbColumns(const AppDef_MultiLine& SSP,const Standard_Integer Deg) const;




private:



Standard_Boolean Done;
Standard_Real Err;
math_Matrix Cont;
math_Matrix DeCont;
math_Vector Secont;
math_Matrix CTCinv;
math_Vector Vardua;
Standard_Integer IncPass;
Standard_Integer IncTan;
Standard_Integer IncCurv;
TColStd_Array1OfInteger IPas;
TColStd_Array1OfInteger ITan;
TColStd_Array1OfInteger ICurv;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
