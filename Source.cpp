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

GameClass::GameClass(){
	this->window = new sf::RenderWindow (sf::VideoMode(640, 480), "Circle");
}


Shapes GameClass::ShapeCreate(float _x, float _y, float _rad){
	Shapes shape(window, _x, _y, _rad);
	return shape;
}

void GameClass::MoveShape(Shapes& Object1, Shapes& Object2){
	Collision collision;

	while (window->isOpen())
	{


		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();

		}

		window->clear();
		Object2.draw();
		Object2.move2();
		Object2.draw();

		Object1.draw();
		Object1.move1();
		Object1.draw();

		if (collision.CircleTest(Object1, Object2)) {
			Object1.move2();
			Object1.draw();
			Object2.move1();
			Object2.draw();


		}

		window->display();
	}

}