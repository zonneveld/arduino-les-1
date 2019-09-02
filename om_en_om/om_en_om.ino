//opdracht:
//zorg ervoor dat wanneer de ingebouwde led aanstaat, de nieuwe led uit is en andersom:

void setup() {
  pinMode(13,OUTPUT);
  //vergeet niet van de nieuwe led de pinMode aan te duiden:
  
}

void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
