// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_ARDriverSequence_HeaderFile
#define _MDF_ARDriverSequence_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_MDF_ARDriver_HeaderFile
#include <Handle_MDF_ARDriver.hxx>
#endif
#ifndef _Handle_MDF_SequenceNodeOfARDriverSequence_HeaderFile
#include <Handle_MDF_SequenceNodeOfARDriverSequence.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MDF_ARDriver;
class MDF_SequenceNodeOfARDriverSequence;



class MDF_ARDriverSequence  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      MDF_ARDriverSequence();
  
  Standard_EXPORT     void Clear() ;
~MDF_ARDriverSequence()
{
  Clear();
}
  
  Standard_EXPORT    const MDF_ARDriverSequence& Assign(const MDF_ARDriverSequence& Other) ;
   const MDF_ARDriverSequence& operator =(const MDF_ARDriverSequence& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(MDF_ARDriver)& T) ;
  
        void Append(MDF_ARDriverSequence& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(MDF_ARDriver)& T) ;
  
        void Prepend(MDF_ARDriverSequence& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(MDF_ARDriver)& T) ;
  
        void InsertBefore(const Standard_Integer Index,MDF_ARDriverSequence& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(MDF_ARDriver)& T) ;
  
        void InsertAfter(const Standard_Integer Index,MDF_ARDriverSequence& S) ;
  
  Standard_EXPORT    const Handle_MDF_ARDriver& First() const;
  
  Standard_EXPORT    const Handle_MDF_ARDriver& Last() const;
  
        void Split(const Standard_Integer Index,MDF_ARDriverSequence& Sub) ;
  
  Standard_EXPORT    const Handle_MDF_ARDriver& Value(const Standard_Integer Index) const;
   const Handle_MDF_ARDriver& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(MDF_ARDriver)& I) ;
  
  Standard_EXPORT     Handle_MDF_ARDriver& ChangeValue(const Standard_Integer Index) ;
    Handle_MDF_ARDriver& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   MDF_ARDriverSequence(const MDF_ARDriverSequence& Other);




};

#define SeqItem Handle_MDF_ARDriver
#define SeqItem_hxx <MDF_ARDriver.hxx>
#define TCollection_SequenceNode MDF_SequenceNodeOfARDriverSequence
#define TCollection_SequenceNode_hxx <MDF_SequenceNodeOfARDriverSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_MDF_SequenceNodeOfARDriverSequence
#define TCollection_SequenceNode_Type_() MDF_SequenceNodeOfARDriverSequence_Type_()
#define TCollection_Sequence MDF_ARDriverSequence
#define TCollection_Sequence_hxx <MDF_ARDriverSequence.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
