#include "Obstaculo.h"

Obstaculo::Obstaculo(sf::Vector2f size)
{
	sprite = sf::RectangleShape(size);
}

Obstaculo::~Obstaculo()
{
}
