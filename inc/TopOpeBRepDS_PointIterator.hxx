// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_PointIterator_HeaderFile
#define _TopOpeBRepDS_PointIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopOpeBRepDS_InterferenceIterator_HeaderFile
#include <TopOpeBRepDS_InterferenceIterator.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_Interference_HeaderFile
#include <Handle_TopOpeBRepDS_Interference.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopOpeBRepDS_ListOfInterference;
class TopOpeBRepDS_Interference;



class TopOpeBRepDS_PointIterator  : public TopOpeBRepDS_InterferenceIterator {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates an  iterator on the  points on curves <br>
//!          described by the interferences in <L>. <br>
  Standard_EXPORT   TopOpeBRepDS_PointIterator(const TopOpeBRepDS_ListOfInterference& L);
  //! Returns  True if the Interference <I>  has a <br>
//!          GeometryType() TopOpeBRepDS_POINT or TopOpeBRepDS_VERTEX <br>
//!          returns False else. <br>
  Standard_EXPORT   virtual  Standard_Boolean MatchInterference(const Handle(TopOpeBRepDS_Interference)& I) const;
  //! Index of the point in the data structure. <br>
  Standard_EXPORT     Standard_Integer Current() const;
  
  Standard_EXPORT     TopAbs_Orientation Orientation(const TopAbs_State S) const;
  
  Standard_EXPORT     Standard_Real Parameter() const;
  
  Standard_EXPORT     Standard_Boolean IsVertex() const;
  
  Standard_EXPORT     Standard_Boolean IsPoint() const;
  
  Standard_EXPORT     Standard_Boolean DiffOriented() const;
  
  Standard_EXPORT     Standard_Boolean SameOriented() const;
  
  Standard_EXPORT     Standard_Integer Support() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
