// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_SectionGenerator_HeaderFile
#define _GeomFill_SectionGenerator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _GeomFill_Profiler_HeaderFile
#include <GeomFill_Profiler.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TColStd_HArray1OfReal;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class TColgp_Array1OfPnt;
class TColgp_Array1OfVec;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec2d;


//! gives  the  functions  needed  for  instantiation from <br>
//!          AppSurf in AppBlend.   Allow  to  evaluate  a  surface <br>
//!          passing by all the curves if the Profiler. <br>
class GeomFill_SectionGenerator  : public GeomFill_Profiler {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomFill_SectionGenerator();
  
  Standard_EXPORT     void SetParam(const Handle(TColStd_HArray1OfReal)& Params) ;
  
  Standard_EXPORT     void GetShape(Standard_Integer& NbPoles,Standard_Integer& NbKnots,Standard_Integer& Degree,Standard_Integer& NbPoles2d) const;
  
  Standard_EXPORT     void Knots(TColStd_Array1OfReal& TKnots) const;
  
  Standard_EXPORT     void Mults(TColStd_Array1OfInteger& TMults) const;
  //! Used for the first and last section <br>
//!          The method returns Standard_True if the derivatives <br>
//!          are computed, otherwise it returns Standard_False. <br>
  Standard_EXPORT     Standard_Boolean Section(const Standard_Integer P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths) const;
  
  Standard_EXPORT     void Section(const Standard_Integer P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfPnt2d& Poles2d,TColStd_Array1OfReal& Weigths) const;
  //! Returns  the parameter of   Section<P>, to impose  it for the <br>
//!          approximation. <br>
  Standard_EXPORT     Standard_Real Parameter(const Standard_Integer P) const;





protected:



Handle_TColStd_HArray1OfReal myParams;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
