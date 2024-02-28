// ======================================================================
// \title  PassiveEventsComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PassiveEvents component base class
// ======================================================================

#ifndef PassiveEventsComponentAc_HPP
#define PassiveEventsComponentAc_HPP

#include "AArrayAc.hpp"
#include "EEnumAc.hpp"
#include "FpConfig.hpp"
#include "Fw/Cmd/CmdPortAc.hpp"
#include "Fw/Cmd/CmdRegPortAc.hpp"
#include "Fw/Cmd/CmdResponsePortAc.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Log/LogPortAc.hpp"
#include "Fw/Log/LogString.hpp"
#if FW_ENABLE_TEXT_LOGGING == 1
#include "Fw/Log/LogTextPortAc.hpp"
#endif
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Fw/Prm/PrmGetPortAc.hpp"
#include "Fw/Prm/PrmSetPortAc.hpp"
#include "Fw/Time/TimePortAc.hpp"
#include "Fw/Tlm/TlmPortAc.hpp"
#include "NoArgsPortAc.hpp"
#include "NoArgsReturnPortAc.hpp"
#include "Os/Mutex.hpp"
#include "SSerializableAc.hpp"
#include "TypedPortAc.hpp"
#include "TypedReturnPortAc.hpp"

//! \class PassiveEventsComponentBase
//! \brief Auto-generated base for PassiveEvents component
//!
//! A passive component with events
class PassiveEventsComponentBase :
  public Fw::PassiveComponentBase
{

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    friend class PassiveEventsComponentBaseFriend;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    //! Enumerations for numbers of special input ports
    enum {
      NUM_CMDIN_INPUT_PORTS = 1,
    };

    //! Enumerations for numbers of typed input ports
    enum {
      NUM_NOARGSGUARDED_INPUT_PORTS = 1,
      NUM_NOARGSRETURNGUARDED_INPUT_PORTS = 1,
      NUM_NOARGSRETURNSYNC_INPUT_PORTS = 3,
      NUM_NOARGSSYNC_INPUT_PORTS = 3,
      NUM_TYPEDGUARDED_INPUT_PORTS = 1,
      NUM_TYPEDRETURNGUARDED_INPUT_PORTS = 1,
      NUM_TYPEDRETURNSYNC_INPUT_PORTS = 3,
      NUM_TYPEDSYNC_INPUT_PORTS = 3,
    };

    //! Enumerations for numbers of special output ports
    enum {
      NUM_CMDREGOUT_OUTPUT_PORTS = 1,
      NUM_CMDRESPONSEOUT_OUTPUT_PORTS = 1,
      NUM_EVENTOUT_OUTPUT_PORTS = 1,
      NUM_PRMGETOUT_OUTPUT_PORTS = 1,
      NUM_PRMSETOUT_OUTPUT_PORTS = 1,
      NUM_TEXTEVENTOUT_OUTPUT_PORTS = 1,
      NUM_TIMEGETOUT_OUTPUT_PORTS = 1,
      NUM_TLMOUT_OUTPUT_PORTS = 1,
    };

    //! Enumerations for numbers of typed output ports
    enum {
      NUM_NOARGSOUT_OUTPUT_PORTS = 1,
      NUM_NOARGSRETURNOUT_OUTPUT_PORTS = 1,
      NUM_TYPEDOUT_OUTPUT_PORTS = 1,
      NUM_TYPEDRETURNOUT_OUTPUT_PORTS = 1,
    };

    //! Event IDs
    enum {
      EVENTID_EVENTACTIVITYHIGH = 0x0, //!< An activity high event with no params
      EVENTID_EVENTACTIVITYLOWTHROTTLED = 0x10, //!< An activity low, throttled event with primitive params
      EVENTID_EVENTCOMMAND = 0x11, //!< A command event with string params
      EVENTID_EVENTDIAGNOSTIC = 0x12, //!< A diagnostic event with enum params
      EVENTID_EVENTFATALTHROTTLED = 0x13, //!< A fatal, throttled event with array params
      EVENTID_EVENTWARNINGHIGH = 0x20, //!< A warning high event with struct params
      EVENTID_EVENTWARNINGLOWTHROTTLED = 0x21, //!< A warning low, throttled event with no params
    };

    //! Event throttle values: sets initial value of countdown variables
    enum {
      EVENTID_EVENTACTIVITYLOWTHROTTLED_THROTTLE = 5, //!< Throttle reset count for EventActivityLowThrottled
      EVENTID_EVENTFATALTHROTTLED_THROTTLE = 10, //!< Throttle reset count for EventFatalThrottled
      EVENTID_EVENTWARNINGLOWTHROTTLED_THROTTLE = 10, //!< Throttle reset count for EventWarningLowThrottled
    };

  public:

    // ----------------------------------------------------------------------
    // Component initialization
    // ----------------------------------------------------------------------

    //! Initialize PassiveEventsComponentBase object
    void init(
        FwInstanceIdType instance = 0 //!< The instance number
    );

  public:

    // ----------------------------------------------------------------------
    // Getters for special input ports
    // ----------------------------------------------------------------------

    //! Get special input port at index
    //!
    //! \return cmdIn[portNum]
    Fw::InputCmdPort* get_cmdIn_InputPort(
        FwIndexType portNum //!< The port number
    );

  public:

    // ----------------------------------------------------------------------
    // Getters for typed input ports
    // ----------------------------------------------------------------------

    //! Get typed input port at index
    //!
    //! \return noArgsGuarded[portNum]
    Ports::InputNoArgsPort* get_noArgsGuarded_InputPort(
        FwIndexType portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return noArgsReturnGuarded[portNum]
    Ports::InputNoArgsReturnPort* get_noArgsReturnGuarded_InputPort(
        FwIndexType portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return noArgsReturnSync[portNum]
    Ports::InputNoArgsReturnPort* get_noArgsReturnSync_InputPort(
        FwIndexType portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return noArgsSync[portNum]
    Ports::InputNoArgsPort* get_noArgsSync_InputPort(
        FwIndexType portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedGuarded[portNum]
    Ports::InputTypedPort* get_typedGuarded_InputPort(
        FwIndexType portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedReturnGuarded[portNum]
    Ports::InputTypedReturnPort* get_typedReturnGuarded_InputPort(
        FwIndexType portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedReturnSync[portNum]
    Ports::InputTypedReturnPort* get_typedReturnSync_InputPort(
        FwIndexType portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedSync[portNum]
    Ports::InputTypedPort* get_typedSync_InputPort(
        FwIndexType portNum //!< The port number
    );

  public:

    // ----------------------------------------------------------------------
    // Connect input ports to special output ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdRegOut[portNum]
    void set_cmdRegOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputCmdRegPort* port //!< The input port
    );

    //! Connect port to cmdResponseOut[portNum]
    void set_cmdResponseOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputCmdResponsePort* port //!< The input port
    );

    //! Connect port to eventOut[portNum]
    void set_eventOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputLogPort* port //!< The input port
    );

    //! Connect port to prmGetOut[portNum]
    void set_prmGetOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputPrmGetPort* port //!< The input port
    );

    //! Connect port to prmSetOut[portNum]
    void set_prmSetOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputPrmSetPort* port //!< The input port
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Connect port to textEventOut[portNum]
    void set_textEventOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputLogTextPort* port //!< The input port
    );

#endif

    //! Connect port to timeGetOut[portNum]
    void set_timeGetOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputTimePort* port //!< The input port
    );

    //! Connect port to tlmOut[portNum]
    void set_tlmOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputTlmPort* port //!< The input port
    );

  public:

    // ----------------------------------------------------------------------
    // Connect typed input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to noArgsOut[portNum]
    void set_noArgsOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Ports::InputNoArgsPort* port //!< The input port
    );

    //! Connect port to noArgsReturnOut[portNum]
    void set_noArgsReturnOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Ports::InputNoArgsReturnPort* port //!< The input port
    );

    //! Connect port to typedOut[portNum]
    void set_typedOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Ports::InputTypedPort* port //!< The input port
    );

    //! Connect port to typedReturnOut[portNum]
    void set_typedReturnOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Ports::InputTypedReturnPort* port //!< The input port
    );

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serial input ports to special output ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdRegOut[portNum]
    void set_cmdRegOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to cmdResponseOut[portNum]
    void set_cmdResponseOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to eventOut[portNum]
    void set_eventOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to prmSetOut[portNum]
    void set_prmSetOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Connect port to textEventOut[portNum]
    void set_textEventOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

    //! Connect port to timeGetOut[portNum]
    void set_timeGetOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to tlmOut[portNum]
    void set_tlmOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serial input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to noArgsOut[portNum]
    void set_noArgsOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to typedOut[portNum]
    void set_typedOut_OutputPort(
        FwIndexType portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

  PROTECTED:

    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct PassiveEventsComponentBase object
    PassiveEventsComponentBase(
        const char* compName = "" //!< The component name
    );

    //! Destroy PassiveEventsComponentBase object
    virtual ~PassiveEventsComponentBase();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of special input ports
    // ----------------------------------------------------------------------

    //! Get the number of cmdIn input ports
    //!
    //! \return The number of cmdIn input ports
    FwIndexType getNum_cmdIn_InputPorts() const;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of typed input ports
    // ----------------------------------------------------------------------

    //! Get the number of noArgsGuarded input ports
    //!
    //! \return The number of noArgsGuarded input ports
    FwIndexType getNum_noArgsGuarded_InputPorts() const;

    //! Get the number of noArgsReturnGuarded input ports
    //!
    //! \return The number of noArgsReturnGuarded input ports
    FwIndexType getNum_noArgsReturnGuarded_InputPorts() const;

    //! Get the number of noArgsReturnSync input ports
    //!
    //! \return The number of noArgsReturnSync input ports
    FwIndexType getNum_noArgsReturnSync_InputPorts() const;

    //! Get the number of noArgsSync input ports
    //!
    //! \return The number of noArgsSync input ports
    FwIndexType getNum_noArgsSync_InputPorts() const;

    //! Get the number of typedGuarded input ports
    //!
    //! \return The number of typedGuarded input ports
    FwIndexType getNum_typedGuarded_InputPorts() const;

    //! Get the number of typedReturnGuarded input ports
    //!
    //! \return The number of typedReturnGuarded input ports
    FwIndexType getNum_typedReturnGuarded_InputPorts() const;

    //! Get the number of typedReturnSync input ports
    //!
    //! \return The number of typedReturnSync input ports
    FwIndexType getNum_typedReturnSync_InputPorts() const;

    //! Get the number of typedSync input ports
    //!
    //! \return The number of typedSync input ports
    FwIndexType getNum_typedSync_InputPorts() const;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of special output ports
    // ----------------------------------------------------------------------

    //! Get the number of cmdRegOut output ports
    //!
    //! \return The number of cmdRegOut output ports
    FwIndexType getNum_cmdRegOut_OutputPorts() const;

    //! Get the number of cmdResponseOut output ports
    //!
    //! \return The number of cmdResponseOut output ports
    FwIndexType getNum_cmdResponseOut_OutputPorts() const;

    //! Get the number of eventOut output ports
    //!
    //! \return The number of eventOut output ports
    FwIndexType getNum_eventOut_OutputPorts() const;

    //! Get the number of prmGetOut output ports
    //!
    //! \return The number of prmGetOut output ports
    FwIndexType getNum_prmGetOut_OutputPorts() const;

    //! Get the number of prmSetOut output ports
    //!
    //! \return The number of prmSetOut output ports
    FwIndexType getNum_prmSetOut_OutputPorts() const;

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Get the number of textEventOut output ports
    //!
    //! \return The number of textEventOut output ports
    FwIndexType getNum_textEventOut_OutputPorts() const;

#endif

    //! Get the number of timeGetOut output ports
    //!
    //! \return The number of timeGetOut output ports
    FwIndexType getNum_timeGetOut_OutputPorts() const;

    //! Get the number of tlmOut output ports
    //!
    //! \return The number of tlmOut output ports
    FwIndexType getNum_tlmOut_OutputPorts() const;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of typed output ports
    // ----------------------------------------------------------------------

    //! Get the number of noArgsOut output ports
    //!
    //! \return The number of noArgsOut output ports
    FwIndexType getNum_noArgsOut_OutputPorts() const;

    //! Get the number of noArgsReturnOut output ports
    //!
    //! \return The number of noArgsReturnOut output ports
    FwIndexType getNum_noArgsReturnOut_OutputPorts() const;

    //! Get the number of typedOut output ports
    //!
    //! \return The number of typedOut output ports
    FwIndexType getNum_typedOut_OutputPorts() const;

    //! Get the number of typedReturnOut output ports
    //!
    //! \return The number of typedReturnOut output ports
    FwIndexType getNum_typedReturnOut_OutputPorts() const;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for special output ports
    // ----------------------------------------------------------------------

    //! Check whether port cmdRegOut is connected
    //!
    //! \return Whether port cmdRegOut is connected
    bool isConnected_cmdRegOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

    //! Check whether port cmdResponseOut is connected
    //!
    //! \return Whether port cmdResponseOut is connected
    bool isConnected_cmdResponseOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

    //! Check whether port eventOut is connected
    //!
    //! \return Whether port eventOut is connected
    bool isConnected_eventOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

    //! Check whether port prmGetOut is connected
    //!
    //! \return Whether port prmGetOut is connected
    bool isConnected_prmGetOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

    //! Check whether port prmSetOut is connected
    //!
    //! \return Whether port prmSetOut is connected
    bool isConnected_prmSetOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Check whether port textEventOut is connected
    //!
    //! \return Whether port textEventOut is connected
    bool isConnected_textEventOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

#endif

    //! Check whether port timeGetOut is connected
    //!
    //! \return Whether port timeGetOut is connected
    bool isConnected_timeGetOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

    //! Check whether port tlmOut is connected
    //!
    //! \return Whether port tlmOut is connected
    bool isConnected_tlmOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for typed output ports
    // ----------------------------------------------------------------------

    //! Check whether port noArgsOut is connected
    //!
    //! \return Whether port noArgsOut is connected
    bool isConnected_noArgsOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

    //! Check whether port noArgsReturnOut is connected
    //!
    //! \return Whether port noArgsReturnOut is connected
    bool isConnected_noArgsReturnOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

    //! Check whether port typedOut is connected
    //!
    //! \return Whether port typedOut is connected
    bool isConnected_typedOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

    //! Check whether port typedReturnOut is connected
    //!
    //! \return Whether port typedReturnOut is connected
    bool isConnected_typedReturnOut_OutputPort(
        FwIndexType portNum //!< The port number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Handlers to implement for typed input ports
    // ----------------------------------------------------------------------

    //! Handler for input port noArgsGuarded
    virtual void noArgsGuarded_handler(
        FwIndexType portNum //!< The port number
    ) = 0;

    //! Handler for input port noArgsReturnGuarded
    virtual U32 noArgsReturnGuarded_handler(
        FwIndexType portNum //!< The port number
    ) = 0;

    //! Handler for input port noArgsReturnSync
    virtual U32 noArgsReturnSync_handler(
        FwIndexType portNum //!< The port number
    ) = 0;

    //! Handler for input port noArgsSync
    virtual void noArgsSync_handler(
        FwIndexType portNum //!< The port number
    ) = 0;

    //! Handler for input port typedGuarded
    virtual void typedGuarded_handler(
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedReturnGuarded
    virtual F32 typedReturnGuarded_handler(
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedReturnSync
    virtual F32 typedReturnSync_handler(
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedSync
    virtual void typedSync_handler(
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Port handler base-class functions for typed input ports
    //
    // Call these functions directly to bypass the corresponding ports
    // ----------------------------------------------------------------------

    //! Handler base-class function for input port noArgsGuarded
    void noArgsGuarded_handlerBase(
        FwIndexType portNum //!< The port number
    );

    //! Handler base-class function for input port noArgsReturnGuarded
    U32 noArgsReturnGuarded_handlerBase(
        FwIndexType portNum //!< The port number
    );

    //! Handler base-class function for input port noArgsReturnSync
    U32 noArgsReturnSync_handlerBase(
        FwIndexType portNum //!< The port number
    );

    //! Handler base-class function for input port noArgsSync
    void noArgsSync_handlerBase(
        FwIndexType portNum //!< The port number
    );

    //! Handler base-class function for input port typedGuarded
    void typedGuarded_handlerBase(
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedReturnGuarded
    F32 typedReturnGuarded_handlerBase(
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedReturnSync
    F32 typedReturnSync_handlerBase(
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedSync
    void typedSync_handlerBase(
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Invocation functions for typed output ports
    // ----------------------------------------------------------------------

    //! Invoke output port noArgsOut
    void noArgsOut_out(
        FwIndexType portNum //!< The port number
    );

    //! Invoke output port noArgsReturnOut
    U32 noArgsReturnOut_out(
        FwIndexType portNum //!< The port number
    );

    //! Invoke output port typedOut
    void typedOut_out(
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Invoke output port typedReturnOut
    F32 typedReturnOut_out(
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event logging functions
    // ----------------------------------------------------------------------

    //! Log event EventActivityHigh
    //!
    //! An activity high event with no params
    void log_ACTIVITY_HI_EventActivityHigh();

    //! Log event EventActivityLowThrottled
    //!
    //! An activity low, throttled event with primitive params
    void log_ACTIVITY_LO_EventActivityLowThrottled(
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b //!< A boolean
    );

    //! Log event EventCommand
    //!
    //! A command event with string params
    void log_COMMAND_EventCommand(
        const Fw::LogStringArg& str1, //!< A string
        const Fw::LogStringArg& str2 //!< Another string
    );

    //! Log event EventDiagnostic
    //!
    //! A diagnostic event with enum params
    void log_DIAGNOSTIC_EventDiagnostic(
        E e //!< An enum
    );

    //! Log event EventFatalThrottled
    //!
    //! A fatal, throttled event with array params
    void log_FATAL_EventFatalThrottled(
        A a //!< An array
    );

    //! Log event EventWarningHigh
    //!
    //! A warning high event with struct params
    void log_WARNING_HI_EventWarningHigh(
        S s //!< A struct
    );

    //! Log event EventWarningLowThrottled
    //!
    //! A warning low, throttled event with no params
    void log_WARNING_LO_EventWarningLowThrottled();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event throttle reset functions
    // ----------------------------------------------------------------------

    //! Reset throttle value for EventActivityLowThrottled
    void log_ACTIVITY_LO_EventActivityLowThrottled_ThrottleClear();

    //! Reset throttle value for EventFatalThrottled
    void log_FATAL_EventFatalThrottled_ThrottleClear();

    //! Reset throttle value for EventWarningLowThrottled
    void log_WARNING_LO_EventWarningLowThrottled_ThrottleClear();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Time
    // ----------------------------------------------------------------------

    //!  Get the time
    //!
    //! \\return The current time
    Fw::Time getTime();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Mutex operations for guarded ports
    //
    // You can override these operations to provide more sophisticated
    // synchronization
    // ----------------------------------------------------------------------

    //! Lock the guarded mutex
    virtual void lock();

    //! Unlock the guarded mutex
    virtual void unLock();

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on special input ports
    // ----------------------------------------------------------------------

    //! Callback for port cmdIn
    static void m_p_cmdIn_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        FwIndexType portNum, //!< The port number
        FwOpcodeType opCode, //!< Command Op Code
        U32 cmdSeq, //!< Command Sequence
        Fw::CmdArgBuffer& args //!< Buffer containing arguments
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on typed input ports
    // ----------------------------------------------------------------------

    //! Callback for port noArgsGuarded
    static void m_p_noArgsGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        FwIndexType portNum //!< The port number
    );

    //! Callback for port noArgsReturnGuarded
    static U32 m_p_noArgsReturnGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        FwIndexType portNum //!< The port number
    );

    //! Callback for port noArgsReturnSync
    static U32 m_p_noArgsReturnSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        FwIndexType portNum //!< The port number
    );

    //! Callback for port noArgsSync
    static void m_p_noArgsSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        FwIndexType portNum //!< The port number
    );

    //! Callback for port typedGuarded
    static void m_p_typedGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedReturnGuarded
    static F32 m_p_typedReturnGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedReturnSync
    static F32 m_p_typedReturnSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedSync
    static void m_p_typedSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        FwIndexType portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Special input ports
    // ----------------------------------------------------------------------

    //! Input port cmdIn
    Fw::InputCmdPort m_cmdIn_InputPort[NUM_CMDIN_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed input ports
    // ----------------------------------------------------------------------

    //! Input port noArgsGuarded
    Ports::InputNoArgsPort m_noArgsGuarded_InputPort[NUM_NOARGSGUARDED_INPUT_PORTS];

    //! Input port noArgsReturnGuarded
    Ports::InputNoArgsReturnPort m_noArgsReturnGuarded_InputPort[NUM_NOARGSRETURNGUARDED_INPUT_PORTS];

    //! Input port noArgsReturnSync
    Ports::InputNoArgsReturnPort m_noArgsReturnSync_InputPort[NUM_NOARGSRETURNSYNC_INPUT_PORTS];

    //! Input port noArgsSync
    Ports::InputNoArgsPort m_noArgsSync_InputPort[NUM_NOARGSSYNC_INPUT_PORTS];

    //! Input port typedGuarded
    Ports::InputTypedPort m_typedGuarded_InputPort[NUM_TYPEDGUARDED_INPUT_PORTS];

    //! Input port typedReturnGuarded
    Ports::InputTypedReturnPort m_typedReturnGuarded_InputPort[NUM_TYPEDRETURNGUARDED_INPUT_PORTS];

    //! Input port typedReturnSync
    Ports::InputTypedReturnPort m_typedReturnSync_InputPort[NUM_TYPEDRETURNSYNC_INPUT_PORTS];

    //! Input port typedSync
    Ports::InputTypedPort m_typedSync_InputPort[NUM_TYPEDSYNC_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Special output ports
    // ----------------------------------------------------------------------

    //! Output port cmdRegOut
    Fw::OutputCmdRegPort m_cmdRegOut_OutputPort[NUM_CMDREGOUT_OUTPUT_PORTS];

    //! Output port cmdResponseOut
    Fw::OutputCmdResponsePort m_cmdResponseOut_OutputPort[NUM_CMDRESPONSEOUT_OUTPUT_PORTS];

    //! Output port eventOut
    Fw::OutputLogPort m_eventOut_OutputPort[NUM_EVENTOUT_OUTPUT_PORTS];

    //! Output port prmGetOut
    Fw::OutputPrmGetPort m_prmGetOut_OutputPort[NUM_PRMGETOUT_OUTPUT_PORTS];

    //! Output port prmSetOut
    Fw::OutputPrmSetPort m_prmSetOut_OutputPort[NUM_PRMSETOUT_OUTPUT_PORTS];

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Output port textEventOut
    Fw::OutputLogTextPort m_textEventOut_OutputPort[NUM_TEXTEVENTOUT_OUTPUT_PORTS];

#endif

    //! Output port timeGetOut
    Fw::OutputTimePort m_timeGetOut_OutputPort[NUM_TIMEGETOUT_OUTPUT_PORTS];

    //! Output port tlmOut
    Fw::OutputTlmPort m_tlmOut_OutputPort[NUM_TLMOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed output ports
    // ----------------------------------------------------------------------

    //! Output port noArgsOut
    Ports::OutputNoArgsPort m_noArgsOut_OutputPort[NUM_NOARGSOUT_OUTPUT_PORTS];

    //! Output port noArgsReturnOut
    Ports::OutputNoArgsReturnPort m_noArgsReturnOut_OutputPort[NUM_NOARGSRETURNOUT_OUTPUT_PORTS];

    //! Output port typedOut
    Ports::OutputTypedPort m_typedOut_OutputPort[NUM_TYPEDOUT_OUTPUT_PORTS];

    //! Output port typedReturnOut
    Ports::OutputTypedReturnPort m_typedReturnOut_OutputPort[NUM_TYPEDRETURNOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Counter values for event throttling
    // ----------------------------------------------------------------------

    //! Throttle for EventActivityLowThrottled
    FwEventCounterType m_EventActivityLowThrottledThrottle;

    //! Throttle for EventFatalThrottled
    FwEventCounterType m_EventFatalThrottledThrottle;

    //! Throttle for EventWarningLowThrottled
    FwEventCounterType m_EventWarningLowThrottledThrottle;

  PRIVATE:

    // ----------------------------------------------------------------------
    // Mutexes
    // ----------------------------------------------------------------------

    //! Mutex for guarded ports
    Os::Mutex m_guardedPortMutex;

};

#endif
