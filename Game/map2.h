
#pragma once
#include"map.h"
class map2 :public map {
public:
	map2();
	~map2();
	int mapDraw(int* x, int* y, int *a, int *b);
private:
	int* bossX, * bossY;
};

