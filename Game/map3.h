
#pragma once
#include"map.h"
class map3 :public map {
public:
	map3();
	~map3();
	int mapDraw(int* x, int* y, int *a, int *b);
private:
	int* bossX, * bossY;
};
