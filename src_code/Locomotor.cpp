#include "RobotPart.h"
#include "Locomotor.h"
#include "PartType.h"

Locomotor::Locomotor(string name, int partNumber, double weight, double cost,
			 string description, double kPowerConsumeW, double kMaxSpeed, PartType partType) :
			 PowerConsumeW(kPowerConsumeW), MaxSpeed(kMaxSpeed),
			 RobotPart(name, partNumber, weight, cost, description, RobotPart::PartType::LOCOMOTOR) {};

double Locomotor::GetMaxSPeed() {return MaxSpeed;};

double Locomotor::GetPowerConsumeW() {return PowerConsumeW;};			 