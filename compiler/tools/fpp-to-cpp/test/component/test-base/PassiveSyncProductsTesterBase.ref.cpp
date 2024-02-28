// ======================================================================
// \title  PassiveSyncProductsTesterBase.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PassiveSyncProducts component test harness base class
// ======================================================================

#include <cstdlib>
#include <cstring>

#include "test-base/PassiveSyncProductsTesterBase.hpp"

// ----------------------------------------------------------------------
// Component initialization
// ----------------------------------------------------------------------

void PassiveSyncProductsTesterBase ::
  init(FwInstanceIdType instance)
{
  // Initialize base class
  Fw::PassiveComponentBase::init(instance);

  // Connect input port productRequestOut
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_from_productRequestOut());
    port++
  ) {
    this->m_from_productRequestOut[port].init();
    this->m_from_productRequestOut[port].addCallComp(
      this,
      from_productRequestOut_static
    );
    this->m_from_productRequestOut[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_from_productRequestOut[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_from_productRequestOut[port].setObjName(portName.toChar());
#endif
  }

  // Connect input port productSendOut
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_from_productSendOut());
    port++
  ) {
    this->m_from_productSendOut[port].init();
    this->m_from_productSendOut[port].addCallComp(
      this,
      from_productSendOut_static
    );
    this->m_from_productSendOut[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_from_productSendOut[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_from_productSendOut[port].setObjName(portName.toChar());
#endif
  }

  // Connect input port timeGetOut
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_from_timeGetOut());
    port++
  ) {
    this->m_from_timeGetOut[port].init();
    this->m_from_timeGetOut[port].addCallComp(
      this,
      from_timeGetOut_static
    );
    this->m_from_timeGetOut[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_from_timeGetOut[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_from_timeGetOut[port].setObjName(portName.toChar());
#endif
  }

  // Connect input port noArgsOut
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_from_noArgsOut());
    port++
  ) {
    this->m_from_noArgsOut[port].init();
    this->m_from_noArgsOut[port].addCallComp(
      this,
      from_noArgsOut_static
    );
    this->m_from_noArgsOut[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_from_noArgsOut[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_from_noArgsOut[port].setObjName(portName.toChar());
#endif
  }

  // Connect input port noArgsReturnOut
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_from_noArgsReturnOut());
    port++
  ) {
    this->m_from_noArgsReturnOut[port].init();
    this->m_from_noArgsReturnOut[port].addCallComp(
      this,
      from_noArgsReturnOut_static
    );
    this->m_from_noArgsReturnOut[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_from_noArgsReturnOut[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_from_noArgsReturnOut[port].setObjName(portName.toChar());
#endif
  }

  // Connect input port typedOut
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_from_typedOut());
    port++
  ) {
    this->m_from_typedOut[port].init();
    this->m_from_typedOut[port].addCallComp(
      this,
      from_typedOut_static
    );
    this->m_from_typedOut[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_from_typedOut[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_from_typedOut[port].setObjName(portName.toChar());
#endif
  }

  // Connect input port typedReturnOut
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_from_typedReturnOut());
    port++
  ) {
    this->m_from_typedReturnOut[port].init();
    this->m_from_typedReturnOut[port].addCallComp(
      this,
      from_typedReturnOut_static
    );
    this->m_from_typedReturnOut[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_from_typedReturnOut[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_from_typedReturnOut[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port productRecvIn
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_to_productRecvIn());
    port++
  ) {
    this->m_to_productRecvIn[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_to_productRecvIn[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_to_productRecvIn[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port noArgsGuarded
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_to_noArgsGuarded());
    port++
  ) {
    this->m_to_noArgsGuarded[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_to_noArgsGuarded[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_to_noArgsGuarded[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port noArgsReturnGuarded
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_to_noArgsReturnGuarded());
    port++
  ) {
    this->m_to_noArgsReturnGuarded[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_to_noArgsReturnGuarded[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_to_noArgsReturnGuarded[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port noArgsReturnSync
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_to_noArgsReturnSync());
    port++
  ) {
    this->m_to_noArgsReturnSync[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_to_noArgsReturnSync[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_to_noArgsReturnSync[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port noArgsSync
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_to_noArgsSync());
    port++
  ) {
    this->m_to_noArgsSync[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_to_noArgsSync[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_to_noArgsSync[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port typedGuarded
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_to_typedGuarded());
    port++
  ) {
    this->m_to_typedGuarded[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_to_typedGuarded[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_to_typedGuarded[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port typedReturnGuarded
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_to_typedReturnGuarded());
    port++
  ) {
    this->m_to_typedReturnGuarded[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_to_typedReturnGuarded[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_to_typedReturnGuarded[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port typedReturnSync
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_to_typedReturnSync());
    port++
  ) {
    this->m_to_typedReturnSync[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_to_typedReturnSync[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_to_typedReturnSync[port].setObjName(portName.toChar());
#endif
  }

  // Connect output port typedSync
  for (
    FwIndexType port = 0;
    port < static_cast<FwIndexType>(this->getNum_to_typedSync());
    port++
  ) {
    this->m_to_typedSync[port].init();

#if FW_OBJECT_NAMES == 1
    Fw::ObjectName portName;
    portName.format(
      "%s_to_typedSync[%" PRI_PlatformIntType "]",
      this->m_objName.toChar(),
      port
    );
    this->m_to_typedSync[port].setObjName(portName.toChar());
#endif
  }
}

// ----------------------------------------------------------------------
// Connectors for to ports
// ----------------------------------------------------------------------

void PassiveSyncProductsTesterBase ::
  connect_to_cmdIn(
      FwIndexType portNum,
      Fw::InputCmdPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_to_cmdIn(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_to_cmdIn[portNum].addCallPort(port);
}

void PassiveSyncProductsTesterBase ::
  connect_to_productRecvIn(
      FwIndexType portNum,
      Fw::InputDpResponsePort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_to_productRecvIn(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_to_productRecvIn[portNum].addCallPort(port);
}

void PassiveSyncProductsTesterBase ::
  connect_to_noArgsGuarded(
      FwIndexType portNum,
      Ports::InputNoArgsPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_to_noArgsGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_to_noArgsGuarded[portNum].addCallPort(port);
}

void PassiveSyncProductsTesterBase ::
  connect_to_noArgsReturnGuarded(
      FwIndexType portNum,
      Ports::InputNoArgsReturnPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_to_noArgsReturnGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_to_noArgsReturnGuarded[portNum].addCallPort(port);
}

void PassiveSyncProductsTesterBase ::
  connect_to_noArgsReturnSync(
      FwIndexType portNum,
      Ports::InputNoArgsReturnPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_to_noArgsReturnSync(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_to_noArgsReturnSync[portNum].addCallPort(port);
}

void PassiveSyncProductsTesterBase ::
  connect_to_noArgsSync(
      FwIndexType portNum,
      Ports::InputNoArgsPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_to_noArgsSync(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_to_noArgsSync[portNum].addCallPort(port);
}

void PassiveSyncProductsTesterBase ::
  connect_to_typedGuarded(
      FwIndexType portNum,
      Ports::InputTypedPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_to_typedGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_to_typedGuarded[portNum].addCallPort(port);
}

void PassiveSyncProductsTesterBase ::
  connect_to_typedReturnGuarded(
      FwIndexType portNum,
      Ports::InputTypedReturnPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_to_typedReturnGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_to_typedReturnGuarded[portNum].addCallPort(port);
}

void PassiveSyncProductsTesterBase ::
  connect_to_typedReturnSync(
      FwIndexType portNum,
      Ports::InputTypedReturnPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_to_typedReturnSync(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_to_typedReturnSync[portNum].addCallPort(port);
}

void PassiveSyncProductsTesterBase ::
  connect_to_typedSync(
      FwIndexType portNum,
      Ports::InputTypedPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_to_typedSync(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_to_typedSync[portNum].addCallPort(port);
}

// ----------------------------------------------------------------------
// Getters for from ports
// ----------------------------------------------------------------------

Fw::InputCmdRegPort* PassiveSyncProductsTesterBase ::
  get_from_cmdRegOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_cmdRegOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_cmdRegOut[portNum];
}

Fw::InputCmdResponsePort* PassiveSyncProductsTesterBase ::
  get_from_cmdResponseOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_cmdResponseOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_cmdResponseOut[portNum];
}

Fw::InputLogPort* PassiveSyncProductsTesterBase ::
  get_from_eventOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_eventOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_eventOut[portNum];
}

Fw::InputPrmGetPort* PassiveSyncProductsTesterBase ::
  get_from_prmGetOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_prmGetOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_prmGetOut[portNum];
}

Fw::InputPrmSetPort* PassiveSyncProductsTesterBase ::
  get_from_prmSetOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_prmSetOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_prmSetOut[portNum];
}

Fw::InputDpRequestPort* PassiveSyncProductsTesterBase ::
  get_from_productRequestOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_productRequestOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_productRequestOut[portNum];
}

Fw::InputDpSendPort* PassiveSyncProductsTesterBase ::
  get_from_productSendOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_productSendOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_productSendOut[portNum];
}

#if FW_ENABLE_TEXT_LOGGING == 1

Fw::InputLogTextPort* PassiveSyncProductsTesterBase ::
  get_from_textEventOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_textEventOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_textEventOut[portNum];
}

#endif

Fw::InputTimePort* PassiveSyncProductsTesterBase ::
  get_from_timeGetOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_timeGetOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_timeGetOut[portNum];
}

Fw::InputTlmPort* PassiveSyncProductsTesterBase ::
  get_from_tlmOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_tlmOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_tlmOut[portNum];
}

Ports::InputNoArgsPort* PassiveSyncProductsTesterBase ::
  get_from_noArgsOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_noArgsOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_noArgsOut[portNum];
}

Ports::InputNoArgsReturnPort* PassiveSyncProductsTesterBase ::
  get_from_noArgsReturnOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_noArgsReturnOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_noArgsReturnOut[portNum];
}

Ports::InputTypedPort* PassiveSyncProductsTesterBase ::
  get_from_typedOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_typedOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_typedOut[portNum];
}

Ports::InputTypedReturnPort* PassiveSyncProductsTesterBase ::
  get_from_typedReturnOut(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_from_typedReturnOut(),
    static_cast<FwAssertArgType>(portNum)
  );

  return &this->m_from_typedReturnOut[portNum];
}

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

PassiveSyncProductsTesterBase ::
  PassiveSyncProductsTesterBase(
      const char* const compName,
      const U32 maxHistorySize
  ) :
    Fw::PassiveComponentBase(compName)
{
  // Initialize port histories
  this->fromPortHistory_typedOut = new History<FromPortEntry_typedOut>(maxHistorySize);
  this->fromPortHistory_typedReturnOut = new History<FromPortEntry_typedReturnOut>(maxHistorySize);

  // Initialize data product histories
  this->productRequestHistory = new History<DpRequest>(maxHistorySize);
  this->productSendHistory = new History<DpSend>(maxHistorySize);

  // Clear history
  this->clearHistory();
}

PassiveSyncProductsTesterBase ::
  ~PassiveSyncProductsTesterBase()
{
  // Destroy port histories
  delete this->fromPortHistory_typedOut;
  delete this->fromPortHistory_typedReturnOut;

  // Destroy data product histories
  delete this->productRequestHistory;
  delete this->productSendHistory;
}

// ----------------------------------------------------------------------
// Handler base-class functions for from ports
// ----------------------------------------------------------------------

void PassiveSyncProductsTesterBase ::
  from_noArgsOut_handlerBase(FwIndexType portNum)
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_from_noArgsOut(),
    static_cast<FwAssertArgType>(portNum)
  );
  this->from_noArgsOut_handler(portNum);
}

U32 PassiveSyncProductsTesterBase ::
  from_noArgsReturnOut_handlerBase(FwIndexType portNum)
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_from_noArgsReturnOut(),
    static_cast<FwAssertArgType>(portNum)
  );
  return this->from_noArgsReturnOut_handler(portNum);
}

void PassiveSyncProductsTesterBase ::
  from_typedOut_handlerBase(
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_from_typedOut(),
    static_cast<FwAssertArgType>(portNum)
  );
  this->from_typedOut_handler(
    portNum,
    u32,
    f32,
    b,
    str1,
    e,
    a,
    s
  );
}

F32 PassiveSyncProductsTesterBase ::
  from_typedReturnOut_handlerBase(
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_from_typedReturnOut(),
    static_cast<FwAssertArgType>(portNum)
  );
  return this->from_typedReturnOut_handler(
    portNum,
    u32,
    f32,
    b,
    str2,
    e,
    a,
    s
  );
}

// ----------------------------------------------------------------------
// Invocation functions for to ports
// ----------------------------------------------------------------------

void PassiveSyncProductsTesterBase ::
  invoke_to_noArgsGuarded(FwIndexType portNum)
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_to_noArgsGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );
  this->m_to_noArgsGuarded[portNum].invoke();
}

U32 PassiveSyncProductsTesterBase ::
  invoke_to_noArgsReturnGuarded(FwIndexType portNum)
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_to_noArgsReturnGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );
  return this->m_to_noArgsReturnGuarded[portNum].invoke();
}

U32 PassiveSyncProductsTesterBase ::
  invoke_to_noArgsReturnSync(FwIndexType portNum)
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_to_noArgsReturnSync(),
    static_cast<FwAssertArgType>(portNum)
  );
  return this->m_to_noArgsReturnSync[portNum].invoke();
}

void PassiveSyncProductsTesterBase ::
  invoke_to_noArgsSync(FwIndexType portNum)
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_to_noArgsSync(),
    static_cast<FwAssertArgType>(portNum)
  );
  this->m_to_noArgsSync[portNum].invoke();
}

void PassiveSyncProductsTesterBase ::
  invoke_to_typedGuarded(
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_to_typedGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );
  this->m_to_typedGuarded[portNum].invoke(
    u32,
    f32,
    b,
    str1,
    e,
    a,
    s
  );
}

F32 PassiveSyncProductsTesterBase ::
  invoke_to_typedReturnGuarded(
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_to_typedReturnGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );
  return this->m_to_typedReturnGuarded[portNum].invoke(
    u32,
    f32,
    b,
    str2,
    e,
    a,
    s
  );
}

F32 PassiveSyncProductsTesterBase ::
  invoke_to_typedReturnSync(
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_to_typedReturnSync(),
    static_cast<FwAssertArgType>(portNum)
  );
  return this->m_to_typedReturnSync[portNum].invoke(
    u32,
    f32,
    b,
    str2,
    e,
    a,
    s
  );
}

void PassiveSyncProductsTesterBase ::
  invoke_to_typedSync(
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  // Make sure port number is valid
  FW_ASSERT(
    portNum < this->getNum_to_typedSync(),
    static_cast<FwAssertArgType>(portNum)
  );
  this->m_to_typedSync[portNum].invoke(
    u32,
    f32,
    b,
    str1,
    e,
    a,
    s
  );
}

// ----------------------------------------------------------------------
// Getters for port counts
// ----------------------------------------------------------------------

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_to_cmdIn() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_to_cmdIn));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_to_productRecvIn() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_to_productRecvIn));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_to_noArgsGuarded() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_to_noArgsGuarded));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_to_noArgsReturnGuarded() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_to_noArgsReturnGuarded));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_to_noArgsReturnSync() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_to_noArgsReturnSync));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_to_noArgsSync() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_to_noArgsSync));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_to_typedGuarded() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_to_typedGuarded));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_to_typedReturnGuarded() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_to_typedReturnGuarded));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_to_typedReturnSync() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_to_typedReturnSync));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_to_typedSync() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_to_typedSync));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_cmdRegOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_cmdRegOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_cmdResponseOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_cmdResponseOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_eventOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_eventOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_prmGetOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_prmGetOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_prmSetOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_prmSetOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_productRequestOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_productRequestOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_productSendOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_productSendOut));
}

#if FW_ENABLE_TEXT_LOGGING == 1

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_textEventOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_textEventOut));
}

#endif

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_timeGetOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_timeGetOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_tlmOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_tlmOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_noArgsOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_noArgsOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_noArgsReturnOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_noArgsReturnOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_typedOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_typedOut));
}

FwIndexType PassiveSyncProductsTesterBase ::
  getNum_from_typedReturnOut() const
{
  return static_cast<FwIndexType>(FW_NUM_ARRAY_ELEMENTS(this->m_from_typedReturnOut));
}

// ----------------------------------------------------------------------
// Connection status queries for to ports
// ----------------------------------------------------------------------

bool PassiveSyncProductsTesterBase ::
  isConnected_to_cmdIn(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_to_cmdIn(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_to_cmdIn[portNum].isConnected();
}

bool PassiveSyncProductsTesterBase ::
  isConnected_to_productRecvIn(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_to_productRecvIn(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_to_productRecvIn[portNum].isConnected();
}

bool PassiveSyncProductsTesterBase ::
  isConnected_to_noArgsGuarded(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_to_noArgsGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_to_noArgsGuarded[portNum].isConnected();
}

bool PassiveSyncProductsTesterBase ::
  isConnected_to_noArgsReturnGuarded(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_to_noArgsReturnGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_to_noArgsReturnGuarded[portNum].isConnected();
}

bool PassiveSyncProductsTesterBase ::
  isConnected_to_noArgsReturnSync(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_to_noArgsReturnSync(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_to_noArgsReturnSync[portNum].isConnected();
}

bool PassiveSyncProductsTesterBase ::
  isConnected_to_noArgsSync(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_to_noArgsSync(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_to_noArgsSync[portNum].isConnected();
}

bool PassiveSyncProductsTesterBase ::
  isConnected_to_typedGuarded(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_to_typedGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_to_typedGuarded[portNum].isConnected();
}

bool PassiveSyncProductsTesterBase ::
  isConnected_to_typedReturnGuarded(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_to_typedReturnGuarded(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_to_typedReturnGuarded[portNum].isConnected();
}

bool PassiveSyncProductsTesterBase ::
  isConnected_to_typedReturnSync(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_to_typedReturnSync(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_to_typedReturnSync[portNum].isConnected();
}

bool PassiveSyncProductsTesterBase ::
  isConnected_to_typedSync(FwIndexType portNum)
{
  FW_ASSERT(
    portNum < this->getNum_to_typedSync(),
    static_cast<FwAssertArgType>(portNum)
  );

  return this->m_to_typedSync[portNum].isConnected();
}

// ----------------------------------------------------------------------
// Functions to test time
// ----------------------------------------------------------------------

void PassiveSyncProductsTesterBase ::
  setTestTime(const Fw::Time& timeTag)
{
  this->m_testTime = timeTag;
}

// ----------------------------------------------------------------------
// Functions for testing data products
// ----------------------------------------------------------------------

void PassiveSyncProductsTesterBase ::
  pushProductRequestEntry(
      FwDpIdType id,
      FwSizeType dataSize
  )
{
  DpRequest e = { id, dataSize };
  this->productRequestHistory->push_back(e);
}

void PassiveSyncProductsTesterBase ::
  productRequest_handler(
      FwDpIdType id,
      FwSizeType dataSize
  )
{
  this->pushProductRequestEntry(id, dataSize);
}

void PassiveSyncProductsTesterBase ::
  sendProductResponse(
      FwDpIdType id,
      const Fw::Buffer& buffer,
      const Fw::Success& status
  )
{
  FW_ASSERT(this->getNum_to_productRecvIn() > 0);
  FW_ASSERT(this->m_to_productRecvIn[0].isConnected());
  this->m_to_productRecvIn[0].invoke(id, buffer, status);
}

void PassiveSyncProductsTesterBase ::
  pushProductSendEntry(
      FwDpIdType id,
      const Fw::Buffer& buffer
  )
{
  DpSend e = { id, buffer };
  this->productSendHistory->push_back(e);
}

void PassiveSyncProductsTesterBase ::
  productSend_handler(
      FwDpIdType id,
      const Fw::Buffer& buffer
  )
{
  this->pushProductSendEntry(id, buffer);
}

// ----------------------------------------------------------------------
// History functions
// ----------------------------------------------------------------------

void PassiveSyncProductsTesterBase ::
  clearHistory()
{
  this->clearFromPortHistory();
  this->productRequestHistory->clear();
  this->productSendHistory->clear();
}

void PassiveSyncProductsTesterBase ::
  clearFromPortHistory()
{
  this->fromPortHistorySize = 0;
  this->fromPortHistorySize_noArgsOut = 0;
  this->fromPortHistorySize_noArgsReturnOut = 0;
  this->fromPortHistory_typedOut->clear();
  this->fromPortHistory_typedReturnOut->clear();
}

void PassiveSyncProductsTesterBase ::
  pushFromPortEntry_noArgsOut()
{
  this->fromPortHistorySize_noArgsOut++;
  this->fromPortHistorySize++;
}

void PassiveSyncProductsTesterBase ::
  pushFromPortEntry_noArgsReturnOut()
{
  this->fromPortHistorySize_noArgsReturnOut++;
  this->fromPortHistorySize++;
}

void PassiveSyncProductsTesterBase ::
  pushFromPortEntry_typedOut(
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  FromPortEntry_typedOut _e = {
    u32,
    f32,
    b,
    str1,
    e,
    a,
    s
  };
  this->fromPortHistory_typedOut->push_back(_e);
  this->fromPortHistorySize++;
}

void PassiveSyncProductsTesterBase ::
  pushFromPortEntry_typedReturnOut(
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  FromPortEntry_typedReturnOut _e = {
    u32,
    f32,
    b,
    str2,
    e,
    a,
    s
  };
  this->fromPortHistory_typedReturnOut->push_back(_e);
  this->fromPortHistorySize++;
}

// ----------------------------------------------------------------------
// Static functions for output ports
// ----------------------------------------------------------------------

void PassiveSyncProductsTesterBase ::
  from_productRequestOut_static(
      Fw::PassiveComponentBase* const callComp,
      FwIndexType portNum,
      FwDpIdType id,
      FwSizeType dataSize
  )
{
  PassiveSyncProductsTesterBase* _testerBase = static_cast<PassiveSyncProductsTesterBase*>(callComp);
  _testerBase->productRequest_handler(id, dataSize);
}

void PassiveSyncProductsTesterBase ::
  from_productSendOut_static(
      Fw::PassiveComponentBase* const callComp,
      FwIndexType portNum,
      FwDpIdType id,
      const Fw::Buffer& buffer
  )
{
  PassiveSyncProductsTesterBase* _testerBase = static_cast<PassiveSyncProductsTesterBase*>(callComp);
  _testerBase->productSend_handler(id, buffer);
}

void PassiveSyncProductsTesterBase ::
  from_timeGetOut_static(
      Fw::PassiveComponentBase* const callComp,
      FwIndexType portNum,
      Fw::Time& time
  )
{
  PassiveSyncProductsTesterBase* _testerBase = static_cast<PassiveSyncProductsTesterBase*>(callComp);
  time = _testerBase->m_testTime;
}

void PassiveSyncProductsTesterBase ::
  from_noArgsOut_static(
      Fw::PassiveComponentBase* const callComp,
      FwIndexType portNum
  )
{
  FW_ASSERT(callComp != nullptr);
  PassiveSyncProductsTesterBase* _testerBase = static_cast<PassiveSyncProductsTesterBase*>(callComp);
  _testerBase->from_noArgsOut_handlerBase(portNum);
}

U32 PassiveSyncProductsTesterBase ::
  from_noArgsReturnOut_static(
      Fw::PassiveComponentBase* const callComp,
      FwIndexType portNum
  )
{
  FW_ASSERT(callComp != nullptr);
  PassiveSyncProductsTesterBase* _testerBase = static_cast<PassiveSyncProductsTesterBase*>(callComp);
  return _testerBase->from_noArgsReturnOut_handlerBase(portNum);
}

void PassiveSyncProductsTesterBase ::
  from_typedOut_static(
      Fw::PassiveComponentBase* const callComp,
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  FW_ASSERT(callComp != nullptr);
  PassiveSyncProductsTesterBase* _testerBase = static_cast<PassiveSyncProductsTesterBase*>(callComp);
  _testerBase->from_typedOut_handlerBase(
    portNum,
    u32,
    f32,
    b,
    str1,
    e,
    a,
    s
  );
}

F32 PassiveSyncProductsTesterBase ::
  from_typedReturnOut_static(
      Fw::PassiveComponentBase* const callComp,
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  FW_ASSERT(callComp != nullptr);
  PassiveSyncProductsTesterBase* _testerBase = static_cast<PassiveSyncProductsTesterBase*>(callComp);
  return _testerBase->from_typedReturnOut_handlerBase(
    portNum,
    u32,
    f32,
    b,
    str2,
    e,
    a,
    s
  );
}
