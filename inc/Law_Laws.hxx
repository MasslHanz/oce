// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Law_Laws_HeaderFile
#define _Law_Laws_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_Law_Function_HeaderFile
#include <Handle_Law_Function.hxx>
#endif
#ifndef _Handle_Law_ListNodeOfLaws_HeaderFile
#include <Handle_Law_ListNodeOfLaws.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class Law_ListIteratorOfLaws;
class Law_Function;
class Law_ListNodeOfLaws;



class Law_Laws  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Law_Laws();
  
  Standard_EXPORT     void Assign(const Law_Laws& Other) ;
    void operator=(const Law_Laws& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~Law_Laws()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Handle(Law_Function)& I) ;
  
  Standard_EXPORT     void Prepend(const Handle(Law_Function)& I,Law_ListIteratorOfLaws& theIt) ;
  
  Standard_EXPORT     void Prepend(Law_Laws& Other) ;
  
  Standard_EXPORT     void Append(const Handle(Law_Function)& I) ;
  
  Standard_EXPORT     void Append(const Handle(Law_Function)& I,Law_ListIteratorOfLaws& theIt) ;
  
  Standard_EXPORT     void Append(Law_Laws& Other) ;
  
  Standard_EXPORT     Handle_Law_Function& First() const;
  
  Standard_EXPORT     Handle_Law_Function& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(Law_ListIteratorOfLaws& It) ;
  
  Standard_EXPORT     void InsertBefore(const Handle(Law_Function)& I,Law_ListIteratorOfLaws& It) ;
  
  Standard_EXPORT     void InsertBefore(Law_Laws& Other,Law_ListIteratorOfLaws& It) ;
  
  Standard_EXPORT     void InsertAfter(const Handle(Law_Function)& I,Law_ListIteratorOfLaws& It) ;
  
  Standard_EXPORT     void InsertAfter(Law_Laws& Other,Law_ListIteratorOfLaws& It) ;


friend class Law_ListIteratorOfLaws;



protected:





private:

  
  Standard_EXPORT   Law_Laws(const Law_Laws& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Handle_Law_Function
#define Item_hxx <Law_Function.hxx>
#define TCollection_ListNode Law_ListNodeOfLaws
#define TCollection_ListNode_hxx <Law_ListNodeOfLaws.hxx>
#define TCollection_ListIterator Law_ListIteratorOfLaws
#define TCollection_ListIterator_hxx <Law_ListIteratorOfLaws.hxx>
#define Handle_TCollection_ListNode Handle_Law_ListNodeOfLaws
#define TCollection_ListNode_Type_() Law_ListNodeOfLaws_Type_()
#define TCollection_List Law_Laws
#define TCollection_List_hxx <Law_Laws.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
