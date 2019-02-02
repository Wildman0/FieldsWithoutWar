#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>
#include "TileManager.h"
#include "TileRenderer.h"
#include "GameBehaviour.h"

class Game
{
public:
	Game();
	~Game();

	void start();

	static void createBehaviourInstance(GameBehaviour behaviour);
	static void addBehaviourInstance(GameBehaviour behaviour);
	static void destroyBehaviourInstance(GameBehaviour behaviour);

	TileManager tileManager;
	TileRenderer tileRenderer;

	sf::RenderWindow window;

private:

	void sfmlTest();
};



