// ======================================================================
// \title  ActiveSerialTester.cpp
// \author [user name]
// \brief  cpp file for ActiveSerial component test harness implementation class
// ======================================================================

#include "ActiveSerialTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

ActiveSerialTester ::
  ActiveSerialTester() :
    ActiveSerialGTestBase("ActiveSerialTester", ActiveSerialTester::MAX_HISTORY_SIZE),
    component("ActiveSerial")
{
  this->initComponents();
  this->connectPorts();
}

ActiveSerialTester ::
  ~ActiveSerialTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void ActiveSerialTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void ActiveSerialTester ::
  from_noArgsOut_handler(FwIndexType portNum)
{
  // TODO
}

U32 ActiveSerialTester ::
  from_noArgsReturnOut_handler(FwIndexType portNum)
{
  // TODO return
}

void ActiveSerialTester ::
  from_typedOut_handler(
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
  // TODO
}

F32 ActiveSerialTester ::
  from_typedReturnOut_handler(
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
  // TODO return
}

// ----------------------------------------------------------------------
// Handlers for serial from ports
// ----------------------------------------------------------------------

void ActiveSerialTester ::
  from_serialOut_handler(
      FwIndexType portNum,
      Fw::SerializeBufferBase& buffer
  )
{
  // TODO
}
