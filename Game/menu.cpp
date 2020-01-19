
#include"menu.h"
#include"rlutil.h"
#include<iostream>
#define waitkey rlutil::anykey("Press any key to continue...\n")
using namespace std;
menu::menu() {}
void menu::rules(int a) {
	rlutil::setColor(rlutil::WHITE);
	cout << endl<<"Welcome to our mini game!" << endl;
	cout << "Let us quickly tell you how you play:" << endl;
	rlutil::setColor(rlutil::WHITE);
	cout << "This is our hero: ";
	rlutil::setColor(rlutil::YELLOW); cout <<"@" << endl;
	rlutil::setColor(rlutil::WHITE);
	cout << "Your mission is to get him across the road (using W,A,S,D), so that he can reach the castle." << endl;
	cout << "These are your enemies: ";
	rlutil::setColor(rlutil::RED); cout << "#" << endl;
	rlutil::setColor(rlutil::WHITE);
	cout << "WARNING!!" << endl;
	cout << "There are torpedos on your way!! You can't see them, but if you step on them, it will cause 1 health drop." << endl;
	rlutil::setColor(rlutil::LIGHTRED);
	cout << "DON'T STEP ON ENEMY LOCATION AGAIN!"<<endl;
	rlutil::setColor(rlutil::WHITE);
	cout << "More than one torpidos can appear in one place." << endl;
	cout << "Try not to interact with them! You have 3 lives." << endl;
	cout << "But don't worry, you will encounter with extra lives on the way."<<endl;
	cout << "They look like this: ";
	rlutil::setColor(rlutil::MAGENTA); cout << "o" << endl;
	rlutil::setColor(rlutil::WHITE);
	cout << "You need to clear all 5 levels in order to win, good luck!" << endl<<endl;
	waitkey;
}
