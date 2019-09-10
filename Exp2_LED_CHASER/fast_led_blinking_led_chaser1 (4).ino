void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}
void loop()
{
digitalWrite(5,HIGH);
  
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(6,LOW);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  digitalWrite(5,LOW);
  
  
}
  
  
  