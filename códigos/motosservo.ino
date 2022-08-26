#include <Servo.h>
​
Servo servo;
​
void setup() 
{
  servo.attach(2);

}

void loop()
{
  int angulo = analogRead(0);

  angulo = map (angulo,0,1023,0,180);

   servo.write(angulo);

  delay(15);

}
