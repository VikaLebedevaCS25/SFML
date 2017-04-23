#include <iostream>
#include <SFML/Graphics.hpp>
#include "Apple.h"
#include "Square.h"
#include "Snake.h"
#include "Map.h"
#include "Cell.h"
#include "GameClass.h"
#pragma once
using namespace sf;

void Snake::expand() {
	length++;
	for (int i = length - 1; i != 0; i--) {
		square[i].setX(square[i - 1].getX());
		square[i].setY(square[i - 1].getY());
	}
	square[0].setX(x);
	square[0].setY(y);
}

bool Snake::CollisionBody() {
	for (int i = 2; i<length; i++)
		if (square[i].getX() == x && square[i].getY() == y)
			return true;

	return false;
}

void Snake::update(int newDirection) {
	int dx = 0;
	int dy = 0;
	for (int i = length - 1; i != 0; i--)
	{
		square[i].setX(square[i - 1].getX());
		square[i].setY(square[i - 1].getY());
	}

	if (newDirection == UP)
	{
		if (_direction != DOWN)
		{
			dy--;
			_direction = UP;
		}
		else
		{
			dy++;
		}
	}

	else if (newDirection == RIGHT)
	{
		if (_direction != LEFT)
		{
			dx++;
			_direction = RIGHT;
		}
		else
		{
			dx--;
		}
	}

	else if (newDirection == DOWN)
	{
		if (_direction != UP)
		{
			dy++;
			_direction = DOWN;
		}
		else
		{
			dy--;
		}

	}

	else if (newDirection == LEFT)
	{
		if (_direction != RIGHT)
		{
			dx--;
			_direction = LEFT;
		}
		else
		{
			dx++;
		}
	}
	x = x + dx;
	y = y + dy;

	square[0].setX(x);
	square[0].setY(y);
}

void Snake::move(int &direction) {

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