#pragma once
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidades.h"
#include "Fase.h"
#include "Gerenciador_Grafico.h"
class Jogo
{
private:
	Jogador* jogador1;
	Jogador* jogador2;
	ListaEntidades* LEs;
	Gerenciador_Grafico* gerenciador_graf;
	Fase* fase1;
public:
	Jogo();
	~Jogo();

	void Executar();
};

