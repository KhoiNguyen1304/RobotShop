#include <string>
#include <iostream>
#include <vector>
#include "view.h"

using namespace std;

void displayMenu() {
	cout << "Main Menu" << endl;
	cout << "*********" << endl;
	cout << "1. Create" << endl;
	cout << "2. Report" << endl;
	cout << "4. Quit" << endl;
	cout << "\nEnter the number of option of your choice: ";
}


void list_robotparts(vector<Torso> torso, vector<Head> head, vector<Arm> arm, vector<Locomotor> loco, vector<Battery> batt) {

	cout << "\nRobot Parts List" << endl;
	cout << "****************" << endl;

	cout << "\nTorsos List" << endl;
	cout << "***********" << endl;
	for(std::size_t i = 0; i < torso.size(); i++)
    	cout << torso[i].GetName() << " - " << torso[i].GetPartNumber() << " - " << torso[i].GetWeight()
	     << " - " << torso[i].GetCost() << " - " << torso[i].GetDescription() << " - " << torso[i].GetBatteryCompartmentSize()
	     << " - " << torso[i].PartType_toString() << endl;

	cout << "\nHeads List" << endl;
	cout << "**********" << endl;

	for(std::size_t i = 0; i < head.size(); i++)
    	cout << head[i].GetName() << " - " << head[i].GetPartNumber() << " - " << head[i].GetWeight()
	     << " - " << head[i].GetCost() << " - " << head[i].GetDescription() << " - " << head[i].PartType_toString() << endl;

	cout << "\nArm List" << endl;
	cout << "********" << endl;
	    
	for(std::size_t i = 0; i < arm.size(); i++)
    	cout << arm[i].GetName() << " - " << arm[i].GetPartNumber() << " - " << arm[i].GetWeight()
	    << " - " << arm[i].GetCost() << " - " << arm[i].GetDescription() << " - " << arm[i].GetPowerConsumeW()
	    << " - " << arm[i].PartType_toString() << endl;

	cout << "\nLocomotor List" << endl;
	cout << "**************" << endl;

	for(std::size_t i = 0; i < loco.size(); i++)
    	cout << loco[i].GetName() << " - " << loco[i].GetPartNumber() << " - " << loco[i].GetWeight()
	    << " - " << loco[i].GetCost() << " - " << loco[i].GetDescription() << " - " << loco[i].GetPowerConsumeW()
	    << " - " << loco[i].GetMaxSpeed() << " - " << loco[i].PartType_toString() << endl;

	 cout << "\nBattery List" << endl;
	 cout << "************" << endl;

	 for(std::size_t i = 0; i < batt.size(); i++)
    	cout << batt[i].GetName() << " - " << batt[i].GetPartNumber() << " - " << batt[i].GetWeight()
	     << " - " << batt[i].GetCost() << " - " << batt[i].GetDescription() << " - "
	     << batt[i].GetKilowattHours() << " - " << batt[i].PartType_toString() << endl;




}

 void list_models(vector<RobotModel> rbmodel, vector<TrackingParts> tp, vector<Torso> torso, vector<Head> head, vector<Arm> arm, vector<Locomotor> loco, vector<Battery> batt) {
 	std::string modelName;

 	cout << "Robot Models List!!" << endl;
 	cout << "-------------------" << endl;

 	for(std::size_t i = 0; i < rbmodel.size(); i++)
 		cout << rbmodel[i].GetName() << " - " << rbmodel[i].GetModelNumber() << " - " << rbmodel[i].GetPrice() << endl;

 	cout << "Enter the name of the Robot Model to see their parts: ";
 	getline(cin, modelName);

 	for(std::size_t i = 0; i < rbmodel.size(); i++) {
 		if(rbmodel[i].GetName() ==  modelName)
 		{
 			int TrackNumber = i;
 			cout << "Here are the parts included in this Robot Model!" << endl;
 			cout << "------------------------------------------------" << endl;
 			
 			for(std::size_t i = 0; i < torso.size(); i++)
 				if(torso[i].GetName() == tp[TrackNumber].GetTorsoName())
    				cout << torso[i].GetName() << " - " << torso[i].GetPartNumber() << " - " << torso[i].GetWeight()
	     			<< " - " << torso[i].GetCost() << " - " << torso[i].GetDescription() << " - " << torso[i].GetBatteryCompartmentSize()
	    			<< " - " << torso[i].PartType_toString() << endl;

	    	for(std::size_t i = 0; i < head.size(); i++)
	    		if(head[i].GetName() == tp[TrackNumber].GetHeadName())
    				cout << head[i].GetName() << " - " << head[i].GetPartNumber() << " - " << head[i].GetWeight()
	     			<< " - " << head[i].GetCost() << " - " << head[i].GetDescription() << " - " << head[i].PartType_toString() << endl;

	     	for(std::size_t i = 0; i < arm.size(); i++)
	     		if(arm[i].GetName() == tp[TrackNumber].GetArmName())
    				cout << arm[i].GetName() << " - " << arm[i].GetPartNumber() << " - " << arm[i].GetWeight()
	    			<< " - " << arm[i].GetCost() << " - " << arm[i].GetDescription() << " - " << arm[i].GetPowerConsumeW()
	    			<< " - " << arm[i].PartType_toString() << endl;

	    	for(std::size_t i = 0; i < loco.size(); i++)
	    		if(loco[i].GetName() == tp[TrackNumber].GetLocomotorName())
    				cout << loco[i].GetName() << " - " << loco[i].GetPartNumber() << " - " << loco[i].GetWeight()
	    			<< " - " << loco[i].GetCost() << " - " << loco[i].GetDescription() << " - " << loco[i].GetPowerConsumeW()
	    			<< " - " << loco[i].GetMaxSpeed() << " - " << loco[i].PartType_toString() << endl;
			
			for(std::size_t i = 0; i < batt.size(); i++)
				if(batt[i].GetName() == tp[TrackNumber].GetBatteryName())
	    			cout << batt[i].GetName() << " - " << batt[i].GetPartNumber() << " - " << batt[i].GetWeight()
	     			<< " - " << batt[i].GetCost() << " - " << batt[i].GetDescription() << " - "
	     			<< batt[i].GetKilowattHours() << " - " << batt[i].PartType_toString() << endl;

	    	break;
 		}
 		else
 		{
 			cout << "Robot Model's name either doesn't exist or you type in the wrong name" << endl;
 			break;
 		}
 	}
 }

void list_cus(vector<Customer> cus) {
	cout <<"\nCustomers List" << endl;
	cout << "--------------" << endl << endl;

	for(std::size_t i = 0; i < cus.size(); i++)
		cout << "Customer's name: " << cus[i].GetName() << " - Customer's phone number: " << cus[i].GetCusNumber()
		<< " - Customer's Wallet: " << cus[i].GetWallet() << endl;
}

void list_orders(vector<RobotOrder> order) {
	cout << "\n\nOrders List" << endl;
	cout << "-------------" << endl << endl;

	for(std::size_t i = 0; i < order.size(); i++)
		cout << "Order #: " << order[i].GetOrderNumber() << " - Date: " << order[i].GetDate()
	    << " - Total Price: " << order[i].GetTotalPrice() << endl;
}