// ------- globals.cpp ---------------------------------------------------------
//
// Use globals.cpp together with globals.h to define all motor and other objects
// which should be available/accessible in autonomous and opcontrol code.
//
// forexample setup a motor definition and then add a extern pros::motor to
// globals.h to ensure all other modules have access -- of course by including
// #include "globals.h" in the relevant source (.cpp) files

#include "main.h"
#include "portdef.hpp"

// --------------------- Global Motor Definitions ------------------------------

pros::Motor left_wheel (LEFT_MOTOR_PORT, MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor right_wheel (RIGHT_MOTOR_PORT, MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);

pros::Motor liftMotor(LIFT_MOTOR_PORT, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);

// -------------------- Remote Controls -----------------------------------------

pros::Controller master(pros::E_CONTROLLER_MASTER);
