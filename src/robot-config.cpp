#include "vex.h"

using namespace vex;

brain Brain;

#pragma region Vexcode device constructors
controller Controller1 = controller(primary);

//Left Motors
motor LeftFront = motor(PORT18, ratio18_1, true);
motor LeftMiidle = motor(PORT17, ratio18_1, true);
motor LeftBack = motor(PORT16, ratio18_1, true);

//Right Motors
motor RightFront = motor(PORT13, ratio18_1, true);
motor RightMiidle = motor(PORT12, ratio18_1, true);
motor RightBack = motor(PORT11, ratio18_1, true);
#pragma endregion



void vexcodeInit( void ) {
  // nothing to initialize
}