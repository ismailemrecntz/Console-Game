
#include "map4.h"
#include"hero.h"
#include "rlutil.h"
#define MAP_WIDTH 30
#define MAP_LENGTH 9
using namespace rlutil;
map4::map4() {}

map4::~map4() {
	delete[] bossX;
	delete[] bossY;
}
int map4::mapDraw(int* x, int* y, int *c, int *d) {
	system("CLS");
	hero character;
	int k, a = 1, b = 17, l, flag = 0, enemy=45;
	int torpedo = 13;
	bossX = new int[13];
	bossY = new int[13];
	for (k = 0; k < 13; k++) {
		//to make sure invisibles aren't in the same place
		bossX[k] = rand() % 28 + 2;
		bossY[k] = rand() % (20 - 13) + 13;
		for (int m = 0; m < 45; m++) {
			if ((bossX[k] == x[m] && bossY[k] == y[m]) || (bossX[k] == c[0] && bossY[k] == d[0]) || (bossX[k] == c[1] && bossY[k] == d[1])) {
				bossX[k] = rand() % 28 + 2;
				bossY[k] = rand() % (20 - 13) + 13;
			}
		}
	}
	std::cout << std::endl;
	rlutil::setColor(rlutil::GREY);
	for (k = 0; k < MAP_LENGTH; k++)
		std::cout << std::endl;
	for (k = 0; k < MAP_WIDTH; k++)
		std::cout << "O";
	for (k = 0; k < MAP_LENGTH; k++)
		std::cout << std::endl;
	for (k = 0; k < MAP_WIDTH; k++)
		std::cout << "O";
	setColor(RED);
	locate(x[0], y[0]); std::cout << "<";
	locate(x[1], y[1]); std::cout << "<";
	locate(x[2], y[2]); std::cout << "<";
	locate(x[3], y[3]); std::cout << "<";
	locate(x[4], y[4]); std::cout << "<";
	locate(x[5], y[5]); std::cout << "<";
	locate(x[6], y[6]); std::cout << "<";
	locate(x[7], y[7]); std::cout << "<";
	locate(x[8], y[8]); std::cout << "<";
	locate(x[9], y[9]); std::cout << "<";
	locate(x[10], y[10]); std::cout << "<";
	locate(x[11], y[11]); std::cout << "<";
	locate(x[12], y[12]); std::cout << "<";
	locate(x[13], y[13]); std::cout << "<";
	locate(x[14], y[14]); std::cout << "<";
	locate(x[15], y[15]); std::cout << "<";
	locate(x[16], y[16]); std::cout << "<";
	locate(x[17], y[17]); std::cout << "<";
	locate(x[18], y[18]); std::cout << "<";
	locate(x[19], y[19]); std::cout << "<";
	locate(x[20], y[20]); std::cout << "<";
	locate(x[21], y[21]); std::cout << "<";
	locate(x[22], y[22]); std::cout << "<";
	locate(x[23], y[23]); std::cout << "<";
	locate(x[24], y[24]); std::cout << "<";
	locate(x[25], y[25]); std::cout << "<";
	locate(x[26], y[26]); std::cout << "<";
	locate(x[27], y[27]); std::cout << "<";
	locate(x[28], y[28]); std::cout << "<";
	locate(x[29], y[29]); std::cout << "<";
	locate(x[30], y[30]); std::cout << "<";
	locate(x[31], y[31]); std::cout << "<";
	locate(x[32], y[32]); std::cout << "<";
	locate(x[33], y[33]); std::cout << "<";
	locate(x[34], y[34]); std::cout << "<";
	locate(x[35], y[35]); std::cout << "<";
	locate(x[36], y[36]); std::cout << "<";
	locate(x[37], y[37]); std::cout << "<";
	locate(x[38], y[38]); std::cout << "<";
	locate(x[39], y[39]); std::cout << "<";
	locate(x[40], y[40]); std::cout << "<";
	locate(x[41], y[41]); std::cout << "<";
	locate(x[42], y[42]); std::cout << "<";
	locate(x[43], y[43]); std::cout << "<";
	locate(x[44], y[44]); std::cout << "<";


	setColor(LIGHTCYAN);
	locate(MAP_WIDTH + 2, MAP_LENGTH - 1); std::cout << "		      _____";
	locate(MAP_WIDTH + 2, MAP_LENGTH); std::cout << "		     |__#__|";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 1); std::cout << "		     |";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 2); std::cout << "              &     ";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 3); std::cout << "             &&&    ";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 4); std::cout << "        &&  &&&&&  && ";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 5); std::cout << "       &&&&  &&&  &&&&  &";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 6); std::cout << "       &&&&& &&& &&&&& &&& ";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 7); std::cout << "     &  &&&  &&&  &&&  &&";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 8); std::cout << "  & &&& &&&&&&&&&&&&&  &&  &";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 9); std::cout << " &&& && &&&&&&&&&&&&&& && &&&";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 10); std::cout << "  && && &&&&&   &&&&&&&&& && ";
	locate(MAP_WIDTH + 2, MAP_LENGTH + 11); std::cout << "  &&&&&&&&&&&   &&&&&&&&&&&& ";
	setColor(MAGENTA);
	locate(c[0], d[0]); std::cout << "o";
	locate(c[1], d[1]); std::cout << "o";
	setColor(BROWN);
	locate(1, 17); std::cout << character.shape;
	while (true) {
		flag = 0;
		setColor(WHITE);
		locate(1, 1); std::cout << "Remaining lives:" << hero::health << std::endl;
		std::cout << "Number of enemies: " << enemy<< std::endl;
		std::cout << "Number of torpedos: ";
		printf("%2d", torpedo);
		std::cout << std::endl;
		std::cout << "Current level:" << level;
		setColor(BROWN);
		if (kbhit()) {
			char k = getch(); // Get character
			locate(a, b); std::cout << " "; // Erase player
			if (k == 'a') {
				if ((a == c[0] && b == d[0]) || (a == c[1] && b == d[1]))
					hero::health++;
				if (a > 1 && a <= 30)
					--a;
				for (int u = 0; u < 45; ++u) {
					if (a == x[u] && b == y[u])
						flag = 1;
					if (flag == 1) {
						enemy--;
						hero::health = hero::health - 1;
						flag = 0;
						map4::alert();
					}
				}
				for (int i = 0; i < 13; i++) {
					if (a == bossX[i] && b == bossY[i])
						flag = 1;
					if (flag == 1) {
						torpedo--;
						hero::health = hero::health - 1;
						flag = 0;
						map4::alert();
					}
				}
				if (hero::health == 0)
					//break;
					return 0;
			}
			else if (k == 'd') {
				if ((a == c[0] && b == d[0]) || (a == c[1] && b == d[1]))
					hero::health++;
				if (a >= 1 && a < 30)
					a++;
				for (int u = 0; u < 45; ++u) {
					if (a == x[u] && b == y[u])
						flag = 1;
					if (flag == 1) {
						enemy--;
						hero::health = hero::health - 1;
						flag = 0;
						map4::alert();
					}
					if (a == MAP_WIDTH && hero::health > 0) {
						level++;
						//level passed
						return 1;
					}
				}
				for (int i = 0; i < 13; i++) {
					if (a == bossX[i] && b == bossY[i])
						flag = 1;
					if (flag == 1) {
						torpedo--;
						hero::health = hero::health - 1;
						flag = 0;
						map4::alert();
					}
				}
				if (hero::health == 0)
					//break;
					return 0;
			}
			else if (k == 'w') {
				if ((a == c[0] && b == d[0]) || (a == c[1] && b == d[1]))
					hero::health++;
				if (b > 12 && b <= 19)
					--b;
				for (int u = 0; u < 45; ++u) {
					if (a == x[u] && b == y[u])
						flag = 1;
					if (flag == 1) {
						enemy--;
						hero::health = hero::health - 1;
						flag = 0;
						map4::alert();
					}
				}
				for (int i = 0; i < 13; i++) {
					if (a == bossX[i] && b == bossY[i])
						flag = 1;
					if (flag == 1) {
						torpedo--;
						hero::health = hero::health - 1;
						flag = 0;
						map4::alert();
					}
				}
				if (hero::health == 0)
					//break;
					return 0;
			}
			else if (k == 's') {
				if ((a == c[0] && b == d[0]) || (a == c[1] && b == d[1]))
					hero::health++;
				if (b >= 11 && b < 19)
					b++;
				for (int u = 0; u < 45; ++u) {
					if (a == x[u] && b == y[u])
						flag = 1;
					if (flag == 1) {
						enemy--;
						hero::health = hero::health - 1;
						flag = 0;
						map4::alert();
					}
				}
				for (int i = 0; i < 13; i++) {
					if (a == bossX[i] && b == bossY[i])
						flag = 1;
					if (flag == 1) {
						torpedo--;
						hero::health = hero::health - 1;
						flag = 0;
						map4::alert();
					}
				}
				if (hero::health == 0)
					//break;
					return 0;
			}
			rlutil::locate(a, b); std::cout << character.shape; // Output player
		}
		std::cout.flush();
	}
	return 0;
}
