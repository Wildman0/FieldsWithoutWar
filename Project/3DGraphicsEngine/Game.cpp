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
	initializeWindow();
	initializeUI();
	sfmlTest();
}

void Game::initializeWindow()
{
	m_window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Fields Without War");
}

void Game::initializeUI()
{
	//m_ui = UI(m_window);
}

//SFML sample code
void Game::sfmlTest()
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (m_window->isOpen())
	{
		sf::Event event;
		while (m_window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				m_window->close();
		}

		m_window->clear();
		m_window->draw(shape);
		m_window->display();
	}
}