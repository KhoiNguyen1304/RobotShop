#include "RobotPart.h"
#include "Torso.h"
#include "PartType"

Torso::Torso(string name, int partNumber, double weight, double cost,
			  string description, int kBatteryCompartments) : BatteryCompartments(kBatteryCompartments),
RobotPart(name, partNumber, weight, cost, description, RobotPart::PartType::TORSO) {};

int Torso::GetBatteryCompartmentSize() {return BatteryCompartments};