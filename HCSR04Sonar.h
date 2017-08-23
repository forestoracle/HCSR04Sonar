/*
  Manage ultrasound module HCSR04 
*/
#ifndef HCSR04Sonar_h
#define HCSR04Sonar_h

#include "Arduino.h"

class HCSR04Sonar {
	private:
	uint8_t echoPin;  // Echo pin
	uint8_t trigPin;  // Trigger pin
	void init(void);
	public:
	// Constructor
	HCSR04Sonar(uint8_t echo, uint8_t trig);
	
};

#endif
