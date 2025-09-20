#include "vex.h"

using namespace vex;

competition Competition;

void driverControl() { 
  int forward = Controller.Axis2.position(); 
  int turn = Controller.Axis1.position();    

  int leftPower = forward + turn;
  int rightPower = forward - turn;

  leftDrive.spin(fwd, leftPower, percent);
  rightDrive.spin(fwd, rightPower, percent);
}

int main() {
  vexcodeInit();
  
  Competition.drivercontrol(driverControl);
  while (true)  {
    wait(100, msec);
  }
}
