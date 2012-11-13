// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Xw_ListOfMFTFonts_HeaderFile
#define _Xw_ListOfMFTFonts_HeaderFile

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
#ifndef _Handle_MFT_FontManager_HeaderFile
#include <Handle_MFT_FontManager.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class MFT_FontManager;



class Xw_ListOfMFTFonts  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Xw_ListOfMFTFonts(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   Xw_ListOfMFTFonts(const Handle(MFT_FontManager)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(MFT_FontManager)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~Xw_ListOfMFTFonts()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const Xw_ListOfMFTFonts& Assign(const Xw_ListOfMFTFonts& Other) ;
   const Xw_ListOfMFTFonts& operator =(const Xw_ListOfMFTFonts& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(MFT_FontManager)& Value) ;
  
       const Handle_MFT_FontManager& Value(const Standard_Integer Index) const;
     const Handle_MFT_FontManager& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_MFT_FontManager& ChangeValue(const Standard_Integer Index) ;
      Handle_MFT_FontManager& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   Xw_ListOfMFTFonts(const Xw_ListOfMFTFonts& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_MFT_FontManager
#define Array1Item_hxx <MFT_FontManager.hxx>
#define TCollection_Array1 Xw_ListOfMFTFonts
#define TCollection_Array1_hxx <Xw_ListOfMFTFonts.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
