// ======================================================================
// \title  EmptyTesterBase.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Empty component test harness base class
// ======================================================================

#ifndef EmptyTesterBase_HPP
#define EmptyTesterBase_HPP

#include <cstdio>

#include "EmptyComponentAc.hpp"
#include "Fw/Comp/PassiveComponentBase.hpp"
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Types/Assert.hpp"

//! \class EmptyTesterBase
//! \brief Auto-generated base for Empty component test harness
class EmptyTesterBase :
  public Fw::PassiveComponentBase
{

  protected:

    // ----------------------------------------------------------------------
    // History class
    // ----------------------------------------------------------------------

    //! \class History
    //! \brief A history of port inputs
    //!
    template<typename T>
    class History
    {

      public:

        //! Create a History
        History(
           const U32 maxSize //!< The maximum history size
        ) :
          numEntries(0),
          maxSize(maxSize)
        {
          this->entries = new T[maxSize];
        }

        //! Destroy a History
        ~History()
        {
          delete[] this->entries;
        }

        //! Clear the history
        //!
        void clear()
        {
          this->numEntries = 0;
        }

        //! Push an item onto the history
        //!
        void push_back(
            T entry //!< The item
        )
        {
          FW_ASSERT(this->numEntries < this->maxSize);
          entries[this->numEntries++] = entry;
        }

        //! Get an item at an index
        //!
        //! \return The item at index i
        T at(
            const U32 i //!< The index
        ) const
        {
          FW_ASSERT(i < this->numEntries);
          return entries[i];
        }

        //! Get the number of entries in the history
        //!
        //! \return The number of entries in the history
        U32 size() const
        {
          return this->numEntries;
        }

      private:

        //! The number of entries in the history
        U32 numEntries;

        //! The maximum history size
        const U32 maxSize;

        //! The entries
        T* entries;

    };

  protected:

    // ----------------------------------------------------------------------
    // History types
    // ----------------------------------------------------------------------

    //! A type representing a command response
    struct CmdResponse {
      FwOpcodeType opCode;
      U32 cmdSeq;
      Fw::CmdResponse response;
    };

#if FW_ENABLE_TEXT_LOGGING

    //! A history entry for text log events
    struct TextLogEntry {
      U32 id;
      Fw::Time timeTag;
      Fw::LogSeverity severity;
      Fw::TextLogString text;
    };

#endif

  public:

    // ----------------------------------------------------------------------
    // Component initialization
    // ----------------------------------------------------------------------

    //! Initialize object EmptyTesterBase
    virtual void init(
        NATIVE_INT_TYPE instance = 0 //!< The instance number
    );

  protected:

    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct object EmptyTesterBase
    EmptyTesterBase(
        const char* const compName, //!< The component name
        const U32 maxHistorySize //!< The maximum size of each history
    );

    //! Destroy object EmptyTesterBase
    virtual ~EmptyTesterBase();

  protected:

    // ----------------------------------------------------------------------
    // Functions for testing commands
    // ----------------------------------------------------------------------

    //! Handle a command response
    virtual void cmdResponseIn(
        FwOpcodeType opCode, //!< The opcode
        U32 cmdSeq, //!< The command sequence number
        Fw::CmdResponse response //!< The command response
    );

    //! Send command buffers directly (used for intentional command encoding errors)
    void sendRawCmd(
        FwOpcodeType opCode, //!< The opcode
        U32 cmdSeq, //!< The command sequence number
        Fw::CmdArgBuffer& buf //!< The command argument buffer
    );

  protected:

    // ----------------------------------------------------------------------
    // Functions for testing events
    // ----------------------------------------------------------------------

    //! Dispatch an event
    void dispatchEvents(
        FwEventIdType id, //!< The event ID
        Fw::Time& timeTag, //!< The time
        const Fw::LogSeverity severity, //!< The severity
        Fw::LogBuffer& args //!< The serialized arguments
    );

#if FW_ENABLE_TEXT_LOGGING

    //! Handle a text event
    void textLogIn(
        FwEventIdType id, //!< The event ID
        Fw::Time& timeTag, //!< The time
        const Fw::LogSeverity severity, //!< The severity
        const Fw::TextLogString& text //!< The event string
    );

#endif

  protected:

    // ----------------------------------------------------------------------
    // Functions for testing telemetry
    // ----------------------------------------------------------------------

    //! Dispatch telemetry
    void dispatchTlm(
        FwChanIdType id, //!< The channel id
        Fw::Time& timeTag, //!< The time
        Fw::TlmBuffer& val //!< The channel value
    );

  protected:

    // ----------------------------------------------------------------------
    // Functions to test time
    // ----------------------------------------------------------------------

    //! Set the test time for events and telemetry
    void setTestTime(
        Fw::Time& timeTag //!< The time
    );

  protected:

    // ----------------------------------------------------------------------
    // History functions
    // ----------------------------------------------------------------------

    //! Clear all history
    void clearHistory();

    //! Clear from port history
    void clearFromPortHistory();

    //! Clear event history
    void clearEvents();

#if FW_ENABLE_TEXT_LOGGING

    //! Print a text log history entry
    static void printTextLogHistoryEntry(
        const TextLogEntry& e,
        FILE* file
    );

    //! Print the text log history
    void printTextLogHistory(FILE* const file);

#endif

    //! Clear telemetry history
    void clearTlm();

  protected:

    // ----------------------------------------------------------------------
    // History member variables
    // ----------------------------------------------------------------------

    //! The total number of port entries
    U32 fromPortHistorySize;

    //! The command response history
    History<CmdResponse>* cmdResponseHistory;

    //! The total number of events seen
    U32 eventsSize;

#if FW_ENABLE_TEXT_LOGGING

    //! The history of text log events
    History<TextLogEntry>* textLogHistory;

#endif

    //! The total number of telemetry inputs seen
    U32 tlmSize;

  private:

    // ----------------------------------------------------------------------
    // To ports
    // ----------------------------------------------------------------------

  private:

    // ----------------------------------------------------------------------
    // Time variables
    // ----------------------------------------------------------------------

    //! Test time stamp
    Fw::Time m_testTime;

};

#endif
