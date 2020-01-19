
#include "menu5.h"
#include"rlutil.h"
#include<iostream>
#define waitkey rlutil::anykey("Press any key to continue...\n")
using namespace std;
menu5::menu5() {}
void menu5::rules(int h) {
	system("CLS");
	rlutil::setColor(rlutil::YELLOW);
	cout << "LEVEL 5, this is last level!" << endl;
	rlutil::setColor(rlutil::WHITE);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;
	cout << "These are your enemies: ";
	rlutil::setColor(rlutil::RED); cout << "$" << endl;
	rlutil::setColor(rlutil::WHITE);
	cout << "There are 15 torpedos this time!!" << endl;
	cout << "Try not to interact with them! You have " << h << " lives." << endl;
	cout << "But don't worry, you will encounter with extra lives on the way." << endl;
	cout << "They look like this: ";
	rlutil::setColor(rlutil::MAGENTA); cout << "o" << endl << endl << endl;
	rlutil::setColor(rlutil::BLUE); waitkey;
}
