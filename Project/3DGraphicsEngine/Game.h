#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();

	void start();

	sf::RenderWindow* m_window;

private:
	void initializeWindow();
	void sfmlTest();
};



