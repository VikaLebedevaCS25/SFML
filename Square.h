#include <iostream>
#include <SFML/Graphics.hpp>
#pragma once

class Square {
private:
	int x;
	int y;
	int side;
public:
	Square() {
		side = 40;
	}
	int getX() { return x; }
	int getY() { return y; }
	int getSide() { return side; }
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setSide(int radius) { this->side = side; }

};
