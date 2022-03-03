byte pin[] = {2, 3, 4, 5, 6, 7, 8, 9};//arduino pin array
 
int number[9][8] = {//number array
  {1, 1, 0, 0, 0, 1, 1, 1},//1
  {0, 0, 1, 0, 0, 0, 1, 0},//2
  {1, 0, 0, 0, 0, 0, 1, 0},//3
  {1, 1, 0, 0, 0, 1, 0, 0},//4
  {1, 0, 0, 0, 1, 0, 0, 0},//5
  {0, 0, 0, 0, 1, 0, 0, 0},//6
  {1, 1, 0, 0, 0, 0, 0, 1},//7
  {0, 0, 0, 0, 0, 0, 0, 0},//8
  {1, 1, 0, 0, 0, 0, 0, 0},//9
};
int count = 0;
 
void setup() {
  Serial.begin(9600);
   pinMode(10,INPUT);
  for (byte a = 0; a < 8; a++) {
    pinMode(pin[a], OUTPUT);//define output pins
  }
}
 
void loop() {
  if (digitalRead(10)== HIGH){
    if (count == 9){
      count =0;
      }
    count ++;
    
    Serial.println(count);
    }
  
    if (count == 1)
    {for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[1][b]);//display numbers
    }
    }else if (count == 2)
    {for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[2][b]);//display numbers
    }
    }else if (count == 3)
    {for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[3][b]);//display numbers
    }
    }else if (count == 4)
    {for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[4][b]);//display numbers
    }
    }else if (count == 5)
    {for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[5][b]);//display numbers
    }
    }else if (count == 6)
    {for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[6][b]);//display numbers
    }
    }else if (count == 7)
    {for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[7][b]);//display numbers
    }
    }else if (count == 8)
    {for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[8][b]);//display numbers
    }
    }else 
    {for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[0][b]);//display numbers
    }
    }
    delay (1000);
  
}
