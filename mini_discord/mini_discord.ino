//opdracht:
//verbind je arduino met die van je buurman/vrouw:
//gebruik hiervoor pin 10 en 11,
//JOUW pin 10 moet verbonden zijn met ZIJN/HAAR pin 11,
//doe hetzelfde met pin 11
//verbind een GND met die van je buurman/vrouw
//zorg ervoor dat je buurman/vrouw ook dit programma geupload
//gebruik de seriele monitor om met elkaar te chatten
//lees de code goed door
//dit programma laat toe om elkaars ingebouwde LED aan en uit te zetten, met welke commando's doe je dat?

#include <SoftwareSerial.h>
SoftwareSerial chat(10,11);

void setup() {
  Serial.begin(9600);
  chat.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  delay(10);
  while(Serial.available())
  {
    char c = Serial.read();
    chat.print(c);
  }
  while(chat.available())
  {
    char c = chat.read();
    if(c == 'n')
    {
      digitalWrite(LED_BUILTIN,HIGH);
    }
    if(c == 'f')
    {
      digitalWrite(LED_BUILTIN,LOW);
    }
    Serial.print(c);
  }
  
  //Serial.println("OK");
}
