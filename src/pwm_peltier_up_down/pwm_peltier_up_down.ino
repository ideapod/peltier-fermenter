#include <Bounce.h>

#define UP_BUTTON 8
#define DOWN_BUTTON 7

const int mosfetPin = 3;

// up and down buttons Bounce object with a 5 millisecond debounce time
Bounce upButton = Bounce( UP_BUTTON,5 );
Bounce downButton = Bounce( DOWN_BUTTON, 5);

// variable to track level for mosfet 
int peltierLevel = 0;

void setup(){
  pinMode(mosfetPin, OUTPUT);  
  pinMode(UP_BUTTON, INPUT);  
  pinMode(DOWN_BUTTON, INPUT);
  Serial.begin(9600);
}

void loop(){

  upButton.update();
  downButton.update();
  
  // Get the update value
 int upValue = upButton.read();
 int downValue = downButton.read();
 
 // ignore both low and both high.
 if ((upValue == HIGH) && (downValue == LOW)) {
   peltierLevel = peltierLevel+1;
   peltierLevel = constrain(peltierLevel ,0,255);
   Serial.print("up "); 
   Serial.println(peltierLevel);
 } else if ((downValue == HIGH) && (upValue == LOW)) {
   peltierLevel = peltierLevel-1;
   peltierLevel = constrain(peltierLevel ,0,255);
   Serial.print("down ");
   Serial.println(peltierLevel);
 }
 
 
 
 analogWrite(mosfetPin, peltierLevel);
 delay(15);
}
