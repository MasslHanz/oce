// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ImageUtility_XWD_HeaderFile
#define _ImageUtility_XWD_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_AlienImage_XAlienImage_HeaderFile
#include <Handle_AlienImage_XAlienImage.hxx>
#endif
#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class AlienImage_XAlienImage;
class Image_Image;
class Standard_TypeMismatch;


//! Performs a "xwd" and creates a XAlienImage and an Image <br>
class ImageUtility_XWD  {
public:

  DEFINE_STANDARD_ALLOC

  //! Create a XWD object . <br>
  Standard_EXPORT   ImageUtility_XWD();
  //! execute a Spawn "xwd xwudOptions -out aTmpFile" . <br>
  Standard_EXPORT     Standard_Boolean XWD(const Standard_CString xwdOptions = "") ;
  //! returns the XAlienImage created from "xwd". <br>
  Standard_EXPORT     Handle_AlienImage_XAlienImage XAlienImage() const;
  //! returns the Image created from "xwd". <br>
  Standard_EXPORT     Handle_Image_Image Image() const;





protected:





private:



Handle_AlienImage_XAlienImage myXAlienImage;
Handle_Image_Image myImage;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
