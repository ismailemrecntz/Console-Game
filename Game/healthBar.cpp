
#include"healthBar.h"
#include<cstdlib>
#include<ctime>
healthBar::healthBar() {
}

int * healthBar::appearBarX() {
	if (locationOfHealthBarX != NULL)
		delete[] locationOfHealthBarX;
	locationOfHealthBarX = new int[2];
	locationOfHealthBarX[0]= rand() % 29 + 1;
	locationOfHealthBarX[1] = rand() % 29 + 1;
	return locationOfHealthBarX;
}

int* healthBar::appearBarY() {
	if (locationOfHealthBarY != NULL)
		delete[] locationOfHealthBarY;
	locationOfHealthBarY = new int[2];
	locationOfHealthBarY[0] = rand() % (20 - 13) + 13;
	locationOfHealthBarY[1] = rand() % (20 - 13) + 13;
	return locationOfHealthBarY;
}
