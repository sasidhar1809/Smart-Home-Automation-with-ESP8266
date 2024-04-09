#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL3de0lI5zy"
#define BLYNK_TEMPLATE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "J8rlfyehMn8PZjBoWNsZyxTqielHR3Pt"


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Blynk authentication token
char auth[] = "J8rlfyehMn8PZjBoWNsZyxTqielHR3Pt";

// Replace with your WiFi credentials
const char* ssid = "sasi";
const char* password = "123456789";

// Define the pins for the LEDs
const int numLEDs = 8;
const int ledPins[numLEDs] = {D1, D2, D3, D4, D5, D6, D7, D8}; // GPIO pins for ESP8266

void setup() {
  // Debug console
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi...");
  }

  // Initialize Blynk
  Blynk.begin(auth, ssid, password);

  // Set the LED pins as outputs
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  Blynk.run();
}

BLYNK_WRITE_DEFAULT() { // This function gets called for all virtual pin writes
  // Get the index of the virtual pin
  int pin = request.pin;
  
  // Get the value sent from the Blynk app
  int value = param.asInt();

  // Update the corresponding LED state
  digitalWrite(ledPins[pin], value);
}
