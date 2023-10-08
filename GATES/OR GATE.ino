// C++ code
//
void setup()
{
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  int x = digitalRead(2);
  int y = digitalRead(4);
  if((x==LOW)||(y==LOW))
  {
    Serial.print(x=LOW);
    Serial.print(y=LOW);
  }
  else
  {
    Serial.println(x);
    Serial.println(y);
    digitalWrite(6,x||y);
  }
}