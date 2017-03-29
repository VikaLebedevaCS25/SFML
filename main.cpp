#include <iostream>
#include <SFML/Graphics.hpp>
#include "header.h"
using namespace sf;
using namespace std;


int main()
{
	GameClass game;
	game.MoveShape(game.ShapeCreate(0, 0, 40), game.ShapeCreate(560, 0, 40));
	
	return 0;
}