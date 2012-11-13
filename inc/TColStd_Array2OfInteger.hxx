// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_Array2OfInteger_HeaderFile
#define _TColStd_Array2OfInteger_HeaderFile

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
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;



class TColStd_Array2OfInteger  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TColStd_Array2OfInteger(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   TColStd_Array2OfInteger(const Standard_Integer& Item,const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT     void Init(const Standard_Integer& V) ;
  
  Standard_EXPORT     void Destroy() ;
~TColStd_Array2OfInteger()
{
  Destroy();
}
  
  Standard_EXPORT    const TColStd_Array2OfInteger& Assign(const TColStd_Array2OfInteger& Other) ;
   const TColStd_Array2OfInteger& operator =(const TColStd_Array2OfInteger& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const Standard_Integer& Value) ;
  
       const Standard_Integer& Value(const Standard_Integer Row,const Standard_Integer Col) const;
     const Standard_Integer& operator()(const Standard_Integer Row,const Standard_Integer Col) const
{
  return Value(Row,Col);
}
  
        Standard_Integer& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
      Standard_Integer& operator()(const Standard_Integer Row,const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}





protected:





private:

  
  Standard_EXPORT   TColStd_Array2OfInteger(const TColStd_Array2OfInteger& AnArray);
  
  Standard_EXPORT     void Allocate() ;


Standard_Integer myLowerRow;
Standard_Integer myLowerColumn;
Standard_Integer myUpperRow;
Standard_Integer myUpperColumn;
Standard_Boolean myDeletable;
Standard_Address myData;


};

#define Array2Item Standard_Integer
#define Array2Item_hxx <Standard_Integer.hxx>
#define TCollection_Array2 TColStd_Array2OfInteger
#define TCollection_Array2_hxx <TColStd_Array2OfInteger.hxx>

#include <TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
