#pragma once
#include "Entidade.h"
#include "Personagem.h"
class Jogador :
    public Personagem
{
private:
    bool Jogador1;
public:
    Entidade* alvo;
    Jogador(bool jogador1);
    ~Jogador();
    void Move();
    void Executar();
};

