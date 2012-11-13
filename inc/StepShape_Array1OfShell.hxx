// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Array1OfShell_HeaderFile
#define _StepShape_Array1OfShell_HeaderFile

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
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_Shell;



class StepShape_Array1OfShell  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   StepShape_Array1OfShell(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepShape_Array1OfShell(const StepShape_Shell& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const StepShape_Shell& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepShape_Array1OfShell()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepShape_Array1OfShell& Assign(const StepShape_Array1OfShell& Other) ;
   const StepShape_Array1OfShell& operator =(const StepShape_Array1OfShell& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepShape_Shell& Value) ;
  
       const StepShape_Shell& Value(const Standard_Integer Index) const;
     const StepShape_Shell& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        StepShape_Shell& ChangeValue(const Standard_Integer Index) ;
      StepShape_Shell& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepShape_Array1OfShell(const StepShape_Array1OfShell& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item StepShape_Shell
#define Array1Item_hxx <StepShape_Shell.hxx>
#define TCollection_Array1 StepShape_Array1OfShell
#define TCollection_Array1_hxx <StepShape_Array1OfShell.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
