#define ledPin 9
#define potPin A0

void setup() 
{
}

void loop() 
{
  // read the value from the potentiometer.
  int potValue = analogRead(potPin);

  // map the value to PWM pin read. (PWM pins max value is 255)
  int brightness = map(potValue, 0, 1023, 0, 255);

  // write the mapped value to the LED.
  analogWrite(ledPin, brightness);
}