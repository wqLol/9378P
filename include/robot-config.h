using namespace vex;

extern brain Brain;

// VEXcode device constructors
extern motor_group leftDrive;
extern motor_group rightDrive;

extern drivetrain drive;
extern controller Controller;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );