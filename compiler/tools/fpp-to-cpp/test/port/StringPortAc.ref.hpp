// ======================================================================
// \title  StringPortAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for String port
// ======================================================================

#ifndef StringPortAc_HPP
#define StringPortAc_HPP

#include <cstdio>
#include <cstring>

#include "FpConfig.hpp"
#include "Fw/Comp/PassiveComponentBase.hpp"
#include "Fw/Port/InputPortBase.hpp"
#include "Fw/Port/OutputPortBase.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/StringType.hpp"

namespace StringPortStrings {

  // ----------------------------------------------------------------------
  // StringSize80 class
  // ----------------------------------------------------------------------

  class StringSize80 :
    public Fw::StringBase
  {
    public:

      enum {
        STRING_SIZE = 80,
        SERIALIZED_SIZE = STATIC_SERIALIZED_SIZE(STRING_SIZE)
      };

      StringSize80() : StringBase() { *this = ""; }

      StringSize80(const StringSize80& src) : StringBase() { *this = src; }

      StringSize80(const StringBase& src) : StringBase() { *this = src; }

      StringSize80(const char* src) : StringBase() { *this = src; }

      ~StringSize80() {}

      StringSize80& operator=(const StringSize80& src) {
        (void)StringBase::operator=(src);
        return *this;
      }

      StringSize80& operator=(const StringBase& src) {
        (void)StringBase::operator=(src);
        return *this;
      }

      StringSize80& operator=(const char* src) {
        (void)StringBase::operator=(src);
        return *this;
      }

      const char* toChar() const { return this->m_buf; }

      StringBase::SizeType getCapacity() const { return sizeof this->m_buf; }

    private:

      char m_buf[BUFFER_SIZE(STRING_SIZE)];

  };

  // ----------------------------------------------------------------------
  // StringSize100 class
  // ----------------------------------------------------------------------

  class StringSize100 :
    public Fw::StringBase
  {
    public:

      enum {
        STRING_SIZE = 100,
        SERIALIZED_SIZE = STATIC_SERIALIZED_SIZE(STRING_SIZE)
      };

      StringSize100() : StringBase() { *this = ""; }

      StringSize100(const StringSize100& src) : StringBase() { *this = src; }

      StringSize100(const StringBase& src) : StringBase() { *this = src; }

      StringSize100(const char* src) : StringBase() { *this = src; }

      ~StringSize100() {}

      StringSize100& operator=(const StringSize100& src) {
        (void)StringBase::operator=(src);
        return *this;
      }

      StringSize100& operator=(const StringBase& src) {
        (void)StringBase::operator=(src);
        return *this;
      }

      StringSize100& operator=(const char* src) {
        (void)StringBase::operator=(src);
        return *this;
      }

      const char* toChar() const { return this->m_buf; }

      StringBase::SizeType getCapacity() const { return sizeof this->m_buf; }

    private:

      char m_buf[BUFFER_SIZE(STRING_SIZE)];

  };

}

// ----------------------------------------------------------------------
// String types for backwards compatibility
// ----------------------------------------------------------------------

typedef StringPortStrings::StringSize80 str80String;
typedef StringPortStrings::StringSize80 str80RefString;
typedef StringPortStrings::StringSize100 str100String;
typedef StringPortStrings::StringSize100 str100RefString;

//! Input String port
//! A port with string parameters
class InputStringPort :
  public Fw::InputPortBase
{

  public:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    enum {
      //! The size of the serial representations of the port arguments
      SERIALIZED_SIZE =
        StringPortStrings::StringSize80::SERIALIZED_SIZE +
        StringPortStrings::StringSize80::SERIALIZED_SIZE +
        StringPortStrings::StringSize100::SERIALIZED_SIZE +
        StringPortStrings::StringSize100::SERIALIZED_SIZE
    };

  public:

    // ----------------------------------------------------------------------
    // Types
    // ----------------------------------------------------------------------

    //! The port callback function type
    typedef void (*CompFuncPtr)(
      Fw::PassiveComponentBase* callComp,
      FwIndexType portNum,
      const StringPortStrings::StringSize80& str80,
      StringPortStrings::StringSize80& str80Ref,
      const StringPortStrings::StringSize100& str100,
      StringPortStrings::StringSize100& str100Ref
    );

  public:

    // ----------------------------------------------------------------------
    // Input Port Member functions
    // ----------------------------------------------------------------------

    //! Constructor
    InputStringPort();

    //! Initialization function
    void init();

    //! Register a component
    void addCallComp(
        Fw::PassiveComponentBase* callComp, //!< The containing component
        CompFuncPtr funcPtr //!< The port callback function
    );

    //! Invoke a port interface
    void invoke(
        const StringPortStrings::StringSize80& str80, //!< A string of size 80
        StringPortStrings::StringSize80& str80Ref,
        const StringPortStrings::StringSize100& str100, //!< A string of size 100
        StringPortStrings::StringSize100& str100Ref
    );

  private:

#if FW_PORT_SERIALIZATION == 1

    //! Invoke the port with serialized arguments
    Fw::SerializeStatus invokeSerial(Fw::SerializeBufferBase& _buffer);

#endif

  private:

    // ----------------------------------------------------------------------
    // Member variables
    // ----------------------------------------------------------------------

    //! The pointer to the port callback function
    CompFuncPtr m_func;

};

//! Output String port
//! A port with string parameters
class OutputStringPort :
  public Fw::OutputPortBase
{

  public:

    // ----------------------------------------------------------------------
    // Output Port Member functions
    // ----------------------------------------------------------------------

    //! Constructor
    OutputStringPort();

    //! Initialization function
    void init();

    //! Register an input port
    void addCallPort(
        InputStringPort* callPort //!< The input port
    );

    //! Invoke a port interface
    void invoke(
        const StringPortStrings::StringSize80& str80, //!< A string of size 80
        StringPortStrings::StringSize80& str80Ref,
        const StringPortStrings::StringSize100& str100, //!< A string of size 100
        StringPortStrings::StringSize100& str100Ref
    );

  private:

    // ----------------------------------------------------------------------
    // Member variables
    // ----------------------------------------------------------------------

    //! The pointer to the input port
    InputStringPort* m_port;

};

#endif
