// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_Array1OfCurveStyleFontPattern_HeaderFile
#define _StepVisual_Array1OfCurveStyleFontPattern_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepVisual_CurveStyleFontPattern_HeaderFile
#include <Handle_StepVisual_CurveStyleFontPattern.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepVisual_CurveStyleFontPattern;



class StepVisual_Array1OfCurveStyleFontPattern  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   StepVisual_Array1OfCurveStyleFontPattern(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepVisual_Array1OfCurveStyleFontPattern(const Handle(StepVisual_CurveStyleFontPattern)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(StepVisual_CurveStyleFontPattern)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepVisual_Array1OfCurveStyleFontPattern()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepVisual_Array1OfCurveStyleFontPattern& Assign(const StepVisual_Array1OfCurveStyleFontPattern& Other) ;
   const StepVisual_Array1OfCurveStyleFontPattern& operator =(const StepVisual_Array1OfCurveStyleFontPattern& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepVisual_CurveStyleFontPattern)& Value) ;
  
       const Handle_StepVisual_CurveStyleFontPattern& Value(const Standard_Integer Index) const;
     const Handle_StepVisual_CurveStyleFontPattern& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_StepVisual_CurveStyleFontPattern& ChangeValue(const Standard_Integer Index) ;
      Handle_StepVisual_CurveStyleFontPattern& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepVisual_Array1OfCurveStyleFontPattern(const StepVisual_Array1OfCurveStyleFontPattern& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_StepVisual_CurveStyleFontPattern
#define Array1Item_hxx <StepVisual_CurveStyleFontPattern.hxx>
#define TCollection_Array1 StepVisual_Array1OfCurveStyleFontPattern
#define TCollection_Array1_hxx <StepVisual_Array1OfCurveStyleFontPattern.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
