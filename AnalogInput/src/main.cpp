#include <Arduino.h>

/*
 I, Sam Gershkovich, student number 000801766, certify that this material is my original work.
 No other person's work has been used without due acknowledgment and neither have I made my work available to anyone else.
*/

void setup()
{
  Serial.begin(115200);
  // put your setup code here, to run once:
}

void loop()
{

  // put your main code here, to run repeatedly:
  int iVal = analogRead(A0);
  double aVal = (iVal - 0) * (3.3 - 0) / (1024 - 0) + 0;
  double vVal = (aVal - 0) * (50 - 0) / (3.3 - 0) + 0;
  String temp = "";
  if (vVal < 10)
  {
    temp = "Cold!";
  }
  else if (vVal >= 10 && vVal < 15)
  {
    temp = "Cool";
  }
  else if (vVal >= 15 && vVal < 25)
  {
    temp = "Perfect";
  }
  else if (vVal >= 25 && vVal < 30)
  {
    temp = "Warm";
  }
  else if (vVal >= 30 && vVal < 35)
  {
    temp = "Hot";
  }
  else
  {
    temp = "Too Hot!";
  }
  Serial.println("Digitized output of " + String(iVal) + " is equivalent to a temperature input of " + String((double)(vVal)) + " deg. C, which is " + temp);

  delay(2000);
}