#include "main.h"
//#include "pros/misc.h"

void opcontrol(){

    while(true){                                      
        
        //we use while so it does not only run the program once but repeatedly until it's false like 0
        // we delay it because the motor gets an updated value every "value"  of ms so we get updates when we need too
        
        driveMotors();

        pros::delay(5);
                                                       
    }


}