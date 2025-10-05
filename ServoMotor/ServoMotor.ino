#include <Servo.h>
#define potPin A0

Servo motor;

int value;
int degree;

void setup() 
{
  motor.attach(9);
  Serial.begin(9600);
}

void loop() 
{
  value = analogRead(potPin);
  degree = map(value, 0, 1023, 0, 180);
  motor.write(degree);

  Serial.println(degree); // Display the degree in Serial Monitor.
}
