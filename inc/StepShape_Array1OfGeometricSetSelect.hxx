// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Array1OfGeometricSetSelect_HeaderFile
#define _StepShape_Array1OfGeometricSetSelect_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_GeometricSetSelect;



class StepShape_Array1OfGeometricSetSelect 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepShape_Array1OfGeometricSetSelect(const Standard_Integer Low, const Standard_Integer Up);
  
    StepShape_Array1OfGeometricSetSelect(const StepShape_GeometricSetSelect& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const StepShape_GeometricSetSelect& V) ;
  
      void Destroy() ;
~StepShape_Array1OfGeometricSetSelect()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepShape_Array1OfGeometricSetSelect& Assign (const StepShape_Array1OfGeometricSetSelect& Other) ;
 const  StepShape_Array1OfGeometricSetSelect& operator = (const StepShape_Array1OfGeometricSetSelect& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepShape_GeometricSetSelect& Value) ;
  
     const  StepShape_GeometricSetSelect& Value (const Standard_Integer Index)  const;
   const  StepShape_GeometricSetSelect& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      StepShape_GeometricSetSelect& ChangeValue (const Standard_Integer Index) ;
    StepShape_GeometricSetSelect& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepShape_Array1OfGeometricSetSelect(const StepShape_Array1OfGeometricSetSelect& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item StepShape_GeometricSetSelect
#define Array1Item_hxx <StepShape_GeometricSetSelect.hxx>
#define TCollection_Array1 StepShape_Array1OfGeometricSetSelect
#define TCollection_Array1_hxx <StepShape_Array1OfGeometricSetSelect.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepShape_Array1OfGeometricSetSelect_HeaderFile
