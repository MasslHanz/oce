// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_DataMapOfIntegerArc_HeaderFile
#define _MAT_DataMapOfIntegerArc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT_Arc_HeaderFile
#include <Handle_MAT_Arc.hxx>
#endif
#ifndef _Handle_MAT_DataMapNodeOfDataMapOfIntegerArc_HeaderFile
#include <Handle_MAT_DataMapNodeOfDataMapOfIntegerArc.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class MAT_Arc;
class TColStd_MapIntegerHasher;
class MAT_DataMapNodeOfDataMapOfIntegerArc;
class MAT_DataMapIteratorOfDataMapOfIntegerArc;



class MAT_DataMapOfIntegerArc  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MAT_DataMapOfIntegerArc(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MAT_DataMapOfIntegerArc& Assign(const MAT_DataMapOfIntegerArc& Other) ;
    MAT_DataMapOfIntegerArc& operator =(const MAT_DataMapOfIntegerArc& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MAT_DataMapOfIntegerArc()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const Handle(MAT_Arc)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const Handle_MAT_Arc& Find(const Standard_Integer& K) const;
   const Handle_MAT_Arc& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_MAT_Arc& ChangeFind(const Standard_Integer& K) ;
    Handle_MAT_Arc& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const Standard_Integer& K) ;





protected:





private:

  
  Standard_EXPORT   MAT_DataMapOfIntegerArc(const MAT_DataMapOfIntegerArc& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
