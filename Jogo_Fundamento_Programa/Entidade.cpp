#include "Entidade.h"

Entidade::Entidade():sprite(sf::Vector2f(20.0f,20.0f))
{
	x = 0;
	y = 0;
	velocidadeVertical = 0;
	velocidadeHorizontal = 0;
	velocidadeMax = 1.0f;
	capturado = false;
	morto = false;
	noChao = false;
}

Entidade::~Entidade()
{
	ID = -1;
}

void Entidade::Executar()
{
	if(capturado)
	{
		//locidadeHorizontal += x - (float)sf::Mouse::getPosition(*gerenciador->window).x - sprite.getSize().x / 2.0f;
		//locidadeVertical += y - (float)sf::Mouse::getPosition(*gerenciador->window).y - sprite.getSize().y / 2.0f;
		x = (float)sf::Mouse::getPosition(*gerenciador->window).x - sprite.getSize().x/2.0f;
		y = (float)sf::Mouse::getPosition(*gerenciador->window).y - sprite.getSize().y/2.0f;
		
	}
	else
	{
		if (x + velocidadeHorizontal < 0)
		{
			x = 0;
			velocidadeHorizontal = 0;
		}
		else if (x + sprite.getSize().x + velocidadeHorizontal > gerenciador->window->getSize().x)
		{
			x = gerenciador->window->getSize().x - sprite.getSize().x;
			velocidadeHorizontal = 0;
		}
		if (y + velocidadeVertical < 0)
		{
			y = 0;
			velocidadeVertical = 0;
		}
		if (noChao && velocidadeVertical > 0)velocidadeVertical = 0;
		y += velocidadeVertical;
		x += velocidadeHorizontal;
		if (!noChao)
		{
			velocidadeVertical += 0.00005f;
		}
		if (velocidadeHorizontal > 0.00000001f)
		{
			velocidadeHorizontal -= 0.00006f;
		}
		else if (velocidadeHorizontal < -0.00000001f)
		{
			velocidadeHorizontal += 0.00006f;
		}
		else
		{
			velocidadeHorizontal = 0;
		}
	}
	sprite.setPosition(x, y);
	Imprimir_se();
}

void Entidade::Imprimir_se()
{
	gerenciador->window->draw(sprite);
}


