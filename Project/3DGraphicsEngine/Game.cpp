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

//Initializes the game window
void Game::initializeWindow()
{
	m_window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Fields Without War");
}

//Initializes the game UI
void Game::initializeUI()
{
	m_ui = UI(m_window);
}

//SFML sample code
void Game::sfmlTest()
{
	m_ui.drawCircleShape(sf::CircleShape(100.f), sf::Vector2u(100, 100), sf::Color::Green);
}