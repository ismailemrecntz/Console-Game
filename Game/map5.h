
#pragma once
#include"map.h"
class map5 :public map {
public:
	map5();
	~map5();
	int mapDraw(int* x, int* y, int *a, int *b);
private:
	int* bossX, * bossY;
};
