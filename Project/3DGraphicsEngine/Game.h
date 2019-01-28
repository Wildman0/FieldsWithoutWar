#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();

	void start();
	void createWindow();

	sf::RenderWindow window;

private:

	void sfmlTest();
};



