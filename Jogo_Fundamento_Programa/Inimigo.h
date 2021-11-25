#pragma once
#include "Entidade.h"
#include "Personagem.h"
#include "Jogador.h"
class Inimigo :
    public Personagem
{
protected:
    Jogador* alvo;
    Jogador* jogador1;
    Jogador* jogador2;
public:
    Inimigo();
    ~Inimigo();
    void Executar();
};

