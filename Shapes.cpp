#include <iostream>
#include <SFML/Graphics.hpp>
#include "shapes.h"
#include "collision.h"
#include "GameClass.h"


Shapes::Shapes(RenderWindow* window, float x, float y, int radius) {
	this->window = window;
	this->radius = radius;
	this->x = x;
	this->y = y;
	_direction = RIGHT;
	circle.setRadius(radius);
	this->circle.setPosition(x, y);
	this->circle.setFillColor(sf::Color(150, 50, 250));
}

int Shapes::getRad() {
	return radius;
}

void Shapes::setX(float x) {
	this->x = x;
}

void Shapes::setY(float y) {
	this->y = y;
}

float Shapes::getX() {
	return x;
}

float Shapes::getY() {
	return y;
}

void Shapes::setPos(float x, float y) {
	circle.setPosition(x, y);
}

void Shapes::move(int &direction) {

	if ((Keyboard::isKeyPressed(Keyboard::Left) || (Keyboard::isKeyPressed(Keyboard::A)))) {
		direction = LEFT;
	}

	if ((Keyboard::isKeyPressed(Keyboard::Right) || (Keyboard::isKeyPressed(Keyboard::D)))) {
		direction = RIGHT;
	}

	if ((Keyboard::isKeyPressed(Keyboard::Up) || (Keyboard::isKeyPressed(Keyboard::W)))) {
		direction = UP;
	}

	if ((Keyboard::isKeyPressed(Keyboard::Down) || (Keyboard::isKeyPressed(Keyboard::S)))) {
		direction = DOWN;
	}


}



void Shapes::update(int newDirection) {
	int dx=0;
	int dy=0;

	if (newDirection == UP)
	{
		if (_direction != DOWN)
		{
			dy = -2*radius;
			_direction = UP;
		}
		else
		{
			dy = 2 * radius;
		}
	}

	else if (newDirection == RIGHT)
	{
		if (_direction != LEFT)
		{
			dx = 2 * radius;
			_direction = RIGHT;
		}
		else
		{
			dx = -2 * radius;
		}
	}

	else if (newDirection == DOWN)
	{
		if (_direction != UP)
		{
			dy = 2 * radius;
			_direction = DOWN;
		}
		else
		{
			dy = -2 * radius;
		}

	}

	else if (newDirection == LEFT)
	{
		if (_direction != RIGHT)
		{
			dx = -2 * radius;
			_direction = LEFT;
		}
		else
		{
			dx = 2 * radius;
		}
	}
	x = x + dx;
	y = y + dy;
	
	circle.setPosition(x, y);
}