// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBC_VArrayOfCharacter_HeaderFile
#define _DBC_VArrayOfCharacter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _Handle_DBC_VArrayNodeOfVArrayOfCharacter_HeaderFile
#include <Handle_DBC_VArrayNodeOfVArrayOfCharacter.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class DBC_VArrayNodeOfVArrayOfCharacter;
class DBC_VArrayTNodeOfVArrayOfCharacter;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(DBC_VArrayOfCharacter);


class DBC_VArrayOfCharacter  : public DBC_BaseArray {

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   DBC_VArrayOfCharacter();
  
  Standard_EXPORT   DBC_VArrayOfCharacter(const Standard_Integer Size);
  
  Standard_EXPORT   DBC_VArrayOfCharacter(const DBC_VArrayOfCharacter& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const DBC_VArrayOfCharacter& Other) ;
    void operator =(const DBC_VArrayOfCharacter& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Standard_Character& Value) ;
  
  Standard_EXPORT     Standard_Character& Value(const Standard_Integer Index) const;
    Standard_Character& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~DBC_VArrayOfCharacter()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif
