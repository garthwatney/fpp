// ======================================================================
// \title  ActiveStateMachinesComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for ActiveStateMachines component base class
// ======================================================================

#ifndef ActiveStateMachinesComponentAc_HPP
#define ActiveStateMachinesComponentAc_HPP

#include "ActiveStateMachines_S1.hpp"
#include "ActiveStateMachines_S2.hpp"
#include "FpConfig.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Fw/Types/SMEventsSerializableAc.hpp"

//! \class ActiveStateMachinesComponentBase
//! \brief Auto-generated base for ActiveStateMachines component
//!
//! An active component with state machines
class ActiveStateMachinesComponentBase :
  public Fw::ActiveComponentBase, public ActiveStateMachines_S1If, public ActiveStateMachines_S2If
{

  PROTECTED:

    // ----------------------------------------------------------------------
    // State machine enumeration
    // ----------------------------------------------------------------------
    enum SmId {
      SM1,
      SM2,
      SM3,
      SM4,
    };

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    friend class ActiveStateMachinesComponentBaseFriend;

  public:

    // ----------------------------------------------------------------------
    // Component initialization
    // ----------------------------------------------------------------------

    //! Initialize ActiveStateMachinesComponentBase object
    void init(
        FwQueueSizeType queueDepth, //!< The queue depth
        FwEnumStoreType instance = 0 //!< The instance number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct ActiveStateMachinesComponentBase object
    ActiveStateMachinesComponentBase(
        const char* compName = "" //!< The component name
    );

    //! Destroy ActiveStateMachinesComponentBase object
    virtual ~ActiveStateMachinesComponentBase();

  PROTECTED:

    // ----------------------------------------------------------------------
    // State machine function to push events to the input queue
    // ----------------------------------------------------------------------

    //! State machine base-class function for sendEvents
    void stateMachineInvoke(
        const Fw::SMEvents& ev //!< The state machine event
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Message dispatch functions
    // ----------------------------------------------------------------------

    //! Called in the message loop to dispatch a message from the queue
    virtual MsgDispatchStatus doDispatch();

  PRIVATE:

    // ----------------------------------------------------------------------
    // State machine instantiations
    // ----------------------------------------------------------------------
    ActiveStateMachines_S1 sm1;
    ActiveStateMachines_S1 sm2;
    ActiveStateMachines_S2 sm3;
    ActiveStateMachines_S2 sm4;

};

#endif
