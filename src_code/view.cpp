#include "view.h"
#include <string>
#include <iostream>
#include "Torso.h"
#include <vector>

using namespace std;

void displayMenu() {
	int choice;

	cout << "Main Menu" << endl;
	cout << "*********" << endl;
	cout << "1. Create" << endl;

	cout << "\nEnter the number of option of your choice: ";
	cin >> choice;
	cin.ignore();

	switch(choice) {
		case 1: displayCreateMenu();
				break;
	}
}

void displayParts_create() {
	int choice;

	cout << "1. Create torso" << endl;
	cout << "2. Create head" << endl;
	cout << "3. Create arm" << endl;
	cout << "4. Create locomotor" << endl;
	cout << "5. Create battery" << endl;
	cout << "6. Back to Robot Component" << endl;
	cout << "7. Back to Main Menu" << endl;
	cin >> choice;
	cin.ignore();

	switch(choice) {
		case 1: torso.push_back(Torso::Torso::createTorso());
				break;
	}
}

void displayCreateMenu() {
	int choice;

	cout << "Create" << endl;
	cout << "******" << endl;
	cout << "1. Order" << endl;
	cout << "2. Customer" << endl;
	cout << "3. Sales Associate" << endl;
	cout << "4. Robot Model" << endl;
	cout << "5. Robot Component" << endl;
	cout << "6. Back to Main Menu" << endl;
	cout << "Enter the number of option of your choice: ";
	cin >> choice;
	cin.ignore();

	switch(choice) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5: displayParts_create();
				break;
		case 6: cout << "\n\n";
				displayMenu();
				break;
	}

}

