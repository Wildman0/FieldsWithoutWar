#include "Game.h"
#include <iostream>
#include "BehaviourBaseTest.h"

//Constructor
Game::Game()
	:window(sf::VideoMode(1280, 720, 32), "Fields Without War")
{
	start();
}

//Destructor
Game::~Game()
{

}

void Game::addBehaviour(BaseBehaviour* b)
{
	behaviours.push_back(b);
}

//Runs at start
void Game::start()
{
	BehaviourBaseTest test = BehaviourBaseTest();
	sfmlTest();
}

//SFML sample code
void Game::sfmlTest()
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	tileManager = TileManager(2, 2);

	while(window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		tileRenderer.renderTileMap(&tileManager, &window);

		window.display();
	}
}