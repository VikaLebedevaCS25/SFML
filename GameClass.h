#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;

class GameClass {
public:
	GameClass();
	Shapes ShapeCreate(float, float, float);
	void MoveShape(Shapes& Object1, Shapes& Object2);
private:
	sf::RenderWindow* window;

};