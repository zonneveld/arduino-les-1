//opdracht:
//maak de volgende code af:
//zorg ervoor dat de arduino na het eerste bericht, je naam print, gebruik hier voor Serial.println();
//zorg ervoor dat dit maar 1 keer per seconde print
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("hallo wereld, hier komt");
  
  delay(10);
}
