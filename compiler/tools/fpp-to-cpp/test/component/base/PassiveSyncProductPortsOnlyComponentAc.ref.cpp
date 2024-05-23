// ======================================================================
// \title  PassiveSyncProductPortsOnlyComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PassiveSyncProductPortsOnly component base class
// ======================================================================

#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif
#include "base/PassiveSyncProductPortsOnlyComponentAc.hpp"

// ----------------------------------------------------------------------
// Component initialization
// ----------------------------------------------------------------------

void PassiveSyncProductPortsOnlyComponentBase ::
  init(FwEnumStoreType instance)
{
  // Initialize base class
  Fw::PassiveComponentBase::init(instance);

  // Connect input port productRecvIn
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_productRecvIn_InputPorts());
    port++
  ) {
    this->m_productRecvIn_InputPort[port].init();
    this->m_productRecvIn_InputPort[port].addCallComp(
      this,
      m_p_productRecvIn_in
    );
    this->m_productRecvIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_productRecvIn_InputPort[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_productRecvIn_InputPort[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port productRequestOut
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_productRequestOut_OutputPorts());
    port++
  ) {
    this->m_productRequestOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_productRequestOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_productRequestOut_OutputPort[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port productSendOut
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_productSendOut_OutputPorts());
    port++
  ) {
    this->m_productSendOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_productSendOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_productSendOut_OutputPort[port].setObjName(portName.toChar());
#endif
  }
}

// ----------------------------------------------------------------------
// Getters for special input ports
// ----------------------------------------------------------------------

Fw::InputDpResponsePort* PassiveSyncProductPortsOnlyComponentBase ::
  get_productRecvIn_InputPort(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_productRecvIn_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_productRecvIn_InputPort[portNum];
}

// ----------------------------------------------------------------------
// Connect input ports to special output ports
// ----------------------------------------------------------------------

void PassiveSyncProductPortsOnlyComponentBase ::
  set_productRequestOut_OutputPort(
      FwIndexType portNum,
      Fw::InputDpRequestPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_productRequestOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_productRequestOut_OutputPort[portNum].addCallPort(port);
}

void PassiveSyncProductPortsOnlyComponentBase ::
  set_productSendOut_OutputPort(
      FwIndexType portNum,
      Fw::InputDpSendPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_productSendOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_productSendOut_OutputPort[portNum].addCallPort(port);
}

#if FW_PORT_SERIALIZATION

// ----------------------------------------------------------------------
// Connect serial input ports to special output ports
// ----------------------------------------------------------------------

void PassiveSyncProductPortsOnlyComponentBase ::
  set_productRequestOut_OutputPort(
      FwIndexType portNum,
      Fw::InputSerializePort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_productRequestOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_productRequestOut_OutputPort[portNum].registerSerialPort(port);
}

void PassiveSyncProductPortsOnlyComponentBase ::
  set_productSendOut_OutputPort(
      FwIndexType portNum,
      Fw::InputSerializePort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_productSendOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_productSendOut_OutputPort[portNum].registerSerialPort(port);
}

#endif

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

PassiveSyncProductPortsOnlyComponentBase ::
  PassiveSyncProductPortsOnlyComponentBase(const char* compName) :
    Fw::PassiveComponentBase(compName)
{

}

PassiveSyncProductPortsOnlyComponentBase ::
  ~PassiveSyncProductPortsOnlyComponentBase()
{

}

// ----------------------------------------------------------------------
// Getters for numbers of special input ports
// ----------------------------------------------------------------------

FwIndexType PassiveSyncProductPortsOnlyComponentBase ::
  getNum_productRecvIn_InputPorts() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_productRecvIn_InputPort));
}

// ----------------------------------------------------------------------
// Getters for numbers of special output ports
// ----------------------------------------------------------------------

FwIndexType PassiveSyncProductPortsOnlyComponentBase ::
  getNum_productRequestOut_OutputPorts() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_productRequestOut_OutputPort));
}

FwIndexType PassiveSyncProductPortsOnlyComponentBase ::
  getNum_productSendOut_OutputPorts() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_productSendOut_OutputPort));
}

// ----------------------------------------------------------------------
// Connection status queries for special output ports
// ----------------------------------------------------------------------

bool PassiveSyncProductPortsOnlyComponentBase ::
  isConnected_productRequestOut_OutputPort(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_productRequestOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_productRequestOut_OutputPort[portNum].isConnected();
}

bool PassiveSyncProductPortsOnlyComponentBase ::
  isConnected_productSendOut_OutputPort(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_productSendOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_productSendOut_OutputPort[portNum].isConnected();
}

// ----------------------------------------------------------------------
// Port handler base-class functions for special input ports
//
// Call these functions directly to bypass the corresponding ports
// ----------------------------------------------------------------------

void PassiveSyncProductPortsOnlyComponentBase ::
  productRecvIn_handlerBase(
      FwIndexType portNum,
      FwDpIdType id,
      const Fw::Buffer& buffer,
      const Fw::Success& status
  )
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_productRecvIn_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  // Call handler function
  this->productRecvIn_handler(
    portNum,
    id,
    buffer,
    status
  );
}

// ----------------------------------------------------------------------
// Pre-message hooks for special async input ports
//
// Each of these functions is invoked just before processing a message
// on the corresponding port. By default, they do nothing. You can
// override them to provide specific pre-message behavior.
// ----------------------------------------------------------------------

void PassiveSyncProductPortsOnlyComponentBase ::
  productRecvIn_preMsgHook(
      FwIndexType portNum,
      FwDpIdType id,
      const Fw::Buffer& buffer,
      const Fw::Success& status
  )
{
  // Default: no-op
}

// ----------------------------------------------------------------------
// Invocation functions for special output ports
// ----------------------------------------------------------------------

void PassiveSyncProductPortsOnlyComponentBase ::
  productRequestOut_out(
      FwIndexType portNum,
      FwDpIdType id,
      FwSizeType dataSize
  )
{
  FW_ASSERT(
    portNum < this->getNum_productRequestOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );
  this->m_productRequestOut_OutputPort[portNum].invoke(
    id,
    dataSize
  );
}

void PassiveSyncProductPortsOnlyComponentBase ::
  productSendOut_out(
      FwIndexType portNum,
      FwDpIdType id,
      const Fw::Buffer& buffer
  )
{
  FW_ASSERT(
    portNum < this->getNum_productSendOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );
  this->m_productSendOut_OutputPort[portNum].invoke(
    id,
    buffer
  );
}

// ----------------------------------------------------------------------
// Calls for messages received on special input ports
// ----------------------------------------------------------------------

void PassiveSyncProductPortsOnlyComponentBase ::
  m_p_productRecvIn_in(
      Fw::PassiveComponentBase* callComp,
      FwIndexType portNum,
      FwDpIdType id,
      const Fw::Buffer& buffer,
      const Fw::Success& status
  )
{
  FW_ASSERT(callComp);
  PassiveSyncProductPortsOnlyComponentBase* compPtr = static_cast<PassiveSyncProductPortsOnlyComponentBase*>(callComp);
  compPtr->productRecvIn_handlerBase(
    portNum,
    id,
    buffer,
    status
  );
}

// ----------------------------------------------------------------------
// Private data product handling functions
// ----------------------------------------------------------------------

void PassiveSyncProductPortsOnlyComponentBase ::
  productRecvIn_handler(
      const FwIndexType portNum,
      FwDpIdType id,
      const Fw::Buffer& buffer,
      const Fw::Success& status
  )
{
  (void) portNum;
  (void) id;
  (void) buffer;
  (void) status;
  // No data products defined
}