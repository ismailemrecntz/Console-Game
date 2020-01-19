
#pragma once
#include"enemy.h"
class map {
public:
	map();
	~map();
	virtual int mapDraw(int* x, int* y, int *a, int *b);
	
	void setLevel(int);
protected:
	static int level;
	void alert();
private:
	int* bossX, * bossY;
};
