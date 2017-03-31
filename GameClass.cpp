#include <iostream>
#include <SFML/Graphics.hpp>
#include "shapes.h"
#include "collision.h"
#include "GameClass.h"

GameClass::GameClass() {
	this->window = new sf::RenderWindow(sf::VideoMode(640, 480), "Circle");
}


Shapes GameClass::ShapeCreate(float _x, float _y, float _rad) {
	Shapes shape(window, _x, _y, _rad);
	return shape;
}

void GameClass::MoveShape(Shapes& Object1, Shapes& Object2) {
	int speed = 2;
	
	window->setFramerateLimit(speed);
	Collision collision;

	while (window->isOpen())
	{
		enum direction { UP, RIGHT, DOWN, LEFT };
		int direction;


		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window->close();
			}
		
		}

		window->clear();
		
		Object1.move(direction);
		Object1.update(direction);
		Object1.draw();

		Object2.draw();

		if (!collision.MapTest(Object1)) {
			window->close();
		}

		if (!collision.MapTest(Object2)) {
			window->close();
		}


		if (collision.CircleTest(Object1, Object2)) {	
			Object2.update(direction);
		}
		
		window->display();
	}

}