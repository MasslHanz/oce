// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_Disk_HeaderFile
#define _OSD_Disk_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _OSD_Error_HeaderFile
#include <OSD_Error.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class OSD_OSDError;
class OSD_Path;


//! Disk management <br>
class OSD_Disk  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates a disk object. <br>
//!          This is used only when a class contains a Disk field. <br>
//!          By default, its name is initialized to current working disk. <br>
  Standard_EXPORT   OSD_Disk();
  //! Initializes the object Disk with the disk name <br>
//!          associated to the OSD_Path. <br>
  Standard_EXPORT   OSD_Disk(const OSD_Path& Name);
  //! Initializes the object Disk with <PathName>. <br>
//!          <PathName> specifies any file within the mounted <br>
//!          file system. <br>
//!          Example : OSD_Disk myDisk ("/tmp") <br>
//!                    Initializes a disk object with the mounted <br>
//!                    file associated to /tmp. <br>
  Standard_EXPORT   OSD_Disk(const Standard_CString PathName);
  //! Returns disk name of <me>. <br>
  Standard_EXPORT     OSD_Path Name() const;
  //! Instantiates <me> with <Name>. <br>
  Standard_EXPORT     void SetName(const OSD_Path& Name) ;
  //! Returns total disk capacity in 512 bytes blocks. <br>
  Standard_EXPORT     Standard_Integer DiskSize() ;
  //! Returns free available 512 bytes blocks on disk. <br>
  Standard_EXPORT     Standard_Integer DiskFree() ;
  //! Returns user's disk quota (in Bytes). <br>
  Standard_EXPORT     Standard_Integer DiskQuota() ;
  //! Sets user's disk quota (in Bytes). <br>
//!  Warning: Needs system administrator privilege. <br>
  Standard_EXPORT     void SetDiskQuota(const Standard_Integer QuotaSize) ;
  //! Activates user's disk quota <br>
//!  Warning: Needs system administrator privilege. <br>
  Standard_EXPORT     void SetQuotaOn() ;
  //! Deactivates user's disk quota <br>
//!  Warning: Needs system administrator privilege. <br>
  Standard_EXPORT     void SetQuotaOff() ;
  //! Returns TRUE if an error occurs <br>
  Standard_EXPORT     Standard_Boolean Failed() const;
  //! Resets error counter to zero <br>
  Standard_EXPORT     void Reset() ;
  //! Raises OSD_Error <br>
  Standard_EXPORT     void Perror() ;
  //! Returns error number if 'Failed' is TRUE. <br>
  Standard_EXPORT     Standard_Integer Error() const;





protected:





private:



TCollection_AsciiString DiskName;
Standard_Integer myQuotaSize;
OSD_Error myError;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
