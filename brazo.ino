#include <Servo.h>
Servo servoMotor1;
Servo servoMotor2;
Servo servoMotor3;
Servo servoMotor4;

int i=0;
int angulo1=90,angulo2=90,angulo3=90,angulo4=90;

void setup()
{
  Serial.begin(9600);
  servoMotor1.attach(9);
  servoMotor2.attach(10);
  servoMotor3.attach(11);
  servoMotor4.attach(12);
}
 
void loop()
{

  
  if(Serial.available()>0) 
  {
    char dato=Serial.read(); 
    Serial.println(dato);
    
     if(dato=='A'){
        servoMotor1.write(angulo1);
        angulo1+=5;
     }
     else if(dato=='D'){
        servoMotor1.write(angulo1);
        angulo1-=5;
     }
          else if(dato=='Z'){
      servoMotor2.write(angulo2);
     angulo2+=5;
     }
     else if(dato=='X'){
      servoMotor2.write(angulo2);
      angulo2-=5;
     }
    else if(dato=='W'){
        servoMotor3.write(angulo3);
        angulo3+=5;
     }
     else if(dato=='S'){
        servoMotor3.write(angulo3);
        angulo3-=5;
     }
     else if(dato=='L'){
        servoMotor4.write(angulo4);
        angulo4+=5;
     }
     else if(dato=='R'){
        servoMotor4.write(angulo4);
        angulo4-=5;
     }

  }
}
     
    
  
