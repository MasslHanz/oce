// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_Array1OfVPointInter_HeaderFile
#define _TopOpeBRep_Array1OfVPointInter_HeaderFile

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
class TopOpeBRep_VPointInter;



class TopOpeBRep_Array1OfVPointInter  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRep_Array1OfVPointInter(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   TopOpeBRep_Array1OfVPointInter(const TopOpeBRep_VPointInter& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const TopOpeBRep_VPointInter& V) ;
  
  Standard_EXPORT     void Destroy() ;
~TopOpeBRep_Array1OfVPointInter()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const TopOpeBRep_Array1OfVPointInter& Assign(const TopOpeBRep_Array1OfVPointInter& Other) ;
   const TopOpeBRep_Array1OfVPointInter& operator =(const TopOpeBRep_Array1OfVPointInter& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const TopOpeBRep_VPointInter& Value) ;
  
       const TopOpeBRep_VPointInter& Value(const Standard_Integer Index) const;
     const TopOpeBRep_VPointInter& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        TopOpeBRep_VPointInter& ChangeValue(const Standard_Integer Index) ;
      TopOpeBRep_VPointInter& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   TopOpeBRep_Array1OfVPointInter(const TopOpeBRep_Array1OfVPointInter& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item TopOpeBRep_VPointInter
#define Array1Item_hxx <TopOpeBRep_VPointInter.hxx>
#define TCollection_Array1 TopOpeBRep_Array1OfVPointInter
#define TCollection_Array1_hxx <TopOpeBRep_Array1OfVPointInter.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
