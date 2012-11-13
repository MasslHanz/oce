// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Voxel_Selector_HeaderFile
#define _Voxel_Selector_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_V3d_View_HeaderFile
#include <Handle_V3d_View.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class V3d_View;
class Voxel_BoolDS;
class Voxel_ColorDS;
class Voxel_ROctBoolDS;


//! Detects voxels in the viewer 3d under the mouse cursor. <br>
class Voxel_Selector  {
public:

  DEFINE_STANDARD_ALLOC

  //! An empty constructor. <br>
  Standard_EXPORT   Voxel_Selector();
  //! A constructor of the selector, <br>
//!          which initializes the classes <br>
//!          by a view, where the user selects the voxels. <br>
  Standard_EXPORT   Voxel_Selector(const Handle(V3d_View)& view);
  //! Initializes the selector by a view, <br>
//!          where the user selects the voxels. <br>
  Standard_EXPORT     void Init(const Handle(V3d_View)& view) ;
  //! Defines the voxels (1bit). <br>
  Standard_EXPORT     void SetVoxels(const Voxel_BoolDS& voxels) ;
  //! Defines the voxels (4bit). <br>
  Standard_EXPORT     void SetVoxels(const Voxel_ColorDS& voxels) ;
  //! Defines the voxels (1bit recursive splitting). <br>
  Standard_EXPORT     void SetVoxels(const Voxel_ROctBoolDS& voxels) ;
  //! Detects a voxel under the mouse cursor. <br>
  Standard_EXPORT     Standard_Boolean Detect(const Standard_Integer winx,const Standard_Integer winy,Standard_Integer& ix,Standard_Integer& iy,Standard_Integer& iz) ;





protected:





private:



Handle_V3d_View myView;
Standard_Address myVoxels;
Standard_Integer myIsBool;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
