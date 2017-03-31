#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;

class Shapes {
public:
	Shapes(RenderWindow* window, float, float, int);
	void update(int);
	void move(int &direction);
	float getX();
	void setPos(float, float);
	float getY();
	int getRad();
	void setX(float);
	void setY(float);
	void draw() {
		this->window->draw(this->circle);
	}
private:
	RenderWindow* window;
	CircleShape circle;
	float x;
	float y;
	enum direction { UP, RIGHT, DOWN, LEFT };
	int _direction;
	int length;
	int radius;
};