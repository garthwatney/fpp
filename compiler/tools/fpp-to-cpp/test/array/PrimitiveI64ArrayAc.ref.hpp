// ======================================================================
// \title  PrimitiveI64ArrayAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PrimitiveI64 array
// ======================================================================

#ifndef M_PrimitiveI64ArrayAc_HPP
#define M_PrimitiveI64ArrayAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

namespace M {

  //! An array of I64 with format string
  class PrimitiveI64 :
    public Fw::Serializable
  {

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The element type
      typedef I64 ElementType;

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the array
        SIZE = 3,
        //! The size of the serial representation
        SERIALIZED_SIZE = SIZE * sizeof(I64),
      };

    public:

      // ----------------------------------------------------------------------
      // Constructors
      // ----------------------------------------------------------------------

      //! Constructor (default value)
      PrimitiveI64();

      //! Constructor (user-provided value)
      PrimitiveI64(
          const ElementType (&a)[SIZE] //!< The array
      );

      //! Constructor (multiple elements)
      PrimitiveI64(
          const ElementType& e1, //!< Element 1
          const ElementType& e2, //!< Element 2
          const ElementType& e3 //!< Element 3
      );

      //! Copy Constructor
      PrimitiveI64(
          const PrimitiveI64& obj //!< The source object
      );

      //! Constructor (single element)
      PrimitiveI64(
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
      PrimitiveI64& operator=(
          const PrimitiveI64& obj //!< The source object
      );

      //! Copy assignment operator (raw array)
      PrimitiveI64& operator=(
          const ElementType (&a)[SIZE] //!< The source array
      );

      //! Copy assignment operator (single element)
      PrimitiveI64& operator=(
          const ElementType& e //!< The element
      );

      //! Equality operator
      bool operator==(
          const PrimitiveI64& obj //!< The other object
      ) const;

      //! Inequality operator
      bool operator!=(
          const PrimitiveI64& obj //!< The other object
      ) const;

#ifdef BUILD_UT

      //! Ostream operator
      friend std::ostream& operator<<(
          std::ostream& os, //!< The ostream
          const PrimitiveI64& obj //!< The object
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

}

#endif
