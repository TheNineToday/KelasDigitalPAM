const int Merah = 13;
const int Kuning = 12;
const int Hijau = 14;
void setup() {
  pinMode(Merah, OUTPUT);
  pinMode(Kuning, OUTPUT);
  pinMode(Hijau, OUTPUT);
}
void loop() {
  digitalWrite(Merah, HIGH);
  digitalWrite(Kuning, LOW);
  digitalWrite(Hijau, LOW);
  delay(1000);
  digitalWrite(Merah, LOW);
  digitalWrite(Kuning, HIGH);
  digitalWrite(Hijau, LOW);
  delay(500);
  digitalWrite(Merah, LOW);
  digitalWrite(Kuning, LOW);
  digitalWrite(Hijau, HIGH);
  delay(3000);
}