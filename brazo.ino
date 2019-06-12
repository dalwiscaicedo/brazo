#include <Servo.h>
#define pinBase 12
#define pinDer 11
#define pinIzq 10
#define pinMano 9

Servo motorBase;
Servo motorDer;
Servo motorIzq;
Servo motorMano;

void setup() {

  motorBase.attach(pinBase);
  motorBase.write (0);
  delay (1000);
  motorBase.write (180);
  delay (1000);
  motorBase.write (90);
  delay (1000);
  
  motorDer.attach(pinDer);
  motorDer.write(0);
  delay (1000);
  motorDer.write(130);
  delay (1000);
  motorDer.write(90);
  delay (1000);
  
  motorIzq.attach(pinIzq);
  motorIzq.write(0);
  delay (1000);
  motorIzq.write(180);
  delay (1000);
  motorIzq.write(90);
  delay (1000);

  motorMano.attach(pinMano);
  motorMano.write(0);
  delay (1000);
  motorMano.write(180);
  delay (1000);
  motorMano.write(90);
  delay (1000);

  

}


void loop() {
  // put your main code here, to run repeatedly:

}
