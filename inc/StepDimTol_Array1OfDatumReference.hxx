// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepDimTol_Array1OfDatumReference_HeaderFile
#define _StepDimTol_Array1OfDatumReference_HeaderFile

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
#ifndef _Handle_StepDimTol_DatumReference_HeaderFile
#include <Handle_StepDimTol_DatumReference.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepDimTol_DatumReference;



class StepDimTol_Array1OfDatumReference  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   StepDimTol_Array1OfDatumReference(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepDimTol_Array1OfDatumReference(const Handle(StepDimTol_DatumReference)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(StepDimTol_DatumReference)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepDimTol_Array1OfDatumReference()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepDimTol_Array1OfDatumReference& Assign(const StepDimTol_Array1OfDatumReference& Other) ;
   const StepDimTol_Array1OfDatumReference& operator =(const StepDimTol_Array1OfDatumReference& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepDimTol_DatumReference)& Value) ;
  
       const Handle_StepDimTol_DatumReference& Value(const Standard_Integer Index) const;
     const Handle_StepDimTol_DatumReference& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_StepDimTol_DatumReference& ChangeValue(const Standard_Integer Index) ;
      Handle_StepDimTol_DatumReference& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepDimTol_Array1OfDatumReference(const StepDimTol_Array1OfDatumReference& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_StepDimTol_DatumReference
#define Array1Item_hxx <StepDimTol_DatumReference.hxx>
#define TCollection_Array1 StepDimTol_Array1OfDatumReference
#define TCollection_Array1_hxx <StepDimTol_Array1OfDatumReference.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
