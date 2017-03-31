#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;

class Collision {

private:

public:
	Collision();
	static bool CircleTest(Shapes& Object1, Shapes& Object2);
	static bool MapTest(Shapes& Object1);
};