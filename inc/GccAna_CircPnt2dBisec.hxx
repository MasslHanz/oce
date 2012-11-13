// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccAna_CircPnt2dBisec_HeaderFile
#define _GccAna_CircPnt2dBisec_HeaderFile

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
#ifndef _gp_Circ2d_HeaderFile
#include <gp_Circ2d.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _Handle_GccInt_Bisec_HeaderFile
#include <Handle_GccInt_Bisec.hxx>
#endif
class Standard_OutOfRange;
class StdFail_NotDone;
class gp_Circ2d;
class gp_Pnt2d;
class GccInt_Bisec;


//! Describes functions for building a bisecting curve <br>
//! between a 2D circle and a point. <br>
//! A bisecting curve between a circle and a point is such a <br>
//! curve that each of its points is at the same distance from <br>
//! the circle and the point. It can be an ellipse, hyperbola, <br>
//! circle or line, depending on the relative position of the <br>
//! point and the circle. The algorithm computes all the <br>
//! elementary curves which are solutions. <br>
//! A CircPnt2dBisec object provides a framework for: <br>
//! -   defining the construction of the bisecting curves, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
class GccAna_CircPnt2dBisec  {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs bisecting curves between the circle Circle1 and the point Point2. <br>
  Standard_EXPORT   GccAna_CircPnt2dBisec(const gp_Circ2d& Circle1,const gp_Pnt2d& Point2);
  //! Returns true (this construction algorithm never fails). <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the number of curves, representing solutions computed by this algorithm. <br>
  Standard_EXPORT     Standard_Integer NbSolutions() const;
  //! Returns the solution number Index and raises OutOfRange <br>
//!          exception if Index is greater than the number of solutions. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is less than zero or <br>
//! greater than the number of solutions computed by this algorithm. <br>
  Standard_EXPORT     Handle_GccInt_Bisec ThisSolution(const Standard_Integer Index) const;





protected:





private:



Standard_Boolean WellDone;
Standard_Integer NbrSol;
gp_Circ2d circle;
gp_Pnt2d point;
Standard_Integer theposition;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
