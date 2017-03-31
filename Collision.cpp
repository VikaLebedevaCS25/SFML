#include <iostream>
#include <SFML/Graphics.hpp>
#include "shapes.h"
#include "collision.h"
#include "GameClass.h"

Collision::Collision() {

}


bool Collision::CircleTest(Shapes& Object1, Shapes& Object2) {
	float xd = Object1.getX() - Object2.getX();
	float yd = Object1.getY() - Object2.getY();

	return sqrt(xd * xd + yd * yd) <= Object1.getRad() + Object2.getRad();
}

bool Collision::MapTest(Shapes& Object1) {
	if (Object1.getX() <= 640-Object1.getRad() && Object1.getX() >= 0)
		if (Object1.getY() <= 480 - Object1.getRad() && Object1.getY() >= 0)
			return 1;
	return 0;
}
