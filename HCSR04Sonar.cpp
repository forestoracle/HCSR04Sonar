// Конструктор
#include "HCSR04Sonar.h"
// Конструктор
HCSR04Sonar::HCSR04Sonar(uint8_t echo, uint8_t trig) {
 echoPin = echo;
 trigPin = trig; 
 init();
}

void HCSR04Sonar::init(void) {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
}
