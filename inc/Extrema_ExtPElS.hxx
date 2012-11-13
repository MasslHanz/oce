// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_ExtPElS_HeaderFile
#define _Extrema_ExtPElS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Extrema_POnSurf_HeaderFile
#include <Extrema_POnSurf.hxx>
#endif
class StdFail_NotDone;
class Standard_OutOfRange;
class gp_Pnt;
class gp_Cylinder;
class gp_Pln;
class gp_Cone;
class gp_Torus;
class gp_Sphere;
class Extrema_POnSurf;


//! It calculates all the extremum distances <br>
//!          between a point and a surface. <br>
//!          These distances can be minimum or maximum. <br>
class Extrema_ExtPElS  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Extrema_ExtPElS();
  //! It calculates all the distances between a point <br>
//!          and a cylinder from gp. <br>
//!          Tol is used to test if the point is on the axis. <br>
  Standard_EXPORT   Extrema_ExtPElS(const gp_Pnt& P,const gp_Cylinder& S,const Standard_Real Tol);
  
  Standard_EXPORT     void Perform(const gp_Pnt& P,const gp_Cylinder& S,const Standard_Real Tol) ;
  //! It calculates all the distances between a point <br>
//!          and a plane from gp. <br>
//!          Tol is used to test if the point is on the plane. <br>
  Standard_EXPORT   Extrema_ExtPElS(const gp_Pnt& P,const gp_Pln& S,const Standard_Real Tol);
  
  Standard_EXPORT     void Perform(const gp_Pnt& P,const gp_Pln& S,const Standard_Real Tol) ;
  //! It calculates all the distances between a point <br>
//!          and a cone from gp. <br>
//!          Tol is used to test if the point is at the apex or <br>
//!          on the axis. <br>
  Standard_EXPORT   Extrema_ExtPElS(const gp_Pnt& P,const gp_Cone& S,const Standard_Real Tol);
  
  Standard_EXPORT     void Perform(const gp_Pnt& P,const gp_Cone& S,const Standard_Real Tol) ;
  //! It calculates all the distances between a point <br>
//!          and a torus from gp. <br>
//!          Tol is used to test if the point is on the axis. <br>
  Standard_EXPORT   Extrema_ExtPElS(const gp_Pnt& P,const gp_Torus& S,const Standard_Real Tol);
  
  Standard_EXPORT     void Perform(const gp_Pnt& P,const gp_Torus& S,const Standard_Real Tol) ;
  //! It calculates all the distances between a point <br>
//!          and a sphere from gp. <br>
//!          Tol is used to test if the point is at the center. <br>
  Standard_EXPORT   Extrema_ExtPElS(const gp_Pnt& P,const gp_Sphere& S,const Standard_Real Tol);
  
  Standard_EXPORT     void Perform(const gp_Pnt& P,const gp_Sphere& S,const Standard_Real Tol) ;
  //! Returns True if the distances are found. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the number of extremum distances. <br>
  Standard_EXPORT     Standard_Integer NbExt() const;
  //! Returns the value of the Nth resulting square distance. <br>
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N) const;
  //! Returns the point of the Nth resulting distance. <br>
  Standard_EXPORT     Extrema_POnSurf Point(const Standard_Integer N) const;





protected:





private:



Standard_Boolean myDone;
Standard_Integer myNbExt;
Standard_Real mySqDist[4];
Extrema_POnSurf myPoint[4];


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
