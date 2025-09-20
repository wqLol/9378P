#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor lm1 = motor(PORT11, ratio6_1, false);
motor lm2 = motor(PORT12, ratio6_1, true);
motor lm3 = motor(PORT13, ratio6_1, false);

motor rm1 = motor(PORT18, ratio6_1, false);
motor rm2 = motor(PORT19, ratio6_1, true);
motor rm3 = motor(PORT20, ratio6_1, false);

motor_group leftDrive(lm1, lm2, lm3);
motor_group rightDrive(rm1, rm2, rm3);

drivetrain drive(leftDrive, rightDrive);
controller Controller = controller();

void vexcodeInit( void ) {

}