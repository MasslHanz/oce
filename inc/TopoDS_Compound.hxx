// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_Compound_HeaderFile
#define _TopoDS_Compound_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif


//! Describes a compound which <br>
//! - references an underlying compound with the <br>
//!   potential to be given a location and an orientation <br>
//! - has a location for the underlying compound, giving <br>
//!   its placement in the local coordinate system <br>
//! - has an orientation for the underlying compound, in <br>
//!   terms of its geometry (as opposed to orientation in <br>
//!   relation to other shapes). <br>
class TopoDS_Compound  : public TopoDS_Shape {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs an Undefined Compound. <br>
      TopoDS_Compound();





protected:





private:





};


#include <TopoDS_Compound.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
