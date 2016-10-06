#ifndef __LOCOMOTOR_H
#define __LOCOMOTOR_H 2016

#include "RobotPart.h"
#include "PartType.h"

class Locomotor: public RobotPart {
	public:
		Locomotor(string name, int partNumber, double weight, double cost,
			 string description, double kPowerConsumeW, double kMaxSpeed, PartType partType);
		double GetMaxSpeed();
		double GetPowerConsumeW();

	private:
		double MaxSpeed;
		double PowerConsumeW;
};
#endif