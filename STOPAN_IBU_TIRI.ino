const int Merah = 13;
void setup() {
  pinMode(Merah, OUTPUT);
}
void loop() {
  digitalWrite(Merah, HIGH);
  delay(1000);
  digitalWrite(Merah, LOW);
  delay(1000);
}