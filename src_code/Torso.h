#ifndef __TORSO_H
#define __TORSO_H 2016

#include "RobotPart.h"

class Torso: public RobotPart {
	public:
		Torso(std::string name, int partNumber, double weight, double cost,
			  std::string description, int partType, int kBatteryCompartments);
		int GetBatteryCompartmentSize();
		static Torso createTorso();
	private:
		int BatteryCompartments;

};
#endif