#include "Game.h"
#include "UIAnchor.h"

//Constructor
UIAnchor::UIAnchor(sf::RenderWindow window)
{
	m_window = &window;
	m_windowSize = m_window->getSize;

	start();
}

//Destructor
UIAnchor::~UIAnchor()
{

}

//Runs at start
void UIAnchor::start()
{
	setUIAnchorPositions();
}

//Sets all UI anchor positions
void UIAnchor::setUIAnchorPositions()
{
	m_anchorPositionAsPixels[BottomLeft] = sf::Vector2f(0.f, 0.f);
	m_anchorPositionAsPixels[BottomRight] = sf::Vector2f(m_windowSize.x, 0.f);
	m_anchorPositionAsPixels[Center] = sf::Vector2f(m_windowSize.x / 2, m_windowSize.y / 2);
	m_anchorPositionAsPixels[TopLeft] = sf::Vector2f(0.f, m_windowSize.y);
	m_anchorPositionAsPixels[TopRight] = sf::Vector2f(m_windowSize.x, m_windowSize.y);
}