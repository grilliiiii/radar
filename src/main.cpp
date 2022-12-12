#include <Arduino.h>

int incomingByte = 0;

void setup() {
  // put your setup code here, to run once:
  Serial1.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial1.read() > 0) {
    
    incomingByte = Serial1.read();   
    Serial.println(incomingByte);
    delay(1000);

  }

}