#include "main.h"


//MOTORS
pros::Motor leftFront(1, pros::E_MOTOR_GEARSET_06, false,pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor rightFront(2, pros::E_MOTOR_GEARSET_06, true,pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor leftBack(3, pros::E_MOTOR_GEARSET_06, false,pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor rightBack(4, pros::E_MOTOR_GEARSET_06, true,pros::E_MOTOR_ENCODER_COUNTS);

pros:: Controller controller(pros::E_CONTROLLER_MASTER);