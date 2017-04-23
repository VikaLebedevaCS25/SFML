#include <iostream>
#include <SFML/Graphics.hpp>
#include "Apple.h"
#include "Snake.h"
#include "Cell.h"
#pragma once

class Map {
public:
	Map();
	bool MapCollision();
	bool eatApple();
	/*Snake returnSnake() {
	return snake;
	}
	Apple returnApple(){
	return apple;
	}*/
	bool isCross();
	void drawSnake(sf::RenderWindow* window);
	void drawApple(sf::RenderWindow* window);
	Snake snake;
	Apple apple;

private:
	Cell cells[16][12];
	/*Snake snake;*/
	/*Apple apple;*/
};