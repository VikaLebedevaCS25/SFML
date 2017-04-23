#include <iostream>
#include <SFML/Graphics.hpp>
#include "Apple.h"
#include "Square.h"
#include "Snake.h"
#include "Map.h"
#include "Cell.h"
#include "GameClass.h"
#pragma once

void Cell::setShape(sf::RenderWindow* window, Apple& fruit) {
	sf::CircleShape shape;
	shape.setFillColor(sf::Color(139, 0, 0));
	shape.setRadius(fruit.getRadius());
	shape.setPosition(fruit.getX()*size, fruit.getY()*size);
	window->draw(shape);
}
void Cell::setSquare(sf::RenderWindow* window, Square& sq) {
	sf::RectangleShape rectangle;
	rectangle.setFillColor(sf::Color(0, 250, 154));
	rectangle.setOutlineThickness(2);
	rectangle.setOutlineColor(sf::Color(9, 112, 16));
	rectangle.setSize(sf::Vector2f(sq.getSide(), sq.getSide()));
	rectangle.setPosition(sq.getX()*size, sq.getY()*size);
	window->draw(rectangle);
}