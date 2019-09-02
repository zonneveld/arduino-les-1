//opdracht:
//maak de volgende code af:
//zorg ervoor dat de arduino per seconde zegt hoelang hij wakker is

int hoeveel_secondes_ik_al_wakker_ben;
void setup() {
  hoeveel_secondes_ik_al_wakker_ben = 0;
  Serial.begin(9600);
}

void loop() {
  Serial.print("ik ben al ");
  
  Serial.println(" seconde wakker");
  delay(1000);
  hoeveel_secondes_ik_al_wakker_ben += 1; 
}
