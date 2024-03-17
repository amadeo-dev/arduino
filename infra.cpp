#include <IRremote.h>

long val;
int IRpin =10;
int pinLed = 4;

IRrecv irrecv(IRpin);
decode_results results;

void setup(){
Serial.begin(9600);
irrecv.enableIRIn();

}
