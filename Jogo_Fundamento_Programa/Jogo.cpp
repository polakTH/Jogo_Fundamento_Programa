#include "Jogo.h"

Jogo::Jogo(): window(sf::VideoMode(800, 400), "Jogo")
{
    jogador1 = new Jogador();
    jogador1->SetWindow(&window);
    fase1 = new Fase(jogador1,&window);
    LEs = fase1->getListaEntidades();
    Executar();
}

Jogo::~Jogo()
{
}

void Jogo::Executar()
{
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        jogador1->Move();
        window.clear();
        for(int i = 0; i < LEs->LEs.Length();i++)
        {
            Entidade* temp = LEs->LEs.getItem(i);
            temp->draw();
        }
        window.display();
    }
}
