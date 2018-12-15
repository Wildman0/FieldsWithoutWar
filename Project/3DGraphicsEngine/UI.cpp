#include "UI.h"
#include <iostream>

UI::UI()
{

}

//Constructor
UI::UI(sf::RenderWindow* window)
{
	m_window = window;
	m_defaultFont = new sf::Font();
	m_defaultFont->loadFromFile("Fonts/Roboto-Bold.ttf");
	m_anchor = UIAnchor(window);
	m_anchor.m_anchorPosition = 3;
}

//Destructor
UI::~UI()
{

}

//Draws a given circle
void UI::drawCircleShape(sf::CircleShape circleShape, sf::Vector2u position, sf::Color color)
{
	circleShape.setFillColor(color);
	circleShape.setPosition((float)position.x + m_anchor.m_anchorPositionAsPixels[(int)m_anchor.Center].x - circleShape.getRadius(), 
							(float)position.y + m_anchor.m_anchorPositionAsPixels[(int)m_anchor.Center].y - circleShape.getRadius());

	while (m_window->isOpen())
	{
		sf::Event event;
		while (m_window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				m_window->close();
		}

		m_window->clear();
		m_window->draw(circleShape);
		m_window->display();
	}
}