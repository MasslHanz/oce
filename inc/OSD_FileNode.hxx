// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_FileNode_HeaderFile
#define _OSD_FileNode_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _OSD_Path_HeaderFile
#include <OSD_Path.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _OSD_Error_HeaderFile
#include <OSD_Error.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class OSD_OSDError;
class Standard_ProgramError;
class OSD_Path;
class OSD_Protection;
class Quantity_Date;


//! A class for 'File' and 'Directory' grouping common <br>
//!          methods. <br>
//!          The "file oriented" name means files or directories which are <br>
//!          in fact hard coded as files. <br>
class OSD_FileNode  {
public:

  DEFINE_STANDARD_ALLOC

  //! Gets file name and path. <br>
  Standard_EXPORT     void Path(OSD_Path& Name) const;
  //! Sets file name and path. <br>
//!          If a name is not found, it raises a program error. <br>
  Standard_EXPORT     void SetPath(const OSD_Path& Name) ;
  //! Returns TRUE if <me> exists. <br>
  Standard_EXPORT     Standard_Boolean Exists() ;
  //! Erases the FileNode from directory <br>
  Standard_EXPORT     void Remove() ;
  //! Moves <me> into another directory <br>
  Standard_EXPORT     void Move(const OSD_Path& NewPath) ;
  //! Copies <me> to another FileNode <br>
  Standard_EXPORT     void Copy(const OSD_Path& ToPath) ;
  //! Returns access mode of <me>. <br>
  Standard_EXPORT     OSD_Protection Protection() ;
  //! Changes protection of the FileNode <br>
  Standard_EXPORT     void SetProtection(const OSD_Protection& Prot) ;
  //! Returns last write access. <br>
//!          On UNIX, AccessMoment and CreationMoment return the <br>
//!          same value. <br>
  Standard_EXPORT     Quantity_Date AccessMoment() ;
  //! Returns creation date. <br>
//!          On UNIX, AccessMoment and CreationMoment return the <br>
//!          same value. <br>
  Standard_EXPORT     Quantity_Date CreationMoment() ;
  //! Returns User Identification. <br>
  Standard_EXPORT     Standard_Integer UserId() ;
  //! Returns Group Identification. <br>
  Standard_EXPORT     Standard_Integer GroupId() ;
  //! Returns TRUE if an error occurs <br>
  Standard_EXPORT     Standard_Boolean Failed() const;
  //! Resets error counter to zero <br>
  Standard_EXPORT     void Reset() ;
  //! Raises OSD_Error <br>
  Standard_EXPORT     void Perror() ;
  //! Returns error number if 'Failed' is TRUE. <br>
  Standard_EXPORT     Standard_Integer Error() const;





protected:

  //! Creates FileNode object <br>
//!          This is to be used with SetPath . <br>
//!          Allocate space for the file name and initializes this <br>
//!          name to an empty name. <br>
  Standard_EXPORT   OSD_FileNode();
  //! Instantiates the object FileNode storing its name. <br>
//!          If a name is not found, it raises a program error. <br>
  Standard_EXPORT   OSD_FileNode(const OSD_Path& Name);


OSD_Path myPath;
Standard_Integer myFileChannel;
OSD_Error myError;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
