const int touchPin = 33;
const int ledPin = 13;
bool ledState = false;
void setup(){
  Serial.begin(115200);
  pinMode (ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);} 
void loop() {
  int touchValue = touchRead(touchPin);
  if (touchValue < 40 && !ledState) { 
    ledState = true;
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
    delay(200);
  } else if (touchValue < 40 && ledState) {
     ledState = false;
     digitalWrite(ledPin, LOW);
     Serial.println("LED OFF");
     delay(200);}
  delay(50);}