// ======================================================================
// \title  StringSerializableAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for String struct
// ======================================================================

#ifndef StringSerializableAc_HPP
#define StringSerializableAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

class String :
  public Fw::Serializable
{

  public:

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
    // StringSize40 class
    // ----------------------------------------------------------------------

    class StringSize40 :
      public Fw::StringBase
    {
      public:

        enum {
          STRING_SIZE = 40,
          SERIALIZED_SIZE = STATIC_SERIALIZED_SIZE(STRING_SIZE)
        };

        StringSize40() : StringBase() { *this = ""; }

        StringSize40(const StringSize40& src) : StringBase() { *this = src; }

        StringSize40(const StringBase& src) : StringBase() { *this = src; }

        StringSize40(const char* src) : StringBase() { *this = src; }

        ~StringSize40() {}

        StringSize40& operator=(const StringSize40& src) {
          (void)StringBase::operator=(src);
          return *this;
        }

        StringSize40& operator=(const StringBase& src) {
          (void)StringBase::operator=(src);
          return *this;
        }

        StringSize40& operator=(const char* src) {
          (void)StringBase::operator=(src);
          return *this;
        }

        const char* toChar() const { return this->m_buf; }

        StringBase::SizeType getCapacity() const { return sizeof this->m_buf; }

      private:

        char m_buf[BUFFER_SIZE(STRING_SIZE)];

    };

  public:

    // ----------------------------------------------------------------------
    // Types
    // ----------------------------------------------------------------------

    //! The type of s1
    using Type_of_s1 = StringSize80;

    //! The type of s2
    using Type_of_s2 = StringSize40;

  public:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    enum {
      //! The size of the serial representation
      SERIALIZED_SIZE =
        StringSize80::SERIALIZED_SIZE +
        StringSize40::SERIALIZED_SIZE
    };

  public:

    // ----------------------------------------------------------------------
    // Constructors
    // ----------------------------------------------------------------------

    //! Constructor (default value)
    String();

    //! Member constructor
    String(
        const Fw::StringBase& s1,
        const Fw::StringBase& s2
    );

    //! Copy constructor
    String(
        const String& obj //!< The source object
    );

  public:

    // ----------------------------------------------------------------------
    // Operators
    // ----------------------------------------------------------------------

    //! Copy assignment operator
    String& operator=(
        const String& obj //!< The source object
    );

    //! Equality operator
    bool operator==(
        const String& obj //!< The other object
    ) const;

    //! Inequality operator
    bool operator!=(
        const String& obj //!< The other object
    ) const;

#ifdef BUILD_UT

    //! Ostream operator
    friend std::ostream& operator<<(
        std::ostream& os, //!< The ostream
        const String& obj //!< The object
    );

#endif

  public:

    // ----------------------------------------------------------------------
    // Member functions
    // ----------------------------------------------------------------------

    //! Serialization
    Fw::SerializeStatus serialize(
        Fw::SerializeBufferBase& buffer //!< The serial buffer
    ) const;

    //! Deserialization
    Fw::SerializeStatus deserialize(
        Fw::SerializeBufferBase& buffer //!< The serial buffer
    );

#if FW_SERIALIZABLE_TO_STRING

    //! Convert struct to string
    void toString(
        Fw::StringBase& sb //!< The StringBase object to hold the result
    ) const;

#endif

    // ----------------------------------------------------------------------
    // Getter functions
    // ----------------------------------------------------------------------

    //! Get member s1
    Type_of_s1& gets1()
    {
      return this->m_s1;
    }

    //! Get member s1 (const)
    const Type_of_s1& gets1() const
    {
      return this->m_s1;
    }

    //! Get member s2
    Type_of_s2& gets2()
    {
      return this->m_s2;
    }

    //! Get member s2 (const)
    const Type_of_s2& gets2() const
    {
      return this->m_s2;
    }

    // ----------------------------------------------------------------------
    // Setter functions
    // ----------------------------------------------------------------------

    //! Set all members
    void set(
        const Fw::StringBase& s1,
        const Fw::StringBase& s2
    );

    //! Set member s1
    void sets1(const Fw::StringBase& s1);

    //! Set member s2
    void sets2(const Fw::StringBase& s2);

  protected:

    // ----------------------------------------------------------------------
    // Member variables
    // ----------------------------------------------------------------------

    StringSize80 m_s1;
    StringSize40 m_s2;

};

#endif
