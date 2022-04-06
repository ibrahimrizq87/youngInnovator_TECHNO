#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
  
void setup() {
  lcd.begin(16, 2);


}

void loop() {

lcd.setCursor(0, 0);
lcd.print("Ibrahim ");
lcd.setCursor(0, 1);
lcd.print("hamza mostafa");
  
  }
  /*
  #include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 
void setup() {
lcd.init(); 
lcd.backlight();

}
void loop() 
{
lcd.print("ARDUINO PROJECTS");

delay(1500);
lcd.setCursor(6, 1);
lcd.print("SUBSCRIBE ");
delay(1500);
lcd.clear();
}
  */
