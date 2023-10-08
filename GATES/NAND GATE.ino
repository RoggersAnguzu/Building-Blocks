// C++ code
//
void setup()
{
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int x = digitalRead(2);
  int y = digitalRead(4);
  if((x==HIGH)&&(y==HIGH))
  {
    digitalWrite(7,LOW);
  }
  else
  {
    digitalWrite(7,HIGH);
  }
}