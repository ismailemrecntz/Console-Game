
#include "rlutil.h"
#include"map.h"
#include"hero.h"
#include"enemy.h"
#include<iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include<string>
#include"healthBar.h"
#include"menu.h"
#include"menu2.h"
#include"menu3.h"
#include"menu4.h"
#include"menu5.h"
#include"map2.h"
#include"map3.h"
#include"map4.h"
#include"map5.h"
#define waitkey rlutil::anykey("Press any key to continue...\n")
using namespace rlutil;
int main() {
	srand(time(NULL));
	//level controllers
	int check, check2, check3, check4, again = 1;
	int check5;
	int choose;
	healthBar extra;
	map* maps[5];
	maps[0] = new map;
	maps[1] = new map2;
	maps[2] = new map3;
	maps[3] = new map4;
	maps[4]= new map5;
	//calling menu
	//menu open;
	int hold = 0;
	rlutil::setBackgroundColor(rlutil::BLACK);
	enemy enemies;
	//using polymorphism
	menu* menus[5];
	menus[0] = new menu;
	menus[1] = new menu2;
	menus[2] = new menu3;
	menus[3] = new menu4;
	menus[4] = new menu5;
	menus[0]->rules(0);
	while (hero::health > 0 && again == 1) {
		check5 = 0;
		rlutil::hidecursor();
		check = maps[0]->mapDraw(&enemies.locationOfEnemyX[0], &enemies.locationOfEnemyY[0], extra.appearBarX(), extra.appearBarY());
		if (check == 1) {
			if (hold == 0) {
				enemies.appear(hold);
				hold++;
			}
			menus[1]->rules(hero::health);
			check2 = maps[1]->mapDraw(&enemies.locationOfEnemyX[0], &enemies.locationOfEnemyY[0], extra.appearBarX(), extra.appearBarY());
			if (check2 == 1) {
				if (hold == 1) {
					enemies.appear(hold);
					hold++;
				}
				menus[2]->rules(hero::health);
				check3 = maps[2]->mapDraw(&enemies.locationOfEnemyX[0], &enemies.locationOfEnemyY[0], extra.appearBarX(), extra.appearBarY());
				if (check3 == 1) {
					if (hold == 2) {
						enemies.appear(hold);
						hold++;
					}
					menus[3]->rules(hero::health);
					check4 = maps[3]->mapDraw(&enemies.locationOfEnemyX[0], &enemies.locationOfEnemyY[0], extra.appearBarX(), extra.appearBarY());
					if (check4 == 1) {
						if (hold == 3) {
							enemies.appear(hold);
							hold++;
						}
						menus[4]->rules(hero::health);
						check5 = maps[4]->mapDraw(&enemies.locationOfEnemyX[0], &enemies.locationOfEnemyY[0], extra.appearBarX(), extra.appearBarY());
					}
				}
			}
		}
		system("CLS");
		setColor(WHITE);
		if (check5 == 0) {
			int i = 0;
			while (i < 3) {
				cls();
				setColor(RED);
				
				std::cout << "YOU LOST! TRY AGAIN!!" << std::endl << std::endl;
				msleep(900);
				++i;
			}
			setColor(WHITE);
			std::cout << "If you want to play again write 1, any other key otherwise: ";
			showcursor();
			std::cin >> choose;
			if (choose == 1) {
				again = 1;
				maps[0]->setLevel(1);
				hero::health = 3;
			}
			else
				again = 0;
		}
		else {
			int i=0;
			while (i < 3) {
				cls();
				setColor(GREEN);

				std::cout << "YOU WON! CONGRATULATIONS!!" << std::endl << std::endl;
				msleep(900);
				++i;
			}
			setColor(WHITE);
			std::cout << "If you want to play again write 1, any other key otherwise:  ";
			showcursor();
			std::cin >> choose;
			if (choose == 1) {
				again = 1;
				hero::health = 3;
			}
			else
				again = 0;
		}
	}
	setColor(BLUE);
	std::cout<<"\n\nThank you for playing :)";
	setColor(WHITE);
	return 0;
}
