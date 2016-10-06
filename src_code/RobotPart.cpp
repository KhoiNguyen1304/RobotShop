#include "RobotPart.h"
#include "PartType.h"

RobotPart::RobotPart(string kname, int kpartNumber, double kweight, double kcost,
					 string kdescription, PartType kpartType) : name(kname),
    partNumber(kpartNumber), weight(kweight), cost(kcost), description(kdescription), partType(kpartType) {};

string RobotPart::GetName() {return name;};

int RobotPart::GetPartNumber() {return partNumber;};

double RobotPart::GetWeight() {return weight;};

double RobotPart::GetCost() {return cost;};

string RobotPart::GetDescription() {return description;};

RobotPart::PartType RobotPart::GetPartType() {return partType;};

string RobotPart::GetPartTypeString() {
	string type;
	switch(GetPartType()) {
		case RobotPart::PartType::TORSO:
			type = "Torso";
			break;
		case RobotPart::PartType::HEAD:
			type = "Head";
			break;
		case RobotPart::PartType::ARM:
			type = "Arm";
			break;
		case RobotPart::PartType::LOCOMOTOR:
			type = "Locomotor";
			break;
		case RobotPart::PartType::BATTERY:
			type = "Battery";
			break;
	}
	return type;
}