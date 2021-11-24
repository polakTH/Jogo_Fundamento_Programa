#include "Fase.h"

void Fase::inicializaElementos()
{
	listaEntidades->LEs.Add(j1);
	listaEntidades->LEs.Add(i1);
}

Fase::Fase(Jogador* j1, sf::RenderWindow* window)
{
	this->j1 = j1;
	i1 = new Inimigo;
	i1->SetWindow(window);
	listaEntidades = new ListaEntidades;
	inicializaElementos();
}

Fase::~Fase()
{
}
