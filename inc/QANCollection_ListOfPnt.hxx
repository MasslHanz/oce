// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANCollection_ListOfPnt_HeaderFile
#define _QANCollection_ListOfPnt_HeaderFile

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
#ifndef _Handle_QANCollection_ListNodeOfListOfPnt_HeaderFile
#include <Handle_QANCollection_ListNodeOfListOfPnt.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class QANCollection_ListIteratorOfListOfPnt;
class gp_Pnt;
class QANCollection_ListNodeOfListOfPnt;



class QANCollection_ListOfPnt  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   QANCollection_ListOfPnt();
  
  Standard_EXPORT     void Assign(const QANCollection_ListOfPnt& Other) ;
    void operator=(const QANCollection_ListOfPnt& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~QANCollection_ListOfPnt()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const gp_Pnt& I) ;
  
  Standard_EXPORT     void Prepend(const gp_Pnt& I,QANCollection_ListIteratorOfListOfPnt& theIt) ;
  
  Standard_EXPORT     void Prepend(QANCollection_ListOfPnt& Other) ;
  
  Standard_EXPORT     void Append(const gp_Pnt& I) ;
  
  Standard_EXPORT     void Append(const gp_Pnt& I,QANCollection_ListIteratorOfListOfPnt& theIt) ;
  
  Standard_EXPORT     void Append(QANCollection_ListOfPnt& Other) ;
  
  Standard_EXPORT     gp_Pnt& First() const;
  
  Standard_EXPORT     gp_Pnt& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(QANCollection_ListIteratorOfListOfPnt& It) ;
  
  Standard_EXPORT     void InsertBefore(const gp_Pnt& I,QANCollection_ListIteratorOfListOfPnt& It) ;
  
  Standard_EXPORT     void InsertBefore(QANCollection_ListOfPnt& Other,QANCollection_ListIteratorOfListOfPnt& It) ;
  
  Standard_EXPORT     void InsertAfter(const gp_Pnt& I,QANCollection_ListIteratorOfListOfPnt& It) ;
  
  Standard_EXPORT     void InsertAfter(QANCollection_ListOfPnt& Other,QANCollection_ListIteratorOfListOfPnt& It) ;


friend class QANCollection_ListIteratorOfListOfPnt;



protected:





private:

  
  Standard_EXPORT   QANCollection_ListOfPnt(const QANCollection_ListOfPnt& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item gp_Pnt
#define Item_hxx <gp_Pnt.hxx>
#define TCollection_ListNode QANCollection_ListNodeOfListOfPnt
#define TCollection_ListNode_hxx <QANCollection_ListNodeOfListOfPnt.hxx>
#define TCollection_ListIterator QANCollection_ListIteratorOfListOfPnt
#define TCollection_ListIterator_hxx <QANCollection_ListIteratorOfListOfPnt.hxx>
#define Handle_TCollection_ListNode Handle_QANCollection_ListNodeOfListOfPnt
#define TCollection_ListNode_Type_() QANCollection_ListNodeOfListOfPnt_Type_()
#define TCollection_List QANCollection_ListOfPnt
#define TCollection_List_hxx <QANCollection_ListOfPnt.hxx>

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
