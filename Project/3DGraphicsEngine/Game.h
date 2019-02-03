#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>
#include "TileManager.h"
#include "TileRenderer.h"
#include "BaseBehaviour.h"

class Game
{
public:
	Game();
	~Game();

	void start();

	static void addBehaviour(BaseBehaviour* b);
	static void destroyBehaviour(BaseBehaviour b);

	TileManager tileManager;
	TileRenderer tileRenderer;

	sf::RenderWindow window;

private:

	void sfmlTest();

	static std::vector<BaseBehaviour*> behaviours;
};



