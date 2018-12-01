#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics.hpp>

#include "UIAnchor.h"

class UI
{
public:
	UI();
	UI(sf::RenderWindow* window);
	~UI();

	UIAnchor m_anchor;

	sf::RenderWindow* m_window;
	sf::Font* m_defaultFont;
	void drawCircleShape(sf::CircleShape circleShape, sf::Vector2u position, sf::Color color);
};