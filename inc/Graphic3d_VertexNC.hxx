// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_VertexNC_HeaderFile
#define _Graphic3d_VertexNC_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Graphic3d_VertexN_HeaderFile
#include <Graphic3d_VertexN.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Quantity_Color;
class Graphic3d_Vertex;
class Graphic3d_Vector;


//! This class allows the creation of a vertex with <br>
//!	    a colour and a 3D normal. <br>
class Graphic3d_VertexNC  : public Graphic3d_VertexN {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates a point with coordinates 0.0, 0.0, 0.0 <br>
//!	    for which the normal is 0.0, 0.0, 1.0 and <br>
//!	    the colour is Quantity_NOC_WHITE. <br>
  Standard_EXPORT   Graphic3d_VertexNC();
  //! Creates a point with coordinates <AX>, <AY>, <AZ> <br>
//!	    for which the normal is <ANX>, <ANY>, <ANZ> and <br>
//!	    the colour is <AColor>. <br>
//!	    If <FlagNormalise> is True the normal is already normalised <br>
//!	    Else the normal is not normalised, the graphic do it. <br>
  Standard_EXPORT   Graphic3d_VertexNC(const Standard_Real AX,const Standard_Real AY,const Standard_Real AZ,const Standard_Real ANX,const Standard_Real ANY,const Standard_Real ANZ,const Quantity_Color& AColor,const Standard_Boolean FlagNormalise = Standard_True);
  //! Creates a point in <APoint> for which the normal <br>
//!	    is <AVector> and the colour is <AColor>. <br>
//!	    If <FlagNormalise> is True the normal is already normalised <br>
//!	    Else the normal is not normalised, the graphic do it. <br>
  Standard_EXPORT   Graphic3d_VertexNC(const Graphic3d_Vertex& APoint,const Graphic3d_Vector& AVector,const Quantity_Color& AColor,const Standard_Boolean FlagNormalise = Standard_True);
  //! Modifies the colour of the point <me>. <br>
  Standard_EXPORT     void SetColor(const Quantity_Color& ColorNew) ;
  //! Returns the colour of the point <me>. <br>
  Standard_EXPORT     Quantity_Color Color() const;





protected:





private:



Quantity_Color MyColor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
