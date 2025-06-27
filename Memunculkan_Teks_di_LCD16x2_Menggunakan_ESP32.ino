#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.begin();
  lcd.backlight();
}
void loop() {
  lcd.setCursor(0, 0); 
  lcd.print("Kelas Digitl PAM");
  delay(1000);            
  lcd.clear();            
  lcd.setCursor(0, 1);    
  lcd.print(" Pertemuan ke 5 "); 
  delay(2500);  
  lcd.clear();
}