#pragma once
#include "Ente.h"
#include "Fase.h"
#include "Fase_1.h"
class Menu :
    public Ente
{
private:
    int atual;
    bool holdingMouse;
    int* level;
    bool* twoPlayers;
public:
    Menu(Gerenciador_Grafico* gerenciador, int* level, bool* twoPlayers);
    ~Menu();
    void Executar();
    void Imprimir_se();
};

