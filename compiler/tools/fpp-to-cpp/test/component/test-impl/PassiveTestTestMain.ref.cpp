// ======================================================================
// \title  PassiveTestTestMain.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PassiveTest component test harness implementation class
// ======================================================================

#include "PassiveTestTester.hpp"

TEST(Nominal, toDo) {
  PassiveTestTester tester;
  tester.toDo();
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}