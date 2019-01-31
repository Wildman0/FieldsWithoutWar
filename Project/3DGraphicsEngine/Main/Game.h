#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>
#include "TileManager.h"

class Game
{
public:
	Game();
	~Game();

	void start();

	TileManager tileManager;
	sf::RenderWindow window;

private:

	void sfmlTest();
};



