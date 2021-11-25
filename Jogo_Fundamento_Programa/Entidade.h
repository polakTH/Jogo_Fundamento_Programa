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
	bool capturado;
	Entidade();
	~Entidade();

	virtual void Executar();
	void Imprimir_se();
	sf::RectangleShape* getSprite() { return &sprite; }
};

