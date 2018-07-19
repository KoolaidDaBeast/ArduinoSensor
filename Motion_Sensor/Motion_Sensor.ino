void setup() {
  //Begin Serial
  Serial.begin(9600);

  //Setting pin mode
  pinMode(6, INPUT);
}

void loop() {
  //Check if pin is active
  if (digitalRead(6) == HIGH){
      Serial.println("Active");
  }
  else {
    Serial.println("Inactive");
  }

  delay(1000);
}
