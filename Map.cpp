#include <iostream>
#include <SFML/Graphics.hpp>
#include "Apple.h"
#include "Square.h"
#include "Snake.h"
#include "Map.h"
#include "Cell.h"
#include "GameClass.h"
#pragma once

Map::Map() {

}

bool Map::MapCollision() {
	if (snake.getX(0) >= 640 / 40 || snake.getX(0) < 0 || snake.getY(0) >= 480 / 40 || snake.getY(0) < 0)
		return 1;
	return 0;

}

bool Map::eatApple() {
	if (snake.getX(0) == apple.getX() && snake.getY(0) == apple.getY())
		return true;
	else
		return false;
}

bool Map::isCross() {
	for (int i = 0; i < snake.getLength(); i++) 
		if (snake.getX(i) == apple.getX() && snake.getY(i) == apple.getY())
			return true;
	return false;	
}

void Map::drawSnake(sf::RenderWindow* window) {
	for (int k = 0; k < snake.getLength(); k++) {
		cells[snake.getX(k)][snake.getY(k)].setSquare(window, snake.getSq(k));
	}
}

void Map::drawApple(sf::RenderWindow* window) {
	cells[apple.getX()][apple.getY()].setShape(window, apple);

}
