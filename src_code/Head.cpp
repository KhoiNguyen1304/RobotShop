#include "Head.h"
#include "RobotPart"
#include "PartType"

Head::Head(string name, int partNumber, double weight, double cost,
			 string description, PartType partType) :
	RobotPart(name, partNumber, weight, cost, description, RobotPart::PartType::HEAD) {};
