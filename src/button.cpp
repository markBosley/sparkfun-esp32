#include <Arduino.h>

int ledPin = 5;
const int BUTTON_PIN = 0;
int hadkjhdas=3;

void setup()
{
    pinMode(BUTTON_PIN, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
    Serial.begin(115200);
    hadkjhdas;
}

void loop()
{
    if (digitalRead(BUTTON_PIN) == LOW)
  {
     // while (digitalRead(BUTTON_PIN) == LOW)  ; // Wait for button to be released
      Serial.println("button is pressed! yay!");
  }
    
    
  //Serial.println("hello!");
    delay(500);
}