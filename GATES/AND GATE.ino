// C++ code
//

void setup()
{
  pinMode(9,OUTPUT);
  pinMode(4,INPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int x = digitalRead(4);
  int y = digitalRead(3);
  if((x==HIGH) && (y==HIGH))
  {
      Serial.println(x);
      Serial.println(y);
      digitalWrite(9,x&&y);
  }
  else
  {
    Serial.println(x=LOW);
    Serial.println(y=LOW);
  }
  
}