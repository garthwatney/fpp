// ======================================================================
// \title  Struct3ArrayAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Struct3 array
// ======================================================================

#ifndef Struct3ArrayAc_HPP
#define Struct3ArrayAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"
#include "S3SerializableAc.hpp"

//! An array of structs with array member
class Struct3 :
  public Fw::Serializable
{

  public:

    // ----------------------------------------------------------------------
    // Types
    // ----------------------------------------------------------------------

    //! The element type
    typedef S::S3 ElementType;

  public:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    enum {
      //! The size of the array
      SIZE = 3,
      //! The size of the serial representation
      SERIALIZED_SIZE = SIZE * S::S3::SERIALIZED_SIZE,
    };

  public:

    // ----------------------------------------------------------------------
    // Constructors
    // ----------------------------------------------------------------------

    //! Constructor (default value)
    Struct3();

    //! Constructor (user-provided value)
    Struct3(
        const ElementType (&a)[SIZE] //!< The array
    );

    //! Constructor (multiple elements)
    Struct3(
        const ElementType& e1, //!< Element 1
        const ElementType& e2, //!< Element 2
        const ElementType& e3 //!< Element 3
    );

    //! Copy Constructor
    Struct3(
        const Struct3& obj //!< The source object
    );

    //! Constructor (single element)
    Struct3(
        const ElementType& e //!< The element
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
    Struct3& operator=(
        const Struct3& obj //!< The source object
    );

    //! Copy assignment operator (raw array)
    Struct3& operator=(
        const ElementType (&a)[SIZE] //!< The source array
    );

    //! Copy assignment operator (single element)
    Struct3& operator=(
        const ElementType& e //!< The element
    );

    //! Equality operator
    bool operator==(
        const Struct3& obj //!< The other object
    ) const;

    //! Inequality operator
    bool operator!=(
        const Struct3& obj //!< The other object
    ) const;

#ifdef BUILD_UT

    //! Ostream operator
    friend std::ostream& operator<<(
        std::ostream& os, //!< The ostream
        const Struct3& obj //!< The object
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

#if FW_ARRAY_TO_STRING || BUILD_UT

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
