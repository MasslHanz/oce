// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_SequenceNodeOfSequenceOfNamedFunction_HeaderFile
#define _ExprIntrp_SequenceNodeOfSequenceOfNamedFunction_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ExprIntrp_SequenceNodeOfSequenceOfNamedFunction.hxx>

#include <Handle_Expr_NamedFunction.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class Expr_NamedFunction;
class ExprIntrp_SequenceOfNamedFunction;



class ExprIntrp_SequenceNodeOfSequenceOfNamedFunction : public TCollection_SeqNode
{

public:

  
    ExprIntrp_SequenceNodeOfSequenceOfNamedFunction(const Handle(Expr_NamedFunction)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Expr_NamedFunction)& Value()  const;




  DEFINE_STANDARD_RTTI(ExprIntrp_SequenceNodeOfSequenceOfNamedFunction)

protected:




private: 


  Handle(Expr_NamedFunction) myValue;


};

#define SeqItem Handle(Expr_NamedFunction)
#define SeqItem_hxx <Expr_NamedFunction.hxx>
#define TCollection_SequenceNode ExprIntrp_SequenceNodeOfSequenceOfNamedFunction
#define TCollection_SequenceNode_hxx <ExprIntrp_SequenceNodeOfSequenceOfNamedFunction.hxx>
#define Handle_TCollection_SequenceNode Handle_ExprIntrp_SequenceNodeOfSequenceOfNamedFunction
#define TCollection_SequenceNode_Type_() ExprIntrp_SequenceNodeOfSequenceOfNamedFunction_Type_()
#define TCollection_Sequence ExprIntrp_SequenceOfNamedFunction
#define TCollection_Sequence_hxx <ExprIntrp_SequenceOfNamedFunction.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _ExprIntrp_SequenceNodeOfSequenceOfNamedFunction_HeaderFile
