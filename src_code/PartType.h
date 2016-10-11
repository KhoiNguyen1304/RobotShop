#ifndef __PARTTYPE_H
#define __PARTTYPE_H 2016

#include <string>
#include "RobotPart.h"

class PartType {
	public:
		PartType (int val) : value(val) { }

		static const int TORSO = 0;
		static const int HEAD = 1;
		static const int ARM = 2;
		static const int LOCOMOTOR = 3;
		static const int BATTERY = 4;

		int getPartType() { return value;};

		std::string toString() {
			switch(getPartType()) {
				case(TORSO) : return "Torso";
				case(HEAD) : return "Head";
				case(ARM) : return "Arm";
				case(LOCOMOTOR) : return "Locomotor";
				case(BATTERY) : return "Battery";
			}
		}
	private:
		int value;
};
#endif