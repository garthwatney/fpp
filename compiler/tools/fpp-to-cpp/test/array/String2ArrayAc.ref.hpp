// ======================================================================
// \title  String2ArrayAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for String2 array
// ======================================================================

#ifndef String2ArrayAc_HPP
#define String2ArrayAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

//! An array of strings with specified default value and format string
class String2 :
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

  public:

    // ----------------------------------------------------------------------
    // Types
    // ----------------------------------------------------------------------

    //! The element type
    typedef StringSize80 ElementType;

  public:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    enum {
      //! The size of the array
      SIZE = 2,
      //! The size of the serial representation
      SERIALIZED_SIZE = SIZE * StringSize80::SERIALIZED_SIZE,
    };

  public:

    // ----------------------------------------------------------------------
    // Constructors
    // ----------------------------------------------------------------------

    //! Constructor (default value)
    String2();

    //! Constructor (user-provided value)
    String2(
        const ElementType (&a)[SIZE] //!< The array
    );

    //! Constructor (single element)
    String2(
        const Fw::StringBase& e //!< The element
    );

    //! Constructor (multiple elements)
    String2(
        const Fw::StringBase& e1, //!< Element 1
        const Fw::StringBase& e2 //!< Element 2
    );

    //! Copy Constructor
    String2(
        const String2& obj //!< The source object
    );

  public:

    // ----------------------------------------------------------------------
    // Operators
    // ----------------------------------------------------------------------

    //! Subscript operator
    ElementType& operator[](
        const U32 i //!< The subscript index
    );

    //! Const subscript operator
    const ElementType& operator[](
        const U32 i //!< The subscript index
    ) const;

    //! Copy assignment operator (object)
    String2& operator=(
        const String2& obj //!< The source object
    );

    //! Copy assignment operator (raw array)
    String2& operator=(
        const ElementType (&a)[SIZE] //!< The source array
    );

    //! Copy assignment operator (single element)
    String2& operator=(
        const ElementType& e //!< The element
    );

    //! Equality operator
    bool operator==(
        const String2& obj //!< The other object
    ) const;

    //! Inequality operator
    bool operator!=(
        const String2& obj //!< The other object
    ) const;

#ifdef BUILD_UT

    //! Ostream operator
    friend std::ostream& operator<<(
        std::ostream& os, //!< The ostream
        const String2& obj //!< The object
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

#if FW_ARRAY_TO_STRING

    //! Convert array to string
    void toString(
        Fw::StringBase& sb //!< The StringBase object to hold the result
    ) const;

#endif

  private:

    // ----------------------------------------------------------------------
    // Member variables
    // ----------------------------------------------------------------------

    //! The array elements
    ElementType elements[SIZE];

};

#endif
