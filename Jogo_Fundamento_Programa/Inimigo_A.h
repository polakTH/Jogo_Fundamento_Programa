#pragma once
#include "Inimigo.h"
#include "Jogador.h"
#include "Fase.H"
class Inimigo_A :
    public Inimigo
{
private:
public:
    Inimigo_A(Jogador* jogador1, Jogador* jogador2);
    ~Inimigo_A();
    void AtualizarAlvo();
    void Executar();
};

