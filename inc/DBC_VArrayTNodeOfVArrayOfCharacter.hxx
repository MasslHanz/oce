// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBC_VArrayTNodeOfVArrayOfCharacter_HeaderFile
#define _DBC_VArrayTNodeOfVArrayOfCharacter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _Handle_DBC_VArrayNodeOfVArrayOfCharacter_HeaderFile
#include <Handle_DBC_VArrayNodeOfVArrayOfCharacter.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class DBC_VArrayOfCharacter;
class DBC_VArrayNodeOfVArrayOfCharacter;



class DBC_VArrayTNodeOfVArrayOfCharacter  {
public:

  DEFINE_STANDARD_ALLOC

  
      DBC_VArrayTNodeOfVArrayOfCharacter();
  
      DBC_VArrayTNodeOfVArrayOfCharacter(const Standard_Character& aValue);
  
        void SetValue(const Standard_Character& aValue) ;
  
        Standard_Address Value() const;





protected:





private:



Standard_Character myValue;


};

#define Item Standard_Character
#define Item_hxx <Standard_Character.hxx>
#define DBC_VArrayNode DBC_VArrayNodeOfVArrayOfCharacter
#define DBC_VArrayNode_hxx <DBC_VArrayNodeOfVArrayOfCharacter.hxx>
#define DBC_VArrayTNode DBC_VArrayTNodeOfVArrayOfCharacter
#define DBC_VArrayTNode_hxx <DBC_VArrayTNodeOfVArrayOfCharacter.hxx>
#define Handle_DBC_VArrayNode Handle_DBC_VArrayNodeOfVArrayOfCharacter
#define DBC_VArrayNode_Type_() DBC_VArrayNodeOfVArrayOfCharacter_Type_()
#define DBC_VArray DBC_VArrayOfCharacter
#define DBC_VArray_hxx <DBC_VArrayOfCharacter.hxx>

#include <DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
