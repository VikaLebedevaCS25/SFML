#include "header.h"


Shapes::Shapes(RenderWindow* window,float x,float y,int radius) {
	this->window = window;
	circle.setRadius(radius);
	this->radius = radius;
	this->circle.setPosition(x, y);
	this->x = x;
	this->y = y;
	this->circle.setFillColor(sf::Color(150, 50, 250));
}

int Shapes::getRad(){
	return radius;
}

float Shapes::getX() {
	return x;
}

float Shapes::getY() {
	return y;
}

void Shapes::move1() {
	
		this->setX(x +  0.1);
	
}

void Shapes::move2() {

	this->setX(x - 0.1);

}



void Shapes::setX(float _x) {
	if (_x <= 560 && _x>=0) {
		circle.setPosition(_x, y);
		x = _x;
	}
	else {
		circle.setPosition(x , y);
	}
}


Collision::Collision() {

}

bool Collision::CircleTest(Shapes& Object1, Shapes& Object2) {
	float xd = Object1.getX() - Object2.getX();
	float yd = Object1.getY() - Object2.getY();

	return sqrt(xd * xd + yd * yd) <= Object1.getRad() + Object2.getRad();
}
