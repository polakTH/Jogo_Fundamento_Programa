#include "Jogo.h"

Jogo::Jogo()
{

    gerenciador_graf = new Gerenciador_Grafico();
    jogador1 = new Jogador(true);
    jogador1->setGerenciador(gerenciador_graf);
    jogador2 = new Jogador(false);
    jogador2->setGerenciador(gerenciador_graf);
    fase1 = new Fase(jogador1, jogador2, gerenciador_graf);
    Executar();
}

Jogo::~Jogo()
{
}


void Jogo::Executar()
{
    while (gerenciador_graf->window->isOpen())
    {
        
        sf::Event event;
        while (gerenciador_graf->window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                gerenciador_graf->window->close();
        }
        fase1->Executar();
    }
}
