#ifndef HCSR04Sonar_h
#define HCSR04Sonar_h

#include "Arduino.h"

class HCSR04Sonar {
  private:
    uint8_t echoPin;
    uint8_t trigPin;
    void init(void);
  public:
   // Конструктор
   HCSR04Sonar(uint8_t echo, uint8_t trig);
	
};

#endif