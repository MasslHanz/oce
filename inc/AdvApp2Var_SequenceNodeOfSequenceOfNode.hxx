// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApp2Var_SequenceNodeOfSequenceOfNode_HeaderFile
#define _AdvApp2Var_SequenceNodeOfSequenceOfNode_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AdvApp2Var_SequenceNodeOfSequenceOfNode.hxx>

#include <AdvApp2Var_Node.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class AdvApp2Var_Node;
class AdvApp2Var_SequenceOfNode;



class AdvApp2Var_SequenceNodeOfSequenceOfNode : public TCollection_SeqNode
{

public:

  
    AdvApp2Var_SequenceNodeOfSequenceOfNode(const AdvApp2Var_Node& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      AdvApp2Var_Node& Value()  const;




  DEFINE_STANDARD_RTTI(AdvApp2Var_SequenceNodeOfSequenceOfNode)

protected:




private: 


  AdvApp2Var_Node myValue;


};

#define SeqItem AdvApp2Var_Node
#define SeqItem_hxx <AdvApp2Var_Node.hxx>
#define TCollection_SequenceNode AdvApp2Var_SequenceNodeOfSequenceOfNode
#define TCollection_SequenceNode_hxx <AdvApp2Var_SequenceNodeOfSequenceOfNode.hxx>
#define Handle_TCollection_SequenceNode Handle_AdvApp2Var_SequenceNodeOfSequenceOfNode
#define TCollection_SequenceNode_Type_() AdvApp2Var_SequenceNodeOfSequenceOfNode_Type_()
#define TCollection_Sequence AdvApp2Var_SequenceOfNode
#define TCollection_Sequence_hxx <AdvApp2Var_SequenceOfNode.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _AdvApp2Var_SequenceNodeOfSequenceOfNode_HeaderFile
