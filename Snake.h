#include "Square.h"
#pragma once

class Snake {
private:
	Square square[192];
	int length;
	int x;
	int y;
	enum direction { UP, RIGHT, DOWN, LEFT };
	int _direction;
public:
	Snake() {
		x = 0;
		y = 0;
		square[0].setX(x);
		square[0].setY(y);
		square[0].setSide(40);
		length = 1;
		_direction = RIGHT;
	}
	void expand();
	void update(int);
	void move(int &direction);
	int getLength() { return length; }
	int getX(int i) { return square[i].getX(); }
	int getY(int i) { return square[i].getY(); }
	void setX(int i, int x) { square[i].setX(x); }
	void setY(int i, int y) { square[i].setY(y); }
	bool CollisionBody();
	Square getSq(int i) { return square[i]; }
};