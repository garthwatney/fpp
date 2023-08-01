// ======================================================================
// \title  BuiltInTypeArrayAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for BuiltInType array
// ======================================================================

#ifndef BuiltInTypeArrayAc_HPP
#define BuiltInTypeArrayAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

//! An array of a built-in type
class BuiltInType :
  public Fw::Serializable
{

  public:

    // ----------------------------------------------------------------------
    // Types
    // ----------------------------------------------------------------------

    //! The element type
    typedef FwOpcodeType ElementType;

  public:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    enum {
      //! The size of the array
      SIZE = 3,
      //! The size of the serial representation
      SERIALIZED_SIZE = SIZE * sizeof(FwOpcodeType),
    };

  public:

    // ----------------------------------------------------------------------
    // Constructors
    // ----------------------------------------------------------------------

    //! Constructor (default value)
    BuiltInType();

    //! Constructor (user-provided value)
    BuiltInType(
        const ElementType (&a)[SIZE] //!< The array
    );

    //! Constructor (single element)
    BuiltInType(
        const ElementType& e //!< The element
    );

    //! Constructor (multiple elements)
    BuiltInType(
        const ElementType& e1, //!< Element 1
        const ElementType& e2, //!< Element 2
        const ElementType& e3 //!< Element 3
    );

    //! Copy Constructor
    BuiltInType(
        const BuiltInType& obj //!< The source object
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
    BuiltInType& operator=(
        const BuiltInType& obj //!< The source object
    );

    //! Copy assignment operator (raw array)
    BuiltInType& operator=(
        const ElementType (&a)[SIZE] //!< The source array
    );

    //! Copy assignment operator (single element)
    BuiltInType& operator=(
        const ElementType& e //!< The element
    );

    //! Equality operator
    bool operator==(
        const BuiltInType& obj //!< The other object
    ) const;

    //! Inequality operator
    bool operator!=(
        const BuiltInType& obj //!< The other object
    ) const;

#ifdef BUILD_UT

    //! Ostream operator
    friend std::ostream& operator<<(
        std::ostream& os, //!< The ostream
        const BuiltInType& obj //!< The object
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

#if FW_ARRAY_TO_STRING && BUILD_UT

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
