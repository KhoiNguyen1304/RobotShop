#ifndef __BATTERY_H
#define __BATTERY_H 2016

#include "RobotPart.h"
#include "PartType.h"

class Battery: public RobotPart {
	public:
		Battery(string name, int partNumber, double weight, double cost,
			 string description, double kilowattHours, PartType partType);
		double GetKilowattHours();
		
	private:
		double KilowattHours;
};
#endif