#pragma once
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidades.h"
#include <SFML/Graphics.hpp>
#include "Gerenciador_Grafico.h"
#include "Inimigo_A.h"
#include "Obstaculo.h"
class Fase
{
private:
	ListaEntidades *listaEntidades;
	Jogador* j1;
	Jogador* j2;
	
public:
	Obstaculo* chao;
	Fase(Jogador* j1,Jogador* j2,Gerenciador_Grafico* gerenciador);
	~Fase();

	ListaEntidades* getListaEntidades() { return listaEntidades; }
};

