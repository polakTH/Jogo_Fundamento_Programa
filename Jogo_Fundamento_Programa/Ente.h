#pragma once
#include "Gerenciador_Grafico.h"
class Ente
{
protected:
	Gerenciador_Grafico* gerenciador;
public:
	int ID;
	Ente();
	~Ente();

	virtual void Executar();
	void Imprimir_se();
	void setGerenciador(Gerenciador_Grafico* gerenciador) { this->gerenciador = gerenciador; }
};

