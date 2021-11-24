#pragma once
#include <SFML/Graphics.hpp>
class Entidade
{
protected:
	sf::RectangleShape body;
	sf::RenderWindow *window;
public:
	Entidade();
	~Entidade();

	void SetWindow(sf::RenderWindow* window) { this->window = window; }
	void draw() { window->draw(body); }
};
