#include <wiringPi.h>
#include <stdio.h>
 
#define RLedPin 1
#define BLedPin 15
 
int main(void) {
        if(wiringPiSetup() == -1) { //when initialize wiringPi failed, print me$
                printf("setup wiringPi failed !\n");
                return -1;
        }
 
        pinMode(RLedPin, OUTPUT);
        pinMode(BLedPin, OUTPUT);
digitalWrite(RLedPin, LOW);
digitalWrite(BLedPin, LOW);

        while(1) {
                digitalWrite(RLedPin, HIGH);   //led on
                digitalWrite(BLedPin, LOW);
//printf("led on\n");
                delay(500);                 // wait 1 sec
                digitalWrite(RLedPin, LOW);  //led off
                digitalWrite(BLedPin, HIGH);
//printf("led off\n");
                delay(500);                 // wait 1 sec
        }

        return 0;

