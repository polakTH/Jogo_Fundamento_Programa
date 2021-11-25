#include "Entidade.h"

Entidade::Entidade():sprite(sf::Vector2f(100.0f,100.0f))
{
	x = 0;
	y = 0;
	capturado = false;
}

Entidade::~Entidade()
{
}

void Entidade::Executar()
{
	sprite.setPosition(x, y);
	Imprimir_se();
}

void Entidade::Imprimir_se()
{
	gerenciador->window->draw(sprite);
}


