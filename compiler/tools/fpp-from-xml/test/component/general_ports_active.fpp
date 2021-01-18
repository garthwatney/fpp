module M {

  @ Component GeneralPorts1
  active component GeneralPortsActive {

    @ Port p1
    async input port p1: [1] P \
      priority 10 \
      drop

    guarded input port p2: [1] P

    sync input port p3: [1] P

    output port p4: [10] P

    async input port p5: [1] serial \
      assert

    guarded input port p6: [1] serial

    sync input port p7: [1] serial

    output port p8: [10] serial

  }

}
