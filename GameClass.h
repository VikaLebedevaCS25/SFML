#include <iostream>
#include <SFML/Graphics.hpp>
#include "Map.h"
#pragma once


class GameClass {
public:
	GameClass();
private:
	sf::RenderWindow* window;
	Map _Map;
};