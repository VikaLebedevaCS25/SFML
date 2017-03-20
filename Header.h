#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;

class Shapes {
public:
	Shapes(RenderWindow* window, float, float,int);
	void setX(float);
	void move1();
	float getX();
	float getY();
	int getRad();
	void move2();
	void draw() {
		this->window->draw(this->circle);
	}
private:
	RenderWindow* window;
	CircleShape circle;
	float x;
	float y;
	int radius;
};

class Collision {
	
private:
	
public:
	Collision();
	static bool CircleTest(Shapes& Object1,  Shapes& Object2);
};

