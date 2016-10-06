#include "RobotPart.h"
#include "Arm.h"
#include "PartType.h"

Arm::Arm(string name, int partNumber, double weight, double cost,
			 string description, double kPowerConsumeW, PartType partType) : PowerConsumeW(kPowerConsumeW),
			 RobotPart(name, partNumber, weight, cost, description, RobotPart::PartType::ARM) {};

double Arm::GetPowerConsumeW() {return PowerConsumeW};