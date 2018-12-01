#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>

#include "UI.h"

class Game
{
public:
	Game();
	~Game();

	void start();

	sf::RenderWindow* m_window;
	UI m_ui;

private:
	void initializeWindow();
	void initializeUI();

	void sfmlTest();
};



