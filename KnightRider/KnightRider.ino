int leds[] = {3, 4, 5, 6, 7};

// total size of the array in bytes
int totalBytes = sizeof(leds);

// size of one element in bytes
int oneElement = sizeof(leds[0]);

// number of elements
int length = totalBytes / oneElement;

void setup() 
{
  for (int i = 0; i < length; i++) 
  {
    pinMode(leds[i], OUTPUT); 
  }
}

void loop() 
{
  for (int i = 0; i < length; i++) 
  {
    digitalWrite(leds[i], HIGH);
    delay(80);
    digitalWrite(leds[i], LOW);
  }

  for (int j = length - 1; j > -1; j--) 
  {
    digitalWrite(leds[j], HIGH);
    delay(80);
    digitalWrite(leds[j], LOW);
  }
}
