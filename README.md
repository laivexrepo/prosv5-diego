# prosv5-diego
Simple remote test program to verify Remote Operation

Make sure your radio is plugged into the port 21 - if not update portdef.hpp
Make sure you FIRST wire the rmote with a smart cable to your V5 brain and ensure it is linked as well as the firmware is up to date - follow firmware update prompts on brain LCD if asked to update, similar may be true for the radio.

The code has as simple while(true) loop i nthe opcontrol section, and it contaisn two blocks of code - one using if(master.get_digital(DIGITAL_DOWN)) { } the other using if(master.get_digital_new_press(DIGITAL_DOWN)) { }, you should comment one of these blocks out and observe the difference.

To run the program, ensure you have a console open as it will show button press actiosn to the console, every tiem a butto nis pressed you should see a action printed in the console.

REMEMEBR while(true) { } loops must have a pros::delay(20); to ensure that the processor is not starved and the processor cna react to button actions.
