#pragma once
#include "Ente.h"
class Menu :
    public Ente
{
private:
    int atual;
public:
    Menu(Gerenciador_Grafico* gerenciador);
    ~Menu();
    void Executar();
    void Imprimir_se();
};

