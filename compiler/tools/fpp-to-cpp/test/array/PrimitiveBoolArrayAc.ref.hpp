// ======================================================================
// \title  PrimitiveBoolArrayAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PrimitiveBool array
// ======================================================================

#ifndef M_PrimitiveBoolArrayAc_HPP
#define M_PrimitiveBoolArrayAc_HPP

#include "Fw/Types/BasicTypes.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

#include "FppConstantsAc.hpp"

namespace M {

  class PrimitiveBool :
    public Fw::Serializable
  {

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The element type
      typedef bool ElementType;

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the array
        SIZE = 3,
        //! The size of the serial representation
        SERIALIZED_SIZE = SIZE * sizeof(bool),
      };

    public:

      // ----------------------------------------------------------------------
      // Constructors
      // ----------------------------------------------------------------------

      //! Constructor (default value)
      PrimitiveBool();

      //! Constructor (user-provided value)
      PrimitiveBool(
          const ElementType (&a)[SIZE] //!< The array
      );

      //! Constructor (single element)
      PrimitiveBool(
          const ElementType& e //!< The element
      );

      //! Constructor (multiple elements)
      PrimitiveBool(
          const ElementType (&e1), //!< Element 1
          const ElementType (&e2), //!< Element 2
          const ElementType (&e3) //!< Element 3
      );

      //! Copy Constructor
      PrimitiveBool(
          const PrimitiveBool& obj //!< The source object
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
      PrimitiveBool& operator=(
          const PrimitiveBool& obj //!< The source object
      );

      //! Copy assignment operator (raw array)
      PrimitiveBool& operator=(
          const ElementType (&a)[SIZE] //!< The source array
      );

      //! Copy assignment operator (single element)
      PrimitiveBool& operator=(
          const ElementType& e //!< The element
      );

      //! Equality operator
      bool operator==(
          const PrimitiveBool& obj //!< The other object
      ) const;

      //! Inequality operator
      bool operator!=(
          const PrimitiveBool& obj //!< The other object
      ) const;

#ifdef BUILD_UT

      //! Ostream operator
      friend std::ostream& operator<<(
          std::ostream& os, //!< The ostream
          const PrimitiveBool& obj //!< The object
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
