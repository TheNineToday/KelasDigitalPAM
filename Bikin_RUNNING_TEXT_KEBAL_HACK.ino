#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
String messageStatic = " @afterclass.id ";
String messageToScroll = "Follow Dulu Dong!!!";
void scrollText(int row, String message, int delayTime, int lcdColumns) {
  for (int i = 0; i < lcdColumns; i++) {
    message = " " + message;}
  message = message + " ";
  for (int pos = 0; pos < message.length(); pos++) {
    lcd.setCursor(0, row);
    lcd.print(message.substring(pos, pos + lcdColumns));
    delay(delayTime);}}
void setup() {
  lcd.begin();
  lcd.backlight();}
void loop() {
  lcd.setCursor(0, 0);
  lcd.print(messageStatic);
  scrollText(1, messageToScroll, 180, 16);}