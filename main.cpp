#include <iostream>
#include <SFML/Graphics.hpp>
#include "header.h"
using namespace sf;
using namespace std;


int main()
{
	
	
	sf::RenderWindow window(sf::VideoMode(640, 480), "Test");
	Shapes shape(&window,0,0,40);
	Shapes shape1(&window, 560, 0,40);
	Collision collision;

	while (window.isOpen())
	{


		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) 
				window.close();
			
		}

		window.clear();
		shape1.draw();
		shape1.move2();
		shape1.draw();

		shape.draw();
		shape.move1();
		shape.draw();
		
		if (collision.CircleTest(shape,shape1)) {
			shape.move2();
			shape.draw();
			shape1.move1();
			shape1.draw();


		}
		
		window.display();
	}

	return 0;
}