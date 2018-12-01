#pragma once

class UIAnchor
{
public:
	UIAnchor();
	UIAnchor(sf::RenderWindow window);
	~UIAnchor();

	enum AnchorPosition{BottomLeft, BottomRight, Center, TopLeft, TopRight};
	sf::Vector2u m_anchorPositionAsPixels[5];

private:
	void start();
	void setUIAnchorPositions();

	sf::RenderWindow* m_window;
	sf::Vector2u m_windowSize;
};

