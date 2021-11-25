#include "Fase.h"



Fase::Fase(Jogador* j1, Jogador* j2, Gerenciador_Grafico* gerenciador)
{
	this->j1 = j1;
	this->j2 = j2;
	chao = new Obstaculo(sf::Vector2f(2000.0f, 200.0f));
	chao->x = 0;
	chao->y = 700.0f;
	chao->getSprite()->setPosition(0.0f, 700.0f);
	chao->getSprite()->setFillColor(sf::Color::Green);
	Inimigo_A* i1 = new Inimigo_A(j1, j2);
	i1->setGerenciador(gerenciador);
	listaEntidades = new ListaEntidades;
	listaEntidades->LEs.Add(j1);
	if(j2 != nullptr)
	{
		listaEntidades->LEs.Add(j2);
	}
	listaEntidades->LEs.Add(i1);
}

Fase::~Fase()
{
}
