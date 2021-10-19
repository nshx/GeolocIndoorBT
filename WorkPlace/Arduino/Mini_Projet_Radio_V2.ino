#include <SoftwareSerial.h>

String message;
int octet, i;
char caractere;
int Error = 8; // pin 8 pour signaler une erreur

SoftwareSerial bluetooth(10, 11); // (RX, TX) (pin Rx BT, pin Tx BT)

void setup()
{
    // Ouvre la voie série avec l'ordinateur
    Serial.begin(9600);
    // Ouvre la voie série avec le module BT
    bluetooth.begin(9600);
    pinMode(Error, OUTPUT);
}

void loop() // run over and over
{
  while(bluetooth.available()>0)
  {
    octet = bluetooth.read();
    caractere=char(octet); // convertit l'octet reçu en caractère
    message=message+caractere; // ajoute le caratère au String
    i++;
  }

  if(i != 0)
  {
    if (message == "Merde" || message == "merde" || message == "Putain" || message == "putain") //mots interdits
    {
        digitalWrite(Error, HIGH); // LED rouge à 1
        Serial.println ("Message non autorise");
        bluetooth.print("Message non autorise");
        message = ""; //RAZ le String de réception
        i = 0;
     }
     else
     {
        Serial.println ("Message recue="+message); // affiche la chaine recue
        message=""; //RAZ le String de réception
        delay(100); // pause
        digitalWrite(Error, LOW); // LED rouge à 0
        bluetooth.print("slave rcve");
        i = 0;
     }
  }
}
