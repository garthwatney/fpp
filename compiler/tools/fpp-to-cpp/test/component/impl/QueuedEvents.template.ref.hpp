// ======================================================================
// \title  QueuedEvents.hpp
// \author [user name]
// \brief  hpp file for QueuedEvents component implementation class
// ======================================================================

#ifndef QueuedEvents_HPP
#define QueuedEvents_HPP

#include "QueuedEventsComponentAc.hpp"

class QueuedEvents :
  public QueuedEventsComponentBase
{

  public:

    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct QueuedEvents object
    QueuedEvents(
        const char* const compName //!< The component name
    );

    //! Destroy QueuedEvents object
    ~QueuedEvents();

  PRIVATE:

    // ----------------------------------------------------------------------
    // Handler implementations for user-defined typed input ports
    // ----------------------------------------------------------------------

    //! Handler implementation for noArgsAsync
    //!
    //! A typed async input port
    void noArgsAsync_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) override;

    //! Handler implementation for noArgsGuarded
    //!
    //! A typed guarded input
    void noArgsGuarded_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) override;

    //! Handler implementation for noArgsReturnGuarded
    //!
    //! A typed guarded input
    U32 noArgsReturnGuarded_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) override;

    //! Handler implementation for noArgsReturnSync
    //!
    //! A typed sync input port
    U32 noArgsReturnSync_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) override;

    //! Handler implementation for noArgsSync
    //!
    //! A typed sync input port
    void noArgsSync_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) override;

    //! Handler implementation for typedAsync
    //!
    //! A typed async input port
    void typedAsync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedAsyncAssert
    //!
    //! A typed async input port with queue full behavior and priority
    void typedAsyncAssert_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedAsyncBlockPriority
    //!
    //! A typed async input port with queue full behavior and priority
    void typedAsyncBlockPriority_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedAsyncDropPriority
    //!
    //! A typed async input port with queue full behavior and priority
    void typedAsyncDropPriority_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedGuarded
    //!
    //! A typed guarded input
    void typedGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedReturnGuarded
    //!
    //! A typed guarded input with a return type
    F32 typedReturnGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedReturnSync
    //!
    //! A typed sync input port with a return type
    F32 typedReturnSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedSync
    //!
    //! A typed sync input port
    void typedSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

};

#endif
