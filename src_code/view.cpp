#include "view.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include "controller.h"

using namespace std;

void View::displayMenu() {
		cout << "Main Menu" << endl;
		cout << "*********" << endl;
		cout << "1. Create" << endl;
		cout << "4. Quit" << endl;
		cout << "\nEnter the number of option of your choice: ";
}

