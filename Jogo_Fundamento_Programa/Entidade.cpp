#include "Entidade.h"

Entidade::Entidade():sprite(sf::Vector2f(100.0f,100.0f))
{
	x = 0;
	y = 0;
	velocidadeVertical = 0;
	velocidadeHorizontal = 0;
	velocidadeMax = 1.0f;
	capturado = false;
	noChao = false;
}

Entidade::~Entidade()
{
}

void Entidade::Executar()
{
	y += velocidadeVertical;
	x += velocidadeHorizontal;
	if (!noChao)
	{
		velocidadeVertical += 0.00005f;
		if (velocidadeVertical > 2)velocidadeVertical = 2.0f;
	}
	if(velocidadeHorizontal > 0.00000001f)
	{
		velocidadeHorizontal -= 0.00006f;
	}
	else if(velocidadeHorizontal < -0.00000001f)
	{
		velocidadeHorizontal += 0.00006f;
	}
	else
	{
		velocidadeHorizontal = 0;
	}
	if (velocidadeHorizontal > velocidadeMax)
	{
		velocidadeHorizontal = velocidadeMax;
	}
	else if (velocidadeHorizontal < -velocidadeMax)
	{
		velocidadeHorizontal = -velocidadeMax;
	}
	sprite.setPosition(x, y);
	Imprimir_se();
}

void Entidade::Imprimir_se()
{
	gerenciador->window->draw(sprite);
}


