const int Buzzer = 27;
void setup() {
  pinMode(Buzzer, OUTPUT);
}
void loop() {
  // Aktifkan buzzer
  digitalWrite(Buzzer, HIGH);
  delay(1000);
  digitalWrite(Buzzer, LOW);
  delay(1000);
}
