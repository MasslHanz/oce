// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_Chronometer_HeaderFile
#define _OSD_Chronometer_HeaderFile

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
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif


//! This class measures CPU time (both user and system) consumed <br>
//!          by current process or thread. The chronometer can be started <br>
//!          and stopped multiple times, and measures cumulative time. <br>
class OSD_Chronometer  {
public:

  DEFINE_STANDARD_ALLOC

  //! Initializes a stopped Chronometer. <br>
  Standard_EXPORT   OSD_Chronometer(const Standard_Boolean ThisThreadOnly = Standard_False);
  
  Standard_EXPORT   virtual  void Destroy() ;
~OSD_Chronometer()
{
  Destroy();
}
  //! Stops and Reinitializes the Chronometer. <br>
  Standard_EXPORT   virtual  void Reset() ;
  //! Stops the Chronometer. <br>
  Standard_EXPORT   virtual  void Stop() ;
  //! Starts (after Create or Reset) or restarts (after Stop) <br>
//!          the chronometer. <br>
  Standard_EXPORT   virtual  void Start() ;
  //! Shows the current CPU user and system time on the <br>
//!          standard output stream <cout>. <br>
//!          The chronometer can be running (laps Time) or stopped. <br>
  Standard_EXPORT   virtual  void Show() ;
  //! Shows the current CPU user and system time on the output <br>
//!          stream <os>. <br>
//!          The chronometer can be running (laps Time) or stopped. <br>
  Standard_EXPORT   virtual  void Show(Standard_OStream& os) ;
  //! Returns the current CPU user time in a variable. <br>
//!          The chronometer can be running (laps Time) or stopped. <br>
  Standard_EXPORT     void Show(Standard_Real& UserSeconds) ;
  //! Returns the current CPU user and system time in variables. <br>
//!          The chronometer can be running (laps Time) or stopped. <br>
  Standard_EXPORT     void Show(Standard_Real& UserSeconds,Standard_Real& SystemSeconds) ;
  //! Returns CPU time (user and system) consumed by the current <br>
//!          process since its start, in seconds. The actual precision of <br>
//!          the measurement depends on granularity provided by the system, <br>
//!          and is platform-specific. <br>
  Standard_EXPORT   static  void GetProcessCPU(Standard_Real& UserSeconds,Standard_Real& SystemSeconds) ;
  //! Returns CPU time (user and system) consumed by the current <br>
//!          thread since its start. Note that this measurement is <br>
//!          platform-specific, as threads are implemented and managed <br>
//!          differently on different platforms and CPUs. <br>
  Standard_EXPORT   static  void GetThreadCPU(Standard_Real& UserSeconds,Standard_Real& SystemSeconds) ;





protected:



Standard_Boolean Stopped;


private:



Standard_Boolean ThreadOnly;
Standard_Real Start_user;
Standard_Real Start_sys;
Standard_Real Cumul_user;
Standard_Real Cumul_sys;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
