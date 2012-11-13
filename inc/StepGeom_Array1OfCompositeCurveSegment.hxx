// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Array1OfCompositeCurveSegment_HeaderFile
#define _StepGeom_Array1OfCompositeCurveSegment_HeaderFile

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
#ifndef _Handle_StepGeom_CompositeCurveSegment_HeaderFile
#include <Handle_StepGeom_CompositeCurveSegment.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepGeom_CompositeCurveSegment;



class StepGeom_Array1OfCompositeCurveSegment  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   StepGeom_Array1OfCompositeCurveSegment(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepGeom_Array1OfCompositeCurveSegment(const Handle(StepGeom_CompositeCurveSegment)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(StepGeom_CompositeCurveSegment)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepGeom_Array1OfCompositeCurveSegment()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepGeom_Array1OfCompositeCurveSegment& Assign(const StepGeom_Array1OfCompositeCurveSegment& Other) ;
   const StepGeom_Array1OfCompositeCurveSegment& operator =(const StepGeom_Array1OfCompositeCurveSegment& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepGeom_CompositeCurveSegment)& Value) ;
  
       const Handle_StepGeom_CompositeCurveSegment& Value(const Standard_Integer Index) const;
     const Handle_StepGeom_CompositeCurveSegment& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_StepGeom_CompositeCurveSegment& ChangeValue(const Standard_Integer Index) ;
      Handle_StepGeom_CompositeCurveSegment& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepGeom_Array1OfCompositeCurveSegment(const StepGeom_Array1OfCompositeCurveSegment& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_StepGeom_CompositeCurveSegment
#define Array1Item_hxx <StepGeom_CompositeCurveSegment.hxx>
#define TCollection_Array1 StepGeom_Array1OfCompositeCurveSegment
#define TCollection_Array1_hxx <StepGeom_Array1OfCompositeCurveSegment.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
