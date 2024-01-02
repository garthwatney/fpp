// ======================================================================
// \title  PassiveSerialTester.hpp
// \author [user name]
// \brief  hpp file for PassiveSerial component test harness implementation class
// ======================================================================

#ifndef PassiveSerialTester_HPP
#define PassiveSerialTester_HPP

#include "PassiveSerialGTestBase.hpp"
#include "PassiveSerial.hpp"

class PassiveSerialTester :
  public PassiveSerialGTestBase
{

  public:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    // Maximum size of histories storing events, telemetry, and port outputs
    static const NATIVE_INT_TYPE MAX_HISTORY_SIZE = 10;

    // Instance ID supplied to the component instance under test
    static const NATIVE_INT_TYPE TEST_INSTANCE_ID = 0;

  public:

    // ----------------------------------------------------------------------
    // Construction and destruction
    // ----------------------------------------------------------------------

    //! Construct object PassiveSerialTester
    PassiveSerialTester();

    //! Destroy object PassiveSerialTester
    ~PassiveSerialTester();

  public:

    // ----------------------------------------------------------------------
    // Tests
    // ----------------------------------------------------------------------

    //! To do
    void toDo();

  private:

    // ----------------------------------------------------------------------
    // Handlers for typed from ports
    // ----------------------------------------------------------------------

    //! Handler implementation for noArgsOut
    void from_noArgsOut_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Handler implementation for noArgsReturnOut
    U32 from_noArgsReturnOut_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Handler implementation for typedOut
    void from_typedOut_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler implementation for typedReturnOut
    F32 from_typedReturnOut_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  private:

    // ----------------------------------------------------------------------
    // Handlers for serial from ports
    // ----------------------------------------------------------------------

    //! Handler implementation for serialOut
    void from_serialOut_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    );

  private:

    // ----------------------------------------------------------------------
    // Helper functions
    // ----------------------------------------------------------------------

    //! Connect ports
    void connectPorts();

    //! Initialize components
    void initComponents();

  private:

    // ----------------------------------------------------------------------
    // Member variables
    // ----------------------------------------------------------------------

    //! The component under test
    PassiveSerial component;

};

#endif
