#include "RobotPart.h"
#include "Torso.h"

Torso::Torso(std::string name, int partNumber, double weight, double cost,
			  std::string description,  int kpartType, int kBatteryCompartments) :
RobotPart(name, partNumber, weight, cost, description, partType), BatteryCompartments(kBatteryCompartments) {};

int Torso::GetBatteryCompartmentSize() {return BatteryCompartments;};