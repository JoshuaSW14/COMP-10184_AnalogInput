//I, Joshua Symons-Webb, 000812836 certify that this material is my original work. No
//other person's work has been used without due acknowledgement.

#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  float iVal;
  int aVal;
  float resolution;

  resolution = 50/(float)1024;
  aVal = analogRead(A0);
  iVal = resolution*aVal; //map(aVal, 0, 1023, 0, 50);

  Serial.print("Digitized output of " + String(aVal) + " is equivalent to a temperature input of " + String(iVal) + " deg. C, which is ");

  if (iVal < 10){
    Serial.println("Cold!");
  }else if (iVal > 10 && iVal <= 15){
    Serial.println("Cool");
  }else if (iVal > 15 && iVal <= 25 ){
    Serial.println("Perfect");
  }else if (iVal > 25 && iVal <= 30 ){
    Serial.println("Warm");
  }else if (iVal > 30 && iVal <= 35 ){
    Serial.println("Hot");
  }else if (iVal > 35){
    Serial.println("Too Hot!");
  }

  //Serial.println("Digitized Value = " + String(iVal));

  delay(500);
}
