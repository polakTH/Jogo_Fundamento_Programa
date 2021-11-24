#include "Jogo.h"

Jogo::Jogo(): window(sf::VideoMode(800, 400), "Jogo"), shape(sf::Vector2f(100.0f, 100.0f))
{
	shape.setPosition(sf::Vector2f(400.0f, 200.0f));
	shape.setFillColor(sf::Color::Magenta);
    Executar();
}

void Jogo::Executar()
{
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            shape.move(sf::Vector2f(0.1f, 0.0f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            shape.move(sf::Vector2f(-0.1f, 0.0f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            shape.move(sf::Vector2f(0.0f, -0.1f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            shape.move(sf::Vector2f(0.0f, 0.1f));
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
}
