#include "Inimigo.h"

Inimigo::Inimigo()
{
	num_vidas = 1;
	alvo = nullptr;
	jogador1 = nullptr;
	jogador2 = nullptr;
}

Inimigo::~Inimigo()
{
}

void Inimigo::Executar()
{
	
	Personagem::Executar();
}
