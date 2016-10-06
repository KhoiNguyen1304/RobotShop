#include "RobotPart.h"
#include "Battery.h"
#include "PartType.h"

Battery::Battery(string name, int partNumber, double weight, double cost,
			 string description, double kilowattHours, PartType partType) :
			 KilowattHours(kilowattHours),
			 RobotPart(name, partNumber, weight, cost, description, RobotPart::PartType::BATTERY) {};

double Battery::GetKilowattHours() {return KilowattHours;};