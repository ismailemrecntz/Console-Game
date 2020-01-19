
#include"enemy.h"
#include"rlutil.h"
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace rlutil;
enemy::enemy() {
	int k;
	rlutil::setColor(rlutil::RED);
	locationOfEnemyX = new int[15];
	locationOfEnemyY = new int[15];
	for (k = 0; k < 15; k++) {
		locationOfEnemyX[k] = rand() % 28 + 2;
		locationOfEnemyY[k] = rand() % (20 - 13) + 13;
	}
}
enemy::~enemy() {
	delete[] locationOfEnemyX;
	delete[] locationOfEnemyY;
}
void enemy::appear(int a) {
	if (a == 0) {
		if (locationOfEnemyX != NULL)
			delete[] locationOfEnemyX;

		if (locationOfEnemyY != NULL)
			delete[] locationOfEnemyY;

		locationOfEnemyX = new int[25];
		locationOfEnemyY = new int[25];
		for (int k = 0; k < 25; k++) {
			locationOfEnemyX[k] = rand() % 28 + 2;
			locationOfEnemyY[k] = rand() % (20 - 12) + 12;
		}
	}
	if (a == 1) {
		if (locationOfEnemyX != NULL)
			delete[] locationOfEnemyX;

		if (locationOfEnemyY != NULL)
			delete[] locationOfEnemyY;

		locationOfEnemyX = new int[35];
		locationOfEnemyY = new int[35];
		for (int k = 0; k < 35; k++) {
			locationOfEnemyX[k] = rand() % 28 + 2;
			locationOfEnemyY[k] = rand() % (20 - 12) + 12;
		}
	}
	if (a == 2) {
		if (locationOfEnemyX != NULL)
			delete[] locationOfEnemyX;

		if (locationOfEnemyY != NULL)
			delete[] locationOfEnemyY;

		locationOfEnemyX = new int[45];
		locationOfEnemyY = new int[45];
		for (int k = 0; k < 45; k++) {
			locationOfEnemyX[k] = rand() % 28 + 2;
			locationOfEnemyY[k] = rand() % (20 - 12) + 12;
		}
	}
	if (a == 3) {
		if (locationOfEnemyX != NULL)
			delete[] locationOfEnemyX;

		if (locationOfEnemyY != NULL)
			delete[] locationOfEnemyY;

		locationOfEnemyX = new int[50];
		locationOfEnemyY = new int[50];
		for (int k = 0; k < 50; k++) {
			locationOfEnemyX[k] = rand() % 28 + 2;
			locationOfEnemyY[k] = rand() % (20 - 12) + 12;
		}
	}
}
