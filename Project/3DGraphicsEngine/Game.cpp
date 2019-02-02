#include "Game.h"
#include <iostream>
#include "GameBehaviourTest.h"

//Constructor
Game::Game()
	:window(sf::VideoMode(1280, 720, 32), "Fields Without War")
{
	window.setFramerateLimit(60);
	start();
}

//Destructor
Game::~Game()
{

}

//Runs at start
void Game::start()
{
	GameBehaviourTest test = GameBehaviourTest();
	sfmlTest();
}

void Game::addBehaviourInstance(GameBehaviour* behaviour)
{
	gameBehaviours.push_back(behaviour);
}

void Game::destroyBehaviourInstance(GameBehaviour* behaviour)
{
	
}

//SFML sample code
void Game::sfmlTest()
{
	tileManager = TileManager(150, 150);

	while(window.isOpen())
	{
		for (size_t i = 0; i < gameBehaviours.capacity(); i++)
		{
			gameBehaviours[i]->onUpdate();
		}

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