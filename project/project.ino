#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 
int value=0;
int ir1=7;
int ir2=6;
int ir3=0;
  int count=0;
  int buzzer=1;
  int buzzer2=3;
  int led=8;
  int led2=4;
  int count2=0;
  int YS1 =10;
  int YS2 =9;
  int GS1 =11;
  int GS2 =12;
int RS1 =13;
int RS2 =2;
  
  
  
void setup() {
  lcd.init(); 
lcd.backlight();
pinMode(ir1,INPUT);
pinMode(buzzer,OUTPUT);

pinMode(YS1,OUTPUT);
pinMode(YS2,OUTPUT);

pinMode(GS1,OUTPUT);
pinMode(GS2,OUTPUT);

pinMode(RS1,OUTPUT);
pinMode(RS2,OUTPUT);

pinMode(ir2,INPUT);
pinMode(led,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(ir3,INPUT);
lcd.print("No of people ");
}

void loop() {
  
  if( digitalRead (ir1)==HIGH)
  {count++;}
  
  
value=analogRead(A0);


 if( digitalRead (ir2)==HIGH)
  {count--;
  count2++;
  if (count<0){
 
    count=0;}}
    
 if( digitalRead (ir3)==LOW)
  {count2--;
  
  if (count<0){

    count2=0;}}
lcd.setCursor(0, 1);
lcd.print("S.1:");lcd.print(count);
lcd.setCursor(7, 1);
lcd.print("S.2:");lcd.print(count2);
delay(1000);
if (count>15)
{tone(buzzer,1000);
digitalWrite(RS1,HIGH);
digitalWrite(YS1,LOW);
digitalWrite(GS1,LOW);

}
else {noTone(buzzer);
digitalWrite(RS1,LOW);
digitalWrite(YS1,LOW);
digitalWrite(GS1,HIGH);

}
if (count2>15)
{tone(buzzer2,1000);
digitalWrite(RS2,HIGH);
digitalWrite(YS2,LOW);
digitalWrite(GS2,LOW);
}
else {noTone(buzzer2);
digitalWrite(RS2,LOW);
digitalWrite(YS2,LOW);
digitalWrite(GS2,HIGH);

}


if (value<300&& count >0){
  digitalWrite(led,HIGH);
}else{digitalWrite(led,LOW);}
if (count >10 && count<=15 )
{tone (buzzer,1000);
digitalWrite(RS1,LOW);
digitalWrite(YS1,HIGH);
digitalWrite(GS1,LOW);

delay(500);
noTone(buzzer);
}


if (value<300&& count2 >0){
  digitalWrite(led2,HIGH);
}else{digitalWrite(led2,LOW);}
if (count2 >10 && count2<=15 )
{digitalWrite(RS2,LOW);
digitalWrite(YS2,HIGH);
digitalWrite(GS2,LOW);
  tone (buzzer2,1000);
delay(500);
noTone(buzzer2);}


}

/*
if (value>400) {lcd.setCursor(0, 1);
lcd.print("LIGHT Is on"); }
else {lcd.setCursor(0, 1);
lcd.print("it is  Dark  ");}
  */
  
