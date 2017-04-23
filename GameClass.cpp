#include <iostream>
#include <SFML/Graphics.hpp>
#include "Apple.h"
#include "Square.h"
#include "Map.h"
#include "Cell.h"
#include "GameClass.h"
#pragma once

GameClass::GameClass() {
	this->window = new sf::RenderWindow(sf::VideoMode(640, 480), "Snake");
	unsigned int speed = 5;
	enum direction { UP, RIGHT, DOWN, LEFT };
	int direction = RIGHT;

	window->setFramerateLimit(speed);

	sf::Event event;
	while (window->isOpen())
	{

		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window->close();
			}

		}

		window->clear();

		_Map.snake.move(direction);
		_Map.snake.update(direction);
		_Map.drawSnake(window);

		_Map.drawApple(window);

		if (_Map.MapCollision()) {
			window->close();
		}

		if (_Map.snake.CollisionBody()) {
			window->close();
		}

		if (_Map.eatApple()) {
			_Map.snake.expand();
			_Map.apple.generate();
			while (_Map.isCross())
				_Map.apple.generate();
		}

		window->display();
	}

}