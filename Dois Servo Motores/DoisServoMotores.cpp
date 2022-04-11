#include "Servo.h"

Servo primeiroServo;
Servo SegundoServo;

int const pinDoSegundoPotencimeomet = 0;
int const pinDoPrimeiroPotencimeometro = 1;

int const primeiroPinMotor = 3;
int const segundoPinMotor = 5;

int valPotenciometro;
int valPotenciometro2;

void setup() {
	primeiroServo.attach(primeiroPinMotor);
	SegundoServo.attach(segundoPinMotor);
}

void loop() {
  valPotenciometro = analogRead(pinDoSegundoPotencimeomet);	
  valPotenciometro2 = analogRead(pinDoPrimeiroPotencimeometro);

  valPotenciometro = map(valPotenciometro, 0, 1023, 0, 180);
  valPotenciometro2 = map(valPotenciometro2, 0, 1023, 0, 180);

  primeiroServo.write(valPotenciometro);
  SegundoServo.write(valPotenciometro2);
  
  delay(15);
}