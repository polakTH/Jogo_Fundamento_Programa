#include "Fase.h"



Fase::Fase(Jogador* j1,Jogador* j2, Gerenciador_Grafico* gerenciador)
{
	this->j1 = j1;
	this->j2 = j2;
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
