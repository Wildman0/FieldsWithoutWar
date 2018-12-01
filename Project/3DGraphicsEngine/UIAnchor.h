
class UIAnchor
{
public:
	UIAnchor(sf::RenderWindow window);
	~UIAnchor();

	enum AnchorPosition{BottomLeft, BottomRight, Center, TopLeft, TopRight};
	sf::Vector2f m_anchorPositionAsPixels[5];

private:
	void start();
	void setUIAnchorPositions();

	Game* instance;
	sf::RenderWindow* m_window;
	sf::Vector2f m_windowSize;
};

