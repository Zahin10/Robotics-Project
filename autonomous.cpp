#include "main.h"
/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
#define LEFT_WHEELS_PORT 1
#define RIGHT_WHEELS_PORT 10    // we do this because we want to give it a port number(value)
#define FLYWHEEL_PORT 11
#define INTAKE_PORT 9


void autonomous(){
    pros::Motor flywheel (FLYWHEEL_PORT); // a flywheel is like a football launcher
    pros::Motor intake (INTAKE_PORT);     // an intake is like a convenyor belt
    moveForward();                               // if we look at the field; we have to move one tile up, turn right, and then shoot into the high goal
    intake.move_velocity(30);           // this sets the speed of the intake
    turnRight();                                // we now make the robot move right
    flywheel.move_velocity(127);       
}

void moveForward() {
    pros::Motor left_wheels (LEFT_WHEELS_PORT);
    pros::Motor right_wheels (RIGHT_WHEELS_PORT, true); // This reverses the motor

    right_wheels.move_velocity(100);
    left_wheels.move_velocity(100);
}

void turnRight() {
    pros::Motor left_wheels (LEFT_WHEELS_PORT);
    pros::Motor right_wheels (RIGHT_WHEELS_PORT, true); // This reverses the motor

    right_wheels.move_velocity(-100);
    left_wheels.move_velocity(100);
}