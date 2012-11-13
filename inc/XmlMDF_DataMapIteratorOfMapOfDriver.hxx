// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDF_DataMapIteratorOfMapOfDriver_HeaderFile
#define _XmlMDF_DataMapIteratorOfMapOfDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_XmlMDF_ADriver_HeaderFile
#include <Handle_XmlMDF_ADriver.hxx>
#endif
#ifndef _Handle_XmlMDF_DataMapNodeOfMapOfDriver_HeaderFile
#include <Handle_XmlMDF_DataMapNodeOfMapOfDriver.hxx>
#endif
class Standard_NoSuchObject;
class TCollection_AsciiString;
class XmlMDF_ADriver;
class XmlMDF_MapOfDriver;
class XmlMDF_DataMapNodeOfMapOfDriver;



class XmlMDF_DataMapIteratorOfMapOfDriver  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   XmlMDF_DataMapIteratorOfMapOfDriver();
  
  Standard_EXPORT   XmlMDF_DataMapIteratorOfMapOfDriver(const XmlMDF_MapOfDriver& aMap);
  
  Standard_EXPORT     void Initialize(const XmlMDF_MapOfDriver& aMap) ;
  
  Standard_EXPORT    const TCollection_AsciiString& Key() const;
  
  Standard_EXPORT    const Handle_XmlMDF_ADriver& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
