// Testing Epi C3 Arduino IDE programming.
// https://github.com/rallekralle11/Epi_C3/tree/main
// Sketch: epi_c3_hello_serial.ino
// Board package: esp32 by espressif systems
// Board: LOLIN C3 Mini. 

// ESP32 C3 LED on pin GPIO8 (works with inverted logic)
const int ledPin = 8; 

void setup() {
   Serial.begin(115200);
   pinMode(ledPin, OUTPUT);
}
  
void loop() {
   Serial.println("Hello World and LED blink from Epi C3");
   // The LED should be connected at GPIO-8, but Epi C3 needs external LED
   digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(1000);                  // wait for a second
   digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
   delay(1000);                  // wait for a second
}
