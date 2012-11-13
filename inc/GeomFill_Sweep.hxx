// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Sweep_HeaderFile
#define _GeomFill_Sweep_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_GeomFill_LocationLaw_HeaderFile
#include <Handle_GeomFill_LocationLaw.hxx>
#endif
#ifndef _Handle_GeomFill_SectionLaw_HeaderFile
#include <Handle_GeomFill_SectionLaw.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_TColGeom2d_HArray1OfCurve_HeaderFile
#include <Handle_TColGeom2d_HArray1OfCurve.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfReal_HeaderFile
#include <Handle_TColStd_HArray2OfReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomFill_ApproxStyle_HeaderFile
#include <GeomFill_ApproxStyle.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
class GeomFill_LocationLaw;
class GeomFill_SectionLaw;
class Geom_Surface;
class TColGeom2d_HArray1OfCurve;
class TColStd_HArray2OfReal;
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_ConstructionError;
class Geom2d_Curve;


//! Geometrical Sweep Algorithm <br>
class GeomFill_Sweep  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomFill_Sweep(const Handle(GeomFill_LocationLaw)& Location,const Standard_Boolean WithKpart = Standard_True);
  //! Set parametric information <br>
//!          [<First>, <Last>] Sets the parametric bound of the <br>
//!                  sweeping surface to build. <br>
//!           <SectionFirst>, <SectionLast> gives coresponding <br>
//!           bounds parameter on the section law of <First> and <Last> <br>
//! <br>
//!           V-Iso on Sweeping Surface S(u,v) is defined by <br>
//!           Location(v) and Section(w) where <br>
//!           w = SectionFirst + (v - First) / (Last-First) <br>
//!             * (SectionLast - SectionFirst) <br>
  Standard_EXPORT     void SetDomain(const Standard_Real First,const Standard_Real Last,const Standard_Real SectionFirst,const Standard_Real SectionLast) ;
  //! Set Approximation Tolerance <br>
//!    Tol3d : Tolerance to surface approximation <br>
//!    Tol2d : Tolerance used to perform curve approximation <br>
//!            Normaly the 2d curve are approximated with a <br>
//!            tolerance given by the resolution method define in <br>
//!            <LocationLaw> but if this tolerance is too large Tol2d <br>
//!            is used. <br>
//!    TolAngular : Tolerance (in radian) to control the angle <br>
//!                 beetween tangents on the section law and <br>
//!                 tangent of iso-v on approximed surface <br>
  Standard_EXPORT     void SetTolerance(const Standard_Real Tol3d,const Standard_Real BoundTol = 1.0,const Standard_Real Tol2d = 1.0e-5,const Standard_Real TolAngular = 1.0) ;
  //! returns true if sections are U-Iso <br>
//! This can be produce in some cases when <WithKpart> is True. <br>
  Standard_EXPORT     Standard_Boolean ExchangeUV() const;
  //! returns true if Parametrisation sens in U is inverse of <br>
//!          parametrisation sens of section (or of path if ExchangeUV) <br>
  Standard_EXPORT     Standard_Boolean UReversed() const;
  //! returns true if Parametrisation sens in V is inverse of <br>
//!          parametrisation sens of path (or of section if ExchangeUV) <br>
  Standard_EXPORT     Standard_Boolean VReversed() const;
  //! Build the Sweeep  Surface <br>
//!    ApproxStyle defines Approximation Strategy <br>
//!    - GeomFill_Section : The composed Function : Location X Section <br>
//!                         is directly approximed. <br>
//!    - GeomFill_Location : The location law is approximed, and the <br>
//!                          SweepSurface is build algebric composition <br>
//!                          of approximed location law and section law <br>
//!                          This option is Ok, if Section.Surface() methode <br>
//!                          is effective. <br>
//!    Continuity : The continuity in v waiting on the surface <br>
//!    Degmax     : The maximum degree in v requiered on the surface <br>
//!    Segmax     : The maximum number of span in v requiered on <br>
//!                 the surface <br>
//! <br>
//!      raise If Domain are infinite or Profile not Setted. <br>
  Standard_EXPORT     void Build(const Handle(GeomFill_SectionLaw)& Section,const GeomFill_ApproxStyle Methode = GeomFill_Location,const GeomAbs_Shape Continuity = GeomAbs_C2,const Standard_Integer Degmax = 10,const Standard_Integer Segmax = 30) ;
  //! Tells if the Surface is Buildt. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Gets the Approximation  error. <br>
  Standard_EXPORT     Standard_Real ErrorOnSurface() const;
  //! Gets the Approximation  error. <br>
  Standard_EXPORT     void ErrorOnRestriction(const Standard_Boolean IsFirst,Standard_Real& UError,Standard_Real& VError) const;
  //! Gets the Approximation error. <br>
  Standard_EXPORT     void ErrorOnTrace(const Standard_Integer IndexOfTrace,Standard_Real& UError,Standard_Real& VError) const;
  
  Standard_EXPORT     Handle_Geom_Surface Surface() const;
  
  Standard_EXPORT     Handle_Geom2d_Curve Restriction(const Standard_Boolean IsFirst) const;
  
  Standard_EXPORT     Standard_Integer NumberOfTrace() const;
  
  Standard_EXPORT     Handle_Geom2d_Curve Trace(const Standard_Integer IndexOfTrace) const;





protected:





private:

  
  Standard_EXPORT     Standard_Boolean Build2d(const GeomAbs_Shape Continuity,const Standard_Integer Degmax,const Standard_Integer Segmax) ;
  
  Standard_EXPORT     Standard_Boolean BuildAll(const GeomAbs_Shape Continuity,const Standard_Integer Degmax,const Standard_Integer Segmax) ;
  
  Standard_EXPORT     Standard_Boolean BuildProduct(const GeomAbs_Shape Continuity,const Standard_Integer Degmax,const Standard_Integer Segmax) ;
  
  Standard_EXPORT     Standard_Boolean BuildKPart() ;


Standard_Real First;
Standard_Real Last;
Standard_Real SFirst;
Standard_Real SLast;
Standard_Real Tol3d;
Standard_Real BoundTol;
Standard_Real Tol2d;
Standard_Real TolAngular;
Standard_Real SError;
Handle_GeomFill_LocationLaw myLoc;
Handle_GeomFill_SectionLaw mySec;
Handle_Geom_Surface mySurface;
Handle_TColGeom2d_HArray1OfCurve myCurve2d;
Handle_TColStd_HArray2OfReal CError;
Standard_Boolean done;
Standard_Boolean myExchUV;
Standard_Boolean isUReversed;
Standard_Boolean isVReversed;
Standard_Boolean myKPart;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
