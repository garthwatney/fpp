// ======================================================================
// \title  EmptyComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Empty component base class
// ======================================================================

#include <cstdio>

#include "Fw/Types/Assert.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif
#include "base/EmptyComponentAc.hpp"

// ----------------------------------------------------------------------
// Component initialization
// ----------------------------------------------------------------------

void EmptyComponentBase ::
  init(FwInstanceIdType instance)
{
  // Initialize base class
  Fw::PassiveComponentBase::init(instance);
}

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

EmptyComponentBase ::
  EmptyComponentBase(const char* compName) :
    Fw::PassiveComponentBase(compName)
{

}

EmptyComponentBase ::
  ~EmptyComponentBase()
{

}
