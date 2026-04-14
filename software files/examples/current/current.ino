#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  pinMode(34, INPUT);
  analogSetAttenuation(ADC_11db); // Set attenuation to 11dB for full scale range
  analogReadResolution(12); // Set ADC resolution to 12 bits (0-4095)
}

void loop() {
  int sensorValue = analogRead(34);
  // ESP32 ADC uses 12-bit resolution (0-4095)
  // and the reference voltage is approximately 3.3V
  float current =(float) sensorValue * (3.3f / 4095.0f);
  current=current/0.2;
  Serial.print("ADC reading: ");
  Serial.print(sensorValue);
  Serial.print(" - Current Sense: ");
  Serial.print(current);
  Serial.println(" I");

  delay(100);
}