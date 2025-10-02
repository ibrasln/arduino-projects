int leds[] = {2, 3, 4, 5, 6, 7};
int numLeds = sizeof(leds) / sizeof(leds[0]);

void setup() 
{
  for (int i = 0; i < numLeds; i++) 
  {
    pinMode(leds[i], OUTPUT);
  }

  randomSeed(analogRead(0));
}

void loop() 
{
  // ***** ANIMATION *****
  int durationMs = 150;
  while (durationMs >= 0)
  {
    for (int i = 0; i < numLeds; i++) 
    {
      digitalWrite(leds[i], HIGH);
      delay(durationMs);
      digitalWrite(leds[i], LOW);  
    }
    durationMs -= 25;
  }

  // ***** DICE *****
  int number = random(1, 7); 
  digitalWrite(leds[number - 1], HIGH);
  delay(1500);
  digitalWrite(leds[number - 1], LOW);
  delay(1000);
}
