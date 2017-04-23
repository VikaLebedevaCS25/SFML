#include <iostream>
#include <SFML/Graphics.hpp>
#include "Apple.h"
#include "Square.h"
#pragma once

class Cell
{
private:
	int size;
public:
	Cell() {
		size = 40;
	}
	void setShape(sf::RenderWindow* window, Apple& fruit);
	void setSquare(sf::RenderWindow* window, Square& sq);
	int getSize() { return size; }
};