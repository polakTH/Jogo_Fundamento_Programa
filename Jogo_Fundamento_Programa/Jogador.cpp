#include "Jogador.h"

Jogador::Jogador()
{
    body.setPosition(sf::Vector2f(400.0f, 200.0f));
    body.setFillColor(sf::Color::Magenta);
}

Jogador::~Jogador()
{
}

void Jogador::Move()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        body.move(sf::Vector2f(0.1f, 0.0f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        body.move(sf::Vector2f(-0.1f, 0.0f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        body.move(sf::Vector2f(0.0f, -0.1f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        body.move(sf::Vector2f(0.0f, 0.1f));
    }
}
