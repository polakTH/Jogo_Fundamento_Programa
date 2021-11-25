#pragma once
#include "Lista.h"
#include "Inimigo.h"
class Gerenciador_Colisões
{
private:
	Lista<Inimigo>* LIs;
public:
	Gerenciador_Colisões();
	bool Colidindo(Entidade* eu, Entidade* alvo);
};

