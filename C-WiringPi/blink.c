#include <wiringPi.h>
#include <stdio.h>
 
#define LedPin 1
 
int main(void) {
        if(wiringPiSetup() == -1) { //when initialize wiringPi failed, print me$
                printf("setup wiringPi failed !\n");
                return -1;
        }
 
        pinMode(LedPin, OUTPUT);
digitalWrite(LedPin, LOW);

        while(1) {
                digitalWrite(LedPin, HIGH);   //led on
                printf("led on\n");
                delay(1000);                 // wait 1 sec
                digitalWrite(LedPin, LOW);  //led off
                printf("led off\n");
                delay(1000);                 // wait 1 sec
        }

        return 0;
}

