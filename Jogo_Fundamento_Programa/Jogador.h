#pragma once
#include "Entidade.h"
class Jogador :
    public Entidade
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

