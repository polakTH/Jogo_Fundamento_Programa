#include "Jogador.h"

Jogador::Jogador(bool jogador1)
{
    num_vidas = 3;
    this->Jogador1 = jogador1;
    if (jogador1)
    {
        x = 400;
        y = 150;
        sprite.setFillColor(sf::Color::Magenta);
    }
    else
    {
        x = 400;
        y = 250;
        sprite.setFillColor(sf::Color::Yellow);
    }
    alvo = nullptr;
}

Jogador::~Jogador()
{
}

void Jogador::Move()
{
    if (Jogador1)
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            x += 0.1f;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            x -= 0.1f;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && noChao)
        {
            velocidadeVertical = -0.1f;
        }
    }
    else
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            x += 0.1f;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            x -= 0.1f;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && noChao)
        {
            velocidadeVertical = -0.1f;
        }
    }
}

void Jogador::Executar()
{
    Move();
    Personagem::Executar();
}


