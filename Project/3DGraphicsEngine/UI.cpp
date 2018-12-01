#include "UI.h"
#include "UIAnchor.h"

UI::UI()
{

}

//Constructor
UI::UI(sf::RenderWindow* window)
{
	m_window = window;
	m_defaultFont = new sf::Font();
	m_defaultFont->loadFromFile("Fonts/Roboto-Bold.ttf");
}

//Destructor
UI::~UI()
{

}

//Draws a given circle
void UI::drawCircleShape(sf::CircleShape circleShape)
{

}