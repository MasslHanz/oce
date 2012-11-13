// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_ThePWalkingInter_HeaderFile
#define _IntPatch_ThePWalkingInter_HeaderFile

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
#ifndef _Handle_IntSurf_LineOn2S_HeaderFile
#include <Handle_IntSurf_LineOn2S.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _IntImp_ConstIsoparametric_HeaderFile
#include <IntImp_ConstIsoparametric.hxx>
#endif
#ifndef _IntSurf_PntOn2S_HeaderFile
#include <IntSurf_PntOn2S.hxx>
#endif
#ifndef _gp_Dir2d_HeaderFile
#include <gp_Dir2d.hxx>
#endif
#ifndef _IntPatch_TheInt2SOfThePWalkingInter_HeaderFile
#include <IntPatch_TheInt2SOfThePWalkingInter.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _IntWalk_StatusDeflection_HeaderFile
#include <IntWalk_StatusDeflection.hxx>
#endif
class IntSurf_LineOn2S;
class Standard_OutOfRange;
class StdFail_NotDone;
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class IntPatch_TheInt2SOfThePWalkingInter;
class IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter;
class TColStd_Array1OfReal;
class IntSurf_PntOn2S;
class gp_Dir;



class IntPatch_ThePWalkingInter  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IntPatch_ThePWalkingInter(const Handle(Adaptor3d_HSurface)& Caro1,const Handle(Adaptor3d_HSurface)& Caro2,const Standard_Real TolTangency,const Standard_Real Epsilon,const Standard_Real Deflection,const Standard_Real Increment);
  
  Standard_EXPORT   IntPatch_ThePWalkingInter(const Handle(Adaptor3d_HSurface)& Caro1,const Handle(Adaptor3d_HSurface)& Caro2,const Standard_Real TolTangency,const Standard_Real Epsilon,const Standard_Real Deflection,const Standard_Real Increment,const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2);
  
  Standard_EXPORT     void Perform(const TColStd_Array1OfReal& ParDep) ;
  
  Standard_EXPORT     void Perform(const TColStd_Array1OfReal& ParDep,const Standard_Real u1min,const Standard_Real v1min,const Standard_Real u2min,const Standard_Real v2min,const Standard_Real u1max,const Standard_Real v1max,const Standard_Real u2max,const Standard_Real v2max) ;
  
  Standard_EXPORT     Standard_Boolean PerformFirstPoint(const TColStd_Array1OfReal& ParDep,IntSurf_PntOn2S& FirstPoint) ;
  
        Standard_Boolean IsDone() const;
  
        Standard_Integer NbPoints() const;
  
       const IntSurf_PntOn2S& Value(const Standard_Integer Index) const;
  
       const Handle_IntSurf_LineOn2S& Line() const;
  
        Standard_Boolean TangentAtFirst() const;
  
        Standard_Boolean TangentAtLast() const;
  
        Standard_Boolean IsClosed() const;
  
       const gp_Dir& TangentAtLine(Standard_Integer& Index) const;
  
  Standard_EXPORT     IntWalk_StatusDeflection TestDeflection() ;
  
  Standard_EXPORT     Standard_Boolean TestArret(const Standard_Boolean DejaReparti,TColStd_Array1OfReal& Param,IntImp_ConstIsoparametric& ChoixIso) ;
  
  Standard_EXPORT     void RepartirOuDiviser(Standard_Boolean& DejaReparti,IntImp_ConstIsoparametric& ChoixIso,Standard_Boolean& Arrive) ;
  
        void AddAPoint(Handle(IntSurf_LineOn2S)& line,const IntSurf_PntOn2S& POn2S) ;





protected:





private:

  
  Standard_EXPORT     Standard_Boolean ExtendLineInCommonZone(const IntImp_ConstIsoparametric theChoixIso,const Standard_Boolean theDirectionFlag) ;


Standard_Boolean done;
Handle_IntSurf_LineOn2S line;
Standard_Boolean close;
Standard_Boolean tgfirst;
Standard_Boolean tglast;
Standard_Integer indextg;
gp_Dir tgdir;
Standard_Real fleche;
Standard_Real pasMax;
Standard_Real tolconf;
Standard_Real pasuv[4];
Standard_Real pasSav[4];
Standard_Real pasInit[4];
Standard_Real Um1;
Standard_Real UM1;
Standard_Real Vm1;
Standard_Real VM1;
Standard_Real Um2;
Standard_Real UM2;
Standard_Real Vm2;
Standard_Real VM2;
Standard_Real ResoU1;
Standard_Real ResoU2;
Standard_Real ResoV1;
Standard_Real ResoV2;
Standard_Integer sensCheminement;
IntImp_ConstIsoparametric choixIsoSav;
IntSurf_PntOn2S previousPoint;
Standard_Boolean previoustg;
gp_Dir previousd;
gp_Dir2d previousd1;
gp_Dir2d previousd2;
gp_Dir2d firstd1;
gp_Dir2d firstd2;
IntPatch_TheInt2SOfThePWalkingInter myIntersectionOn2S;


};

#define ThePSurface Handle_Adaptor3d_HSurface
#define ThePSurface_hxx <Adaptor3d_HSurface.hxx>
#define ThePSurfaceTool Adaptor3d_HSurfaceTool
#define ThePSurfaceTool_hxx <Adaptor3d_HSurfaceTool.hxx>
#define IntWalk_TheInt2S IntPatch_TheInt2SOfThePWalkingInter
#define IntWalk_TheInt2S_hxx <IntPatch_TheInt2SOfThePWalkingInter.hxx>
#define IntWalk_TheFunctionOfTheInt2S IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter
#define IntWalk_TheFunctionOfTheInt2S_hxx <IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter.hxx>
#define IntWalk_TheFunctionOfTheInt2S IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter
#define IntWalk_TheFunctionOfTheInt2S_hxx <IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter.hxx>
#define IntWalk_PWalking IntPatch_ThePWalkingInter
#define IntWalk_PWalking_hxx <IntPatch_ThePWalkingInter.hxx>

#include <IntWalk_PWalking.lxx>

#undef ThePSurface
#undef ThePSurface_hxx
#undef ThePSurfaceTool
#undef ThePSurfaceTool_hxx
#undef IntWalk_TheInt2S
#undef IntWalk_TheInt2S_hxx
#undef IntWalk_TheFunctionOfTheInt2S
#undef IntWalk_TheFunctionOfTheInt2S_hxx
#undef IntWalk_TheFunctionOfTheInt2S
#undef IntWalk_TheFunctionOfTheInt2S_hxx
#undef IntWalk_PWalking
#undef IntWalk_PWalking_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
