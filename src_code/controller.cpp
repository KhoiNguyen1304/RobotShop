#include "controller.h"
#include "RobotPart.h"
#include "RobotModel.h"
#include "TrackingParts.h"
#include "Torso.h"
#include "view.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

void displayCreateMenu() {

	cout << "\n\nCreate" << endl;
	cout << "******" << endl;
	cout << "1. Order" << endl;
	cout << "2. Customer" << endl;
	cout << "3. Sales Associate" << endl;
	cout << "4. Robot Model" << endl;
	cout << "5. Robot Component" << endl;
	cout << "6. Back to Main Menu" << endl;
	cout << "Enter the number of option of your choice: ";
}

void displayParts_createOp() {

	cout << "\n\n1. Create torso" << endl;
	cout << "2. Create head" << endl;
	cout << "3. Create arm" << endl;
	cout << "4. Create locomotor" << endl;
	cout << "5. Create battery" << endl;
	cout << "6. Back to Main Menu" << endl;
	cout << "Enter the number of option of your choice: ";
}

Torso createTorso() {
	std::string oname;
	int opartNumber;
	double oweight;
	double ocost;
	std::string odescription;
	int opartType;
	int oBatteryCompartments;

	cout << "\n\nName the torso: ";
	getline(cin, oname);

	cout << "Torso's part number: ";
	cin >> opartNumber;
	cin.ignore();

	cout << "Torso's weight: ";
	cin >> oweight;
	cin.ignore();

	cout << "Torso's cost: ";
	cin >> ocost;
	cin.ignore();

	cout << "Enter Part Type (0): ";
	cin >> opartType;
	cin.ignore();

	cout << "Number(s) of battery compartments (Max = 3): ";
	cin >> oBatteryCompartments;
	cin.ignore();

	cout << "Torso's description: ";
	getline(cin, odescription);

	return Torso(oname, opartNumber, oweight, ocost, odescription, opartType, oBatteryCompartments);
}

Head createHead() {
	std::string oname;
	int opartNumber;
	double oweight;
	double ocost;
	std::string odescription;
	int opartType;

	cout << "\n\nName the head: ";
	getline(cin, oname);

	cout << "Head's part number: ";
	cin >> opartNumber;
	cin.ignore();

	cout << "Head's weight: ";
	cin >> oweight;
	cin.ignore();

	cout << "Head's cost: ";
	cin >> ocost;
	cin.ignore();

	cout << "Enter Part Type (1): ";
	cin >> opartType;
	cin.ignore();

	cout << "Head's description: ";
	getline(cin, odescription);

	return Head(oname, opartNumber, oweight, ocost, odescription, opartType);
}

Arm createArm() {
	std::string oname;
	int opartNumber;
	double oweight;
	double ocost;
	std::string odescription;
	int opartType;
	double oPowerConsumeW;

	cout << "\n\nName the arm: ";
	getline(cin, oname);

	cout << "Arm's part number: ";
	cin >> opartNumber;
	cin.ignore();

	cout << "Arm's weight: ";
	cin >> oweight;
	cin.ignore();

	cout << "Arm's cost: ";
	cin >> ocost;
	cin.ignore();

	cout << "Enter Part Type (2): ";
	cin >> opartType;
	cin.ignore();

	cout << "Enter Power Consume in Watts: ";
	cin >> oPowerConsumeW;
	cin.ignore();

	cout << "Arm's description: ";
	getline(cin, odescription);

	return Arm(oname, opartNumber, oweight, ocost, odescription, opartType, oPowerConsumeW);
}

Locomotor createLocomotor() {
	std::string oname;
	int opartNumber;
	double oweight;
	double ocost;
	std::string odescription;
	int opartType;
	double oPowerConsumeW;
	double oMaxSpeed;

	cout << "\n\nName the locomotor: ";
	getline(cin, oname);

	cout << "Locomotor's part number: ";
	cin >> opartNumber;
	cin.ignore();

	cout << "Locomotor's weight: ";
	cin >> oweight;
	cin.ignore();

	cout << "Locomotor's cost: ";
	cin >> ocost;
	cin.ignore();

	cout << "Enter Part Type (3): ";
	cin >> opartType;
	cin.ignore();

	cout << "Enter Power Consume in Watts: ";
	cin >> oPowerConsumeW;
	cin.ignore();

	cout << "Enter Max Speed: ";
	cin >> oMaxSpeed;
	cin.ignore();

	cout << "Locomotor's description: ";
	getline(cin, odescription);

	return Locomotor(oname, opartNumber, oweight, ocost, odescription, opartType, oPowerConsumeW, oMaxSpeed);
}

Battery createBattery() {
	std::string oname;
	int opartNumber;
	double oweight;
	double ocost;
	std::string odescription;
	int opartType;
	double oKilowattHours;

	cout << "\n\nName the battery: ";
	getline(cin, oname);

	cout << "Battery's part number: ";
	cin >> opartNumber;
	cin.ignore();

	cout << "Battery's weight: ";
	cin >> oweight;
	cin.ignore();

	cout << "Battery's cost: ";
	cin >> ocost;
	cin.ignore();

	cout << "Enter Part Type (4): ";
	cin >> opartType;
	cin.ignore();

	cout << "Enter KiloWatts per hour: ";
	cin >> oKilowattHours;
	cin.ignore();

	cout << "Battery's description: ";
	getline(cin, odescription);

	return Battery(oname, opartNumber, oweight, ocost, odescription, opartType, oKilowattHours);
}

RobotModel createModel() {
	std::string oname;
	int omodelNumber;
	double oprice;

	cout << "Name your robot model: " << endl;
	getline(cin, oname);

	cout << "Enter your robot model number: " << endl;
	cin >> omodelNumber;
	cin.ignore();

	cout << "Enter your robot model price: " << endl;
	cin >> oprice;
	cin.ignore();

	return RobotModel(oname, omodelNumber, oprice);
}

TrackingParts TrackParts() {

	std::string kTorsoName;
	std::string kHeadName;
	std::string kArmName;
	std::string kLocomotorName;
	std::string kBatteryName;

	cout << "Enter the name of a torso of your choice: ";
	getline(cin, kTorsoName);

	cout << "Enter the name of a head of your choice: ";
	getline(cin, kHeadName);

	cout << "Enter the name of an arm (will automatically add the other arm, 2 arms total) of your choice: ";
	getline(cin, kArmName);

	cout << "Enter the name of a locomotor of you choice: ";
	getline(cin, kLocomotorName);

	cout << "Enter the name of a battery (will automatically add the number of batteries propotionally with torso's battery compartments) of your choice: ";
	getline(cin, kBatteryName);

	return TrackingParts(kTorsoName, kHeadName, kArmName, kLocomotorName, kBatteryName);
}

void displayModel_createOp() {

	cout << "Let's create robot model!" << endl;
	cout << "-------------------------" << endl;

}

void displayReportMenu() {

	cout << "1. Orders" << endl;
	cout << "2. Customers" << endl;
	cout << "3. Sales Associates" << endl;
	cout << "4. Robot Models" << endl;
	cout << "5. Robot Parts" << endl;
	cout << "6. Back to Main Menu" << endl;
	cout << "Enter the number of option of your choice: ";
}

int main () {

	vector<RobotModel> rbmodel;
	vector<TrackingParts> tp;

	vector<Torso> torso;
	vector<Head> head;
	vector<Arm>	arm;
	vector<Locomotor> loco;
	vector<Battery> batt;

	while(true) {

		displayMenu();	
		int choice;
		cin >> choice;
		cin.ignore();

		switch(choice) {
			case 1: displayCreateMenu();
					int Cchoice;
				    cin >> Cchoice;
					cin.ignore();
					switch(Cchoice) {
						case 1: 
						case 2:
						case 3:
						case 4: displayModel_createOp();
								rbmodel.push_back(createModel());
								cout << "Choose robot parts from the list to complete creating your robot model" << endl;
								cout << "----------------------------------------------------------------------" << endl;
								list_robotparts(torso, head, arm, loco, batt);
								tp.push_back(TrackParts());
								break;
						case 5: int terminate = 1;
								while(terminate != 0) {
									displayParts_createOp();
									int COchoice;
					    			cin >> COchoice;
									cin.ignore();

									switch(COchoice) {
										case 1: torso.push_back(createTorso());
												break;
										case 2: head.push_back(createHead());
												break;
										case 3: arm.push_back(createArm());
												break;
										case 4: loco.push_back(createLocomotor());
												break;
										case 5: batt.push_back(createBattery());
												break;
										case 6: terminate = 0;
												break;
									}
								}
								break;	
					}
					break;
			case 2: displayReportMenu();
				    int Rchoice;
				    cin >> Rchoice;
					cin.ignore();
					switch(Rchoice) {
						case 4: list_models(rbmodel, tp, torso, head, arm, loco, batt);
								break;
						case 5: list_robotparts(torso, head, arm, loco, batt);
								break;
					}
					break;
			case 4: exit(0);
					break;

		}
		cout << endl << endl;
	}
	return 0;
}