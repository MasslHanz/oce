// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepToIGES_BRSolid_HeaderFile
#define _BRepToIGES_BRSolid_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepToIGES_BREntity_HeaderFile
#include <BRepToIGES_BREntity.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
class BRepToIGES_BREntity;
class IGESData_IGESEntity;
class TopoDS_Shape;
class TopoDS_Solid;
class TopoDS_CompSolid;
class TopoDS_Compound;


//! This class implements the transfer of Shape Entities from Geom <br>
//!          To IGES. These can be : <br>
//!            . Vertex <br>
//!            . Edge <br>
//!            . Wire <br>
class BRepToIGES_BRSolid  : public BRepToIGES_BREntity {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepToIGES_BRSolid();
  
  Standard_EXPORT   BRepToIGES_BRSolid(const BRepToIGES_BREntity& BR);
  //!  Transfert a Shape entity from TopoDS to IGES <br>
//!            this entity must be a Solid or a CompSolid or a Compound. <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSolid(const TopoDS_Shape& start) ;
  //!  Transfert a Solid entity from TopoDS to IGES <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSolid(const TopoDS_Solid& start) ;
  //!  Transfert an CompSolid entity from TopoDS to IGES <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferCompSolid(const TopoDS_CompSolid& start) ;
  //!  Transfert a Compound entity from TopoDS to IGES <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferCompound(const TopoDS_Compound& start) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
