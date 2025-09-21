#define Button 10
#define Led 8

int button_state = 0;

void setup()
{
  pinMode(Button, INPUT_PULLUP);
  pinMode(Led, OUTPUT);
}

void loop()
{
  button_state = digitalRead(Button);
  if (button_state == 0)
  {
    digitalWrite(Led, HIGH);
  }
  else
  {
    digitalWrite(Led, LOW);
  }
}
