#include <SoftwareSerial.h>

char message;

SoftwareSerial bluetooth(10, 11); // (RX, TX) (pin Rx BT, pin Tx BT)

void setup()
{
    // Ouvre la voie série avec l'ordinateur
    Serial.begin(9600);
    // Ouvre la voie série avec le module BT
    bluetooth.begin(38400);
}

void loop() // run over and over
{
    if (bluetooth.available()) {
  message = bluetooth.read();
        Serial.print(message);
    }
    if (Serial.available()) {
  message = Serial.read();
  bluetooth.print(message);
    }
}
