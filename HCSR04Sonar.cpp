// �����������
#include "HCSR04Sonar.h"
// �����������
HCSR04Sonar::HCSR04Sonar(uint8_t echo, uint8_t trig) {
 echoPin = echo;
 trigPin = trig; 
 init();
}

void HCSR04Sonar::init(void) {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
}
