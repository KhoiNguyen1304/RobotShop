#ifndef __HEAD_H
#define __HEAD_H 2016

#include "RobotPart.h"
#include "PartType.h"

class Head: public RobotPart {
	public:
		Head(string name, int partNumber, double weight, double cost,
			 string description, PartType partType);
};

#endif