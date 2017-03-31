#include <iostream>
#include <SFML/Graphics.hpp>
#include "shapes.h"
#include "collision.h"
#include "GameClass.h"
using namespace sf;
using namespace std;


int main()
{
	GameClass game;
	game.MoveShape(game.ShapeCreate(0, 0, 20), game.ShapeCreate(400, 0, 20));
	
	return 0;
}