#ifndef __TORSO_H
#define __TORSO_H 2016

#include "RobotPart.h"

class Torso: public RobotPart {
	public:
		Torso(string name, int partNumber, double weight, double cost,
			  string description, int kBatteryCompartments, PartType partType);
		int GetBatteryCompartmentSize();
	private:
		int BatteryCompartments;

}
#endif