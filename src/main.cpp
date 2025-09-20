#include "vex.h"

using namespace vex;

competition Competition;

void driverControl() { 
  int forwardMovement = Controller.Axis3.position(); 
  int turn = Controller.Axis1.position();    

  double leftPower = forwardMovement + turn;
  double rightPower = forwardMovement - turn;

  leftDrive.spin(forward, rightPower/8.3, volt);
  rightDrive.spin(forward, rightPower/8.3, volt);

}

int main() {
  vexcodeInit();
  
  Competition.drivercontrol(driverControl);
  while (true)  {
    wait(100, msec);
  }
}
