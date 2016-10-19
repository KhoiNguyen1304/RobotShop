#include "Torso.h"
#include <iostream>

using namespace std;

Torso::Torso(std::string kname, int kpartNumber, double kweight, double kcost,
			  std::string kdescription, int kpartType, int kBatteryCompartments) :
RobotPart(kname, kpartNumber, kweight, kcost, kdescription, kpartType), BatteryCompartments(kBatteryCompartments) {}

int Torso::GetBatteryCompartmentSize() {return BatteryCompartments;}