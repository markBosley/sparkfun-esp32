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




// // Cayenne authentication info. This should be obtained from the Cayenne Dashboard.
// char username[] = "3913f430-feca-11eb-be09-83394739073b";
// char password[] = "04ca813197dc2691eb022a778611b7ea1277e75b";
// char clientID[] = "80e34900-feca-11eb-9043-f910f026fdbc";

// unsigned long lastMillis = 0;

// void setup() {
// 	Serial.begin(115200);
    
// 	Cayenne.begin(username, password, clientID, ssid, wifiPassword);
// }

// void loop() {
// 	Cayenne.loop();
  
// }

// // Default function for sending sensor data at intervals to Cayenne.
// // You can also use functions for specific channels, e.g CAYENNE_OUT(1) for sending channel 1 data.
// CAYENNE_OUT_DEFAULT()
// {
// 	// Write data to Cayenne here. This example just sends the current uptime in milliseconds on virtual channel 0.
// 	Cayenne.virtualWrite(0, millis());
// 	// Some examples of other functions you can use to send data.
// 	//Cayenne.celsiusWrite(1, 22.0);
// 	//Cayenne.luxWrite(2, 700);
// 	//Cayenne.virtualWrite(3, 50, TYPE_PROXIMITY, UNIT_CENTIMETER);
// }

// // Default function for processing actuator commands from the Cayenne Dashboard.
// // You can also use functions for specific channels, e.g CAYENNE_IN(1) for channel 1 commands.
// CAYENNE_IN_DEFAULT()
// {
// 	CAYENNE_LOG("Channel %u, value %s", request.channel, getValue.asString());
// 	//Process message here. If there is an error set an error message using getValue.setError(), e.g getValue.setError("Error message");
// }
