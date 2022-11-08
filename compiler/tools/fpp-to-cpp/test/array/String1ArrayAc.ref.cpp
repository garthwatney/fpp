// ======================================================================
// \title  String1ArrayAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for String1 array
// ======================================================================

#include <cstdio>
#include <cstring>

#include "Fw/Types/Assert.hpp"
#include "Fw/Types/StringUtils.hpp"
#include "String1ArrayAc.hpp"

// ----------------------------------------------------------------------
// StringSize80 class
// ----------------------------------------------------------------------

String1::StringSize80 ::
  StringSize80() :
    StringBase()
{
  this->m_buf[0] = 0;
}

String1::StringSize80 ::
  StringSize80(const char* src) :
    StringBase()
{
  Fw::StringUtils::string_copy(this->m_buf, src, sizeof(this->m_buf));
}

String1::StringSize80 ::
  StringSize80(const Fw::StringBase& src) :
    StringBase()
{
  Fw::StringUtils::string_copy(this->m_buf, src.toChar(), sizeof(this->m_buf));
}

String1::StringSize80 ::
  StringSize80(const StringSize80& src) :
    StringBase()
{
  Fw::StringUtils::string_copy(this->m_buf, src.toChar(), sizeof(this->m_buf));
}

String1::StringSize80 ::
  ~StringSize80()
{

}

String1::StringSize80& String1::StringSize80 ::
  operator=(const StringSize80& other)
{
  if (this == &other) {
    return *this;
  }

  Fw::StringUtils::string_copy(this->m_buf, other.toChar(), sizeof(this->m_buf));
  return *this;
}

String1::StringSize80& String1::StringSize80 ::
  operator=(const Fw::StringBase& other)
{
  if (this == &other) {
    return *this;
  }

  Fw::StringUtils::string_copy(this->m_buf, other.toChar(), sizeof(this->m_buf));
  return *this;
}

String1::StringSize80& String1::StringSize80 ::
  operator=(const char* other)
{
  Fw::StringUtils::string_copy(this->m_buf, other, sizeof(this->m_buf));
  return *this;
}

const char* String1::StringSize80 ::
  toChar() const
{
  return this->m_buf;
}

NATIVE_UINT_TYPE String1::StringSize80 ::
  getCapacity() const
{
  return sizeof(this->m_buf);
}

// ----------------------------------------------------------------------
// Constructors
// ----------------------------------------------------------------------

String1 ::
  String1() :
    Serializable()
{
  // Construct using element-wise constructor
  *this = String1(
    "",
    "",
    ""
  );
}

String1 ::
  String1(const ElementType (&a)[SIZE]) :
    Serializable()
{
  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = a[index];
  }
}

String1 ::
  String1(
      const ElementType& e1,
      const ElementType& e2,
      const ElementType& e3
  ) :
    Serializable()
{
  this->elements[0] = e1;
  this->elements[1] = e2;
  this->elements[2] = e3;
}

String1 ::
  String1(const String1& obj) :
    Serializable()
{
  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = obj.elements[index];
  }
}

String1 ::
  String1(const ElementType& e) :
    Serializable()
{
  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = e;
  }
}

// ----------------------------------------------------------------------
// Operators
// ----------------------------------------------------------------------

String1::ElementType& String1 ::
  operator[](const U32 i)
{
  FW_ASSERT(i < SIZE);
  return this->elements[i];
}

const String1::ElementType& String1 ::
  operator[](const U32 i) const
{
  FW_ASSERT(i < SIZE);
  return this->elements[i];
}

String1& String1 ::
  operator=(const String1& obj)
{
  if (this == &obj) {
    return *this;
  }

  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = obj.elements[index];
  }
  return *this;
}

String1& String1 ::
  operator=(const ElementType (&a)[SIZE])
{
  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = a[index];
  }
  return *this;
}

String1& String1 ::
  operator=(const ElementType& e)
{
  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = e;
  }
  return *this;
}

bool String1 ::
  operator==(const String1& obj) const
{
  for (U32 index = 0; index < SIZE; index++) {
    if (!((*this)[index] == obj[index])) {
      return false;
    }
  }
  return true;
}

bool String1 ::
  operator!=(const String1& obj) const
{
  return !(*this == obj);
}

#ifdef BUILD_UT

std::ostream& operator<<(std::ostream& os, const String1& obj) {
  Fw::String s;
  obj.toString(s);
  os << s;
  return os;
}

#endif

// ----------------------------------------------------------------------
// Member functions
// ----------------------------------------------------------------------

Fw::SerializeStatus String1 ::
  serialize(Fw::SerializeBufferBase& buffer) const
{
  Fw::SerializeStatus status = Fw::FW_SERIALIZE_OK;
  for (U32 index = 0; index < SIZE; index++) {
    status = buffer.serialize((*this)[index]);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }
  }
  return status;
}

Fw::SerializeStatus String1 ::
  deserialize(Fw::SerializeBufferBase& buffer)
{
  Fw::SerializeStatus status = Fw::FW_SERIALIZE_OK;
  for (U32 index = 0; index < SIZE; index++) {
    status = buffer.deserialize((*this)[index]);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }
  }
  return status;
}

#if FW_ARRAY_TO_STRING || BUILD_UT

void String1 ::
  toString(Fw::StringBase& sb) const
{
  static const char *formatString = "[ "
    "%s "
    "%s "
    "%s ]";

  char outputString[FW_ARRAY_TO_STRING_BUFFER_SIZE];
  (void) snprintf(
    outputString,
    FW_ARRAY_TO_STRING_BUFFER_SIZE,
    formatString,
    this->elements[0].toChar(),
    this->elements[1].toChar(),
    this->elements[2].toChar()
  );

  outputString[FW_ARRAY_TO_STRING_BUFFER_SIZE-1] = 0; // NULL terminate
  sb = outputString;
}

#endif
