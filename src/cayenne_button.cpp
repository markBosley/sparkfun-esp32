// // This example shows how to connect to Cayenne using an ESP32 and send/receive sample data.
// // Make sure you install the ESP32 Board Package and select the correct ESP32 board before compiling.
// // To install the ESP32 Board Package follow the instructions here: https://github.com/espressif/arduino-esp32/blob/master/README.md#installation-instructions.

// //#define CAYENNE_DEBUG
// #define CAYENNE_PRINT Serial
// #include <Arduino.h>
// #include <CayenneMQTTESP32.h>

// #include <WiFi.h>

// const char* ssid     = "MB-brikeda";
// const char* wifiPassword = "lpdc533$";



// int ledPin = 5;
// const int BUTTON_PIN = 0;



// // Cayenne authentication info. This should be obtained from the Cayenne Dashboard.
// char username[] = "3913f430-feca-11eb-be09-83394739073b";
// char password[] = "04ca813197dc2691eb022a778611b7ea1277e75b";
// char clientID[] = "80e34900-feca-11eb-9043-f910f026fdbc";

// unsigned long lastMillis = 0;
// unsigned long count = 0;

// void setup() {
// 	Serial.begin(115200);
//     pinMode(BUTTON_PIN, INPUT_PULLUP);
// 	Cayenne.begin(username, password, clientID, ssid, wifiPassword);
// }

// void loop() {
// 	Cayenne.loop();
//     if (digitalRead(BUTTON_PIN) == LOW)
//   {
//      // while (digitalRead(BUTTON_PIN) == LOW)  ; // Wait for button to be released
//      Cayenne.virtualWrite(1, count++);
//       Serial.println("button is pressed! Send to cayenne!");
//   }
    
    
//   //Serial.println("hello!");
//     delay(500);
// }



// // Default function for processing actuator commands from the Cayenne Dashboard.
// // You can also use functions for specific channels, e.g CAYENNE_IN(1) for channel 1 commands.
// CAYENNE_IN_DEFAULT()
// {
// 	CAYENNE_LOG("Channel %u, value %s", request.channel, getValue.asString());
// 	//Process message here. If there is an error set an error message using getValue.setError(), e.g getValue.setError("Error message");
// }
