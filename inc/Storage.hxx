// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_HeaderFile
#define _Storage_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class TCollection_AsciiString;
class Storage_BaseDriver;
class Storage_CallBack;
class Storage_DefaultCallBack;
class Storage_HeaderData;
class Storage_Data;
class Storage_TypeData;
class Storage_RootData;
class Storage_Root;
class Storage_Schema;
class Storage_SeqOfRoot;
class Storage_HSeqOfRoot;
class Storage_InternalData;
class Storage_stCONSTclCOM;
class Storage_TypedCallBack;
class Storage_SeqOfPersistent;
class Storage_HSeqOfPersistent;
class Storage_MapPSDHasher;
class Storage_PType;
class Storage_MapOfPers;
class Storage_MapOfCallBack;
class Storage_ArrayOfCallBack;
class Storage_HArrayOfCallBack;
class Storage_ArrayOfSchema;
class Storage_HArrayOfSchema;
class Storage_SeqOfCallBack;
class Storage_HSeqOfCallBack;
class Storage_PArray;
class Storage_HPArray;
class Storage_SequenceNodeOfSeqOfRoot;
class Storage_SequenceNodeOfSeqOfPersistent;
class Storage_IndexedDataMapNodeOfPType;
class Storage_DataMapNodeOfMapOfPers;
class Storage_DataMapIteratorOfMapOfPers;
class Storage_DataMapNodeOfMapOfCallBack;
class Storage_DataMapIteratorOfMapOfCallBack;
class Storage_SequenceNodeOfSeqOfCallBack;


//! Storage package is used to write and read persistent objects. <br>
//!     These objects are read and written by a retrieval or storage <br>
//!  algorithm (Storage_Schema object) in a container (disk, memory, <br>
//! network ...). Drivers (FSD_File objects) assign a physical <br>
//! container for data to be stored or retrieved. <br>
//! The standard procedure for an application in <br>
//! reading a container is the following: <br>
//! -   open the driver in reading mode, <br>
//! -   call the Read function from the schema, <br>
//!   setting the driver as a parameter. This   function returns <br>
//! an instance of the   Storage_Data class which contains the   data being read, <br>
//! -   close the driver. <br>
//! The standard procedure for an application in writing a container is the following: <br>
//! -   open the driver in writing mode, <br>
//! -   create an instance of the Storage_Data   class, then <br>
//!    add the persistent data to write   with the function AddRoot, <br>
//! -   call the function Write from the schema, <br>
//!   setting the driver and the Storage_Data   instance as parameters, <br>
//! -      close the driver. <br>
class Storage  {
public:

  DEFINE_STANDARD_ALLOC

  //! returns the version of Storage's read/write routines <br>
  Standard_EXPORT   static  TCollection_AsciiString Version() ;





protected:





private:




friend class Storage_BaseDriver;
friend class Storage_CallBack;
friend class Storage_DefaultCallBack;
friend class Storage_HeaderData;
friend class Storage_Data;
friend class Storage_TypeData;
friend class Storage_RootData;
friend class Storage_Root;
friend class Storage_Schema;
friend class Storage_SeqOfRoot;
friend class Storage_HSeqOfRoot;
friend class Storage_InternalData;
friend class Storage_stCONSTclCOM;
friend class Storage_TypedCallBack;
friend class Storage_SeqOfPersistent;
friend class Storage_HSeqOfPersistent;
friend class Storage_MapPSDHasher;
friend class Storage_PType;
friend class Storage_MapOfPers;
friend class Storage_MapOfCallBack;
friend class Storage_ArrayOfCallBack;
friend class Storage_HArrayOfCallBack;
friend class Storage_ArrayOfSchema;
friend class Storage_HArrayOfSchema;
friend class Storage_SeqOfCallBack;
friend class Storage_HSeqOfCallBack;
friend class Storage_PArray;
friend class Storage_HPArray;
friend class Storage_SequenceNodeOfSeqOfRoot;
friend class Storage_SequenceNodeOfSeqOfPersistent;
friend class Storage_IndexedDataMapNodeOfPType;
friend class Storage_DataMapNodeOfMapOfPers;
friend class Storage_DataMapIteratorOfMapOfPers;
friend class Storage_DataMapNodeOfMapOfCallBack;
friend class Storage_DataMapIteratorOfMapOfCallBack;
friend class Storage_SequenceNodeOfSeqOfCallBack;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
