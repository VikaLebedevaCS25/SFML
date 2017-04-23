#include <iostream>
#include <SFML/Graphics.hpp>
#pragma once

class Apple {
private:
	int x;
	int y;
	int radius;
public:
	Apple() {
		x = rand() % 16;
		y = rand() % 12;
		radius = 20;
	}
	int getX() { return x; }
	int getY() { return y; }
	int getRadius() { return radius; }
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setRadius(int radius) { this->radius = radius; }
	void generate()
	{
		x = rand() % 16;
		y = rand() % 12;
	}

};
