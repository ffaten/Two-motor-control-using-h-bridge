#define pot1 A0
#define pot2 A1
void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
}
void loop()
{
  
  if (analogRead(pot1)>=512)
     {
    int Speed1= map(analogRead(pot1), 512,1023,0,255);     
     analogWrite (6,Speed1);
    analogWrite (5,0);
   
  }
  if (analogRead(pot1)<512) 
  {
   int Speed1= map(analogRead(pot1), 0,512,0,255);
      analogWrite (5,Speed1);
    analogWrite (6,0);  
  }
  if (analogRead(pot2)>=512)
     {
    int Speed2= map(analogRead(pot2), 512,1023,0,255);      
    analogWrite (10,Speed2);
    analogWrite (9,0);
  }
   if (analogRead(pot2)<512)
  {
   int Speed2= map(analogRead(pot2), 0,512,0,255); 
    analogWrite (9,Speed2);
    analogWrite (10,0);
}
 
}
