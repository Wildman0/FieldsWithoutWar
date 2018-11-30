#include "UI.h"

//Constructor
UI::UI()
{
	m_defaultFont = new sf::Font();
	m_defaultFont->loadFromFile("Fonts/Roboto-Bold.ttf");
}

//Destructor
UI::~UI()
{

}
