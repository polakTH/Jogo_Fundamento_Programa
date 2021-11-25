#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"
class Entidade : 
	public Ente
{
protected:
	sf::RectangleShape sprite;
public:
	float x;
	float y;
	float velocidadeVertical;
	float velocidadeHorizontal;
	float velocidadeMax;
	bool capturado;
	bool noChao;
	Entidade();
	~Entidade();

	virtual void Executar();
	void Imprimir_se();
	sf::RectangleShape* getSprite() { return &sprite; }
};

