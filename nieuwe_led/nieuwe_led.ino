//opdracht:
// verbind de weerstand aan de lange poot van de nieuwe LED,
// prik de andere poot van de weerstand in pin 12
// prik de andere poot van de led (dus de korte poot) in een pin met de naam GND
// pas de code aan dat alleen de nieuwe led knippert


void setup() {
  //vergeet niet de juiste pin aan te geven:
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
