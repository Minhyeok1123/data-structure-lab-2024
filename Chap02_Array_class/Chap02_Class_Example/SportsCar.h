#pragma once
#include "Car. h"

class SportsCar : public Car
{
public :
	bool bTurbo;
	void setTurbo(bool btur) { bturbo = bTur; }
	void setTurbo() {
		if (bTurbo) speed += 20;
		else Car::speedUp();
	}
};