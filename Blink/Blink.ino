#define led 13

void setup() 
{
  pinMode(led, OUTPUT);
}

void loop() 
{
  digitalWrite(led, HIGH);
  delay(150);
  digitalWrite(led, LOW);
  delay(150);
}
