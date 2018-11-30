#include "Game.h"
#include "SFML/Graphics.hpp"

//Constructor
Game::Game()
{
	start();
}

//Destructor
Game::~Game()
{
}

//Runs at start
void Game::start()
{
	sfmlTest();
}

//SFML sample code
void Game::sfmlTest()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}
}