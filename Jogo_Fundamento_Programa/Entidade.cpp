#include "Entidade.h"

Entidade::Entidade():sprite(sf::Vector2f(100.0f,100.0f))
{
	x = 0;
	y = 0;
	velocidadeVertical = 0;
	capturado = false;
	noChao = false;
}

Entidade::~Entidade()
{
}

void Entidade::Executar()
{
	y += velocidadeVertical;
	velocidadeVertical += 0.00005f;
	if (velocidadeVertical > 2)velocidadeVertical = 2.0f;
	if (velocidadeVertical < -2)velocidadeVertical = -2.0f;
	sprite.setPosition(x, y);
	Imprimir_se();
}

void Entidade::Imprimir_se()
{
	gerenciador->window->draw(sprite);
}


