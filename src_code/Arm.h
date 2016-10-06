#ifndef __ARM_H
#define __ARM_H 2016

#include "RobotPart.h"
#include "PartType.h"

class Arm: public RobotPart {
	public:
		Arm(string name, int partNumber, double weight, double cost,
			 string description, double kPowerConsumeW, PartType partType);
		double GetPowerConsumeW();
	private:
		double PowerConsumeW;
};
#endif