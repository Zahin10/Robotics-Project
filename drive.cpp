#include "main.h"
#include "globals.cpp"

//DRIVER CONTROL FUNCTION

void setDrive(int left, int right){
    leftFront = left;
    leftBack = left;
    rightBack = right;
    rightFront= right;
    
    
}

//HELPER FUNCTIONS

void driveMotors(){

    // we put parameters here so we can make the code much more easier and readable than just writing down code over and over

    int leftJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);

    // voltages in motors range from -127 to 127; we have to create a deadzone due to the controller not being exactly at 0(not moving) 
    // when we are not even touching the joystick. The number could be 5, 8, 10, or 12, it just depends on the error of the controller joystick

    if(abs(leftJoystick)<5)
        leftJoystick =0;
    if(abs(rightJoystick)<5)    //abs is necessary so it does not read any negative values because it does matter if it negative(only matters how far it is from zero)
        rightJoystick =0;

    setDrive(leftJoystick,rightJoystick);
  
}

