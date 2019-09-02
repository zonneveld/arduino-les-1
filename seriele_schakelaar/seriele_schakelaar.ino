// opdracht:
// zorg ervoor dat wanneer de arduino een '?' leest, de ingebouwde led aan gaat
// zorg ervoor dat wanneer de arduino een '!' leest, de ingebouwde led uit gaat

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  digitalWrite(LED_BUILTIN,HIGH);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available())
  {
    char c = Serial.read();
    if(c=='?')
    {
      //doe de led aan!
    }
    if(c=='!')
    {
      //doe de led uit!
    }
  }
}
