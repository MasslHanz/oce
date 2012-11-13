// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_HCurveTool_HeaderFile
#define _BRepBlend_HCurveTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _gp_Lin_HeaderFile
#include <gp_Lin.hxx>
#endif
#ifndef _gp_Circ_HeaderFile
#include <gp_Circ.hxx>
#endif
#ifndef _gp_Elips_HeaderFile
#include <gp_Elips.hxx>
#endif
#ifndef _gp_Hypr_HeaderFile
#include <gp_Hypr.hxx>
#endif
#ifndef _gp_Parab_HeaderFile
#include <gp_Parab.hxx>
#endif
#ifndef _Handle_Geom_BezierCurve_HeaderFile
#include <Handle_Geom_BezierCurve.hxx>
#endif
#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Adaptor3d_HCurve;
class TColStd_Array1OfReal;
class gp_Pnt;
class gp_Vec;
class Geom_BezierCurve;
class Geom_BSplineCurve;



class BRepBlend_HCurveTool  {
public:

  DEFINE_STANDARD_ALLOC

  
      static  Standard_Real FirstParameter(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  Standard_Real LastParameter(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  GeomAbs_Shape Continuity(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  Standard_Integer NbIntervals(const Handle(Adaptor3d_HCurve)& C,const GeomAbs_Shape S) ;
  
      static  void Intervals(const Handle(Adaptor3d_HCurve)& C,TColStd_Array1OfReal& T,const GeomAbs_Shape S) ;
  
      static  Standard_Boolean IsClosed(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  Standard_Boolean IsPeriodic(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  Standard_Real Period(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  gp_Pnt Value(const Handle(Adaptor3d_HCurve)& C,const Standard_Real U) ;
  
      static  void D0(const Handle(Adaptor3d_HCurve)& C,const Standard_Real U,gp_Pnt& P) ;
  
      static  void D1(const Handle(Adaptor3d_HCurve)& C,const Standard_Real U,gp_Pnt& P,gp_Vec& V) ;
  
      static  void D2(const Handle(Adaptor3d_HCurve)& C,const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) ;
  
      static  void D3(const Handle(Adaptor3d_HCurve)& C,const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) ;
  
      static  gp_Vec DN(const Handle(Adaptor3d_HCurve)& C,const Standard_Real U,const Standard_Integer N) ;
  
      static  Standard_Real Resolution(const Handle(Adaptor3d_HCurve)& C,const Standard_Real R3d) ;
  
      static  GeomAbs_CurveType GetType(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  gp_Lin Line(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  gp_Circ Circle(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  gp_Elips Ellipse(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  gp_Hypr Hyperbola(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  gp_Parab Parabola(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  Handle_Geom_BezierCurve Bezier(const Handle(Adaptor3d_HCurve)& C) ;
  
      static  Handle_Geom_BSplineCurve BSpline(const Handle(Adaptor3d_HCurve)& C) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamples(const Handle(Adaptor3d_HCurve)& C,const Standard_Real U0,const Standard_Real U1) ;





protected:





private:





};

#define CurveGen Handle_Adaptor3d_HCurve
#define CurveGen_hxx <Adaptor3d_HCurve.hxx>
#define BRepBlend_HCurveToolGen BRepBlend_HCurveTool
#define BRepBlend_HCurveToolGen_hxx <BRepBlend_HCurveTool.hxx>

#include <BRepBlend_HCurveToolGen.lxx>

#undef CurveGen
#undef CurveGen_hxx
#undef BRepBlend_HCurveToolGen
#undef BRepBlend_HCurveToolGen_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
