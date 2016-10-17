#include "Torso.h"
#include <iostream>

using namespace std;

Torso::Torso(std::string kname, int kpartNumber, double kweight, double kcost,
			  std::string kdescription, int kpartType, int kBatteryCompartments) :

RobotPart(kname, kpartNumber, kweight, kcost, kdescription, kpartType), BatteryCompartments(kBatteryCompartments) {}

int Torso::GetBatteryCompartmentSize() {return BatteryCompartments;};

Torso createTorso() {
	std::string oname;
	int opartNumber;
	double oweight;
	double ocost;
	std::string odescription;
	int opartType;
	int oBatteryCompartments;

	cout << "Name the torso: " << endl;
	getline(cin, oname);

	cout << "Torso's part number: " << endl;
	cin >> opartNumber;

	cout << "Torso's weight: " << endl;
	cin >> oweight;

	cout << "Torso's cost: " << endl;
	cin >> ocost;

	cout << "Torso's description: " << endl;
	getline(cin, odescription);

	cout << "Enter Part Type (0): " << endl;
	cin >> opartType;

	cout << "Number(s) of battery compartments (Max = 3): " << endl;
	cin >> oBatteryCompartments;

	return Torso(oname, opartNumber, oweight, ocost, odescription, opartType, oBatteryCompartments);
}