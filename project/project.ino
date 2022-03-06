#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int value=0;
int ir1=7;
int ir2=6;
  int count=0;
  int buzzer=1;
  int led=8;
void setup() {
  lcd.begin(16, 2);
pinMode(ir1,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(ir2,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  
  if( digitalRead (ir1)==HIGH)
  {count++;}
  
value=analogRead(A0);
lcd.setCursor(0, 0);
lcd.print("No of people ");

 if( digitalRead (ir2)==HIGH)
  {count--;
  if (count<0){count=0;}}
  lcd.setCursor(0, 1);
lcd.print(count);
delay(1000);
if (count>15)
{tone(buzzer,1000);}
else {noTone(buzzer);}


if (value<300&& count >0){
  digitalWrite(led,HIGH);
}else{digitalWrite(led,LOW);}
if (count >10 && count<=15 ){tone (buzzer,1000);
delay(500);
noTone(buzzer);}


}

/*
if (value>400) {lcd.setCursor(0, 1);
lcd.print("LIGHT Is on"); }
else {lcd.setCursor(0, 1);
lcd.print("it is  Dark  ");}
  */
  
