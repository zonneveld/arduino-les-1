//opdracht:
//nu staat de led 1 seconde aan, en 1 seconde uit,
//zorg ervoor dat het 2 seconde aan staat, en een halve seconde uit:
void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
