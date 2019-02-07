#include "Game.h"

#include <iostream>

#include "Behaviour.h"
#include "BehaviourBaseTest.h"

//Constructor
Game::Game()
	:window(sf::VideoMode(1280, 720, 32), "Fields Without War")
{
	BehaviourBaseTest b;
	Behaviour::behaviourHandler->addBehaviour(&b);
	start();
}

//Destructor
Game::~Game()
{

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
			if (sf::Event::KeyPressed)
			{
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				{
					window.close();
				}
			}

			if (event.type == sf::Event::Closed)
				window.close();
		}

		for (size_t i = 0; i < Behaviour::behaviourHandler->getBehaviours().capacity(); i++)
		{
			Behaviour::behaviourHandler->getBehaviours()[i]->onUpdate();
		}

		window.clear();

		tileRenderer.renderTileMap(&tileManager, &window);

		window.display();
	}
}