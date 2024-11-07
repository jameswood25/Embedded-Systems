#include "mbed.h"

DigitalOut redLED(PC_2,1);
DigitalOut yellowLED(PC_3,1);
DigitalOut greenLED(PC_6,1);


// main() runs in its own thread in the OS
int main()
{
    wait_us(1000000);
    redLED = 0;
    yellowLED = 0;
    greenLED = 0;

    while (true) {
        
        redLED = 1;
        wait_us(2000000);
        yellowLED = 1;
        wait_us(2000000);
        redLED = 0;
        yellowLED = 0;
        greenLED = 1;
        wait_us(2000000);
        int flash;
        flash = 0;
        while (flash < 4) {
            redLED = 0;
            yellowLED = 1;
            greenLED = 0;
            wait_us(250000);
            yellowLED = 0;
            wait_us(250000);
            flash = flash + 1;
        }
        



    }
}

