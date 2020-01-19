
#pragma once
#include"map.h"
class map4 :public map {
public:
	map4();
	~map4();
	int mapDraw(int* x, int* y, int *a, int *b);
private:
	int* bossX, * bossY;
};

