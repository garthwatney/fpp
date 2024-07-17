
// ======================================================================
// \title  ActiveStateMachines_S1.h
// \author Auto-generated by STARS
// \brief  header file for state machine ActiveStateMachines_S1
//
// ======================================================================
           
#ifndef ActiveStateMachines_S1_H_
#define ActiveStateMachines_S1_H_

namespace Fw {
  class SMSignals;
}

class ActiveStateMachines_S1_Interface {
  public:
                                                                  
};

class ActiveStateMachines_S1 {
                                 
  private:
    ActiveStateMachines_S1_Interface *parent;
                                 
  public:
                                 
    ActiveStateMachines_S1(ActiveStateMachines_S1_Interface* parent) : parent(parent) {}
  
    enum ActiveStateMachines_S1States {
      OFF,
      ON,
    };

    enum ActiveStateMachines_S1Events {
      RTI_SIG,
    };
    
    enum ActiveStateMachines_S1States state;

    void * extension;

    void init();
    void update(const Fw::SMSignals *e);

};


#endif