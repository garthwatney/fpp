// ======================================================================
// \title  BasicTopologyAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Basic topology
// ======================================================================

#include "BasicTopologyAc.hpp"

namespace M {


  // ----------------------------------------------------------------------
  // Component configuration objects
  // ----------------------------------------------------------------------

  namespace ConfigObjects {

    namespace active2 {
      U32 x = 0;
    }

  }


  // ----------------------------------------------------------------------
  // Component instances
  // ----------------------------------------------------------------------

  Active active1(FW_OPTIONAL_NAME("active1"));

  Active active2;

  Active active3(FW_OPTIONAL_NAME("active3"));

  Passive passive1(FW_OPTIONAL_NAME("passive1"));

  ConcretePassive passive2(FW_OPTIONAL_NAME("passive2"));

  // ----------------------------------------------------------------------
  // Helper functions
  // ----------------------------------------------------------------------

  void initComponents(const TopologyState& state) {
    active1.init(QueueSizes::active1, InstanceIds::active1);
    active2.initSpecial();
    active3.init(QueueSizes::active3, InstanceIds::active3);
    passive1.init(InstanceIds::passive1);
    passive2.init(InstanceIds::passive2);
  }

  void configComponents(const TopologyState& state) {
    active2.config();
  }

  void setBaseIds() {
    active1.setIdBase(BaseIds::active1);
    active2.setIdBase(BaseIds::active2);
    active3.setIdBase(BaseIds::active3);
    passive1.setIdBase(BaseIds::passive1);
    passive2.setIdBase(BaseIds::passive2);
  }

  void connectComponents() {

    // C1
    passive1.set_p_OutputPort(
        0,
        active1.get_p_InputPort(0)
    );

    // C2
    passive2.set_p_OutputPort(
        0,
        active2.get_p_InputPort(0)
    );
  }

  void regCommands() {
    // Nothing to do
  }

  void readParameters() {
    // Nothing to do
  }

  void loadParameters() {
    // Nothing to do
  }

  void startTasks(const TopologyState& state) {
    active1.start(
      static_cast<Os::Task::ParamType>(Priorities::active1),
      static_cast<Os::Task::ParamType>(StackSizes::active1),
      static_cast<Os::Task::ParamType>(CPUs::active1),
      static_cast<Os::Task::ParamType>(TaskIds::active1)
    );
    active2.startSpecial();
    active3.start(
      Os::Task::TASK_DEFAULT, // Default priority
      Os::Task::TASK_DEFAULT, // Default stack size
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<Os::Task::ParamType>(TaskIds::active3)
    );
  }

  void stopTasks(const TopologyState& state) {
    active1.exit();
    active2.stopSpecial();
    active3.exit();
  }

  void freeThreads(const TopologyState& state) {
    (void) active1.ActiveComponentBase::join(nullptr);
    active2.freeSpecial();
    (void) active3.ActiveComponentBase::join(nullptr);
  }

  void tearDownComponents(const TopologyState& state) {
    active2.tearDown();
  }

  // ----------------------------------------------------------------------
  // Setup and teardown functions
  // ----------------------------------------------------------------------

  void setup(const TopologyState& state) {
    initComponents(state);
    configComponents(state);
    setBaseIds();
    connectComponents();
    regCommands();
    readParameters();
    loadParameters();
    startTasks(state);
  }

  void teardown(const TopologyState& state) {
    stopTasks(state);
    freeThreads(state);
    tearDownComponents(state);
  }

}
