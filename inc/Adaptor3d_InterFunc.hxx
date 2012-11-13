// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_InterFunc_HeaderFile
#define _Adaptor3d_InterFunc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_FunctionWithDerivative_HeaderFile
#include <math_FunctionWithDerivative.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Adaptor2d_HCurve2d;
class Standard_ConstructionError;


//! Used to find the points U(t) = U0 or V(t) = V0 in <br>
//!          order to determine the  Cn discontinuities of  an <br>
//!               Adpator_CurveOnSurface  relativly  to    the <br>
//!          discontinuities of the surface. <br>
class Adaptor3d_InterFunc  : public math_FunctionWithDerivative {
public:

  DEFINE_STANDARD_ALLOC

  //!   build the function  U(t)=FixVal   if Fix =1 or <br>
//!            V(t)=FixVal if Fix=2 <br>
  Standard_EXPORT   Adaptor3d_InterFunc(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Real FixVal,const Standard_Integer Fix);
  //! computes the value <F>of the function for the variable <X>. <br>
//!         Returns True if the calculation were successfully done, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Value(const Standard_Real X,Standard_Real& F) ;
  //! computes the derivative <D> of the function <br>
//!          for the variable <X>. <br>
//!           Returns True if the calculation were successfully done, <br>
//!           False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Derivative(const Standard_Real X,Standard_Real& D) ;
  //! computes the value <F> and the derivative <D> of the <br>
//!          function for the variable <X>. <br>
//!          Returns True if the calculation were successfully done, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Values(const Standard_Real X,Standard_Real& F,Standard_Real& D) ;





protected:





private:



Handle_Adaptor2d_HCurve2d myCurve2d;
Standard_Real myFixVal;
Standard_Integer myFix;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
