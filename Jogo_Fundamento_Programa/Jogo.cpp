#include "Jogo.h"

Jogo::Jogo()
{
    gerenciador_graf = new Gerenciador_Grafico();
    jogador1 = new Jogador(true);
    jogador1->setGerenciador(gerenciador_graf);
    jogador2 = new Jogador(false);
    jogador2->setGerenciador(gerenciador_graf);
    fase1 = new Fase(jogador1, jogador2, gerenciador_graf);
    LEs = fase1->getListaEntidades();
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
        gerenciador_graf->window->clear();
        for(int i = 0; i < LEs->LEs.Length();i++)
        {
            Entidade* temp = LEs->LEs.getItem(i);
            temp->Executar();
            sf::RectangleShape* shape = temp->getSprite();
            gerenciador_graf->window->draw(*shape);
        }
        if(gerenciador_colid->Colidindo(jogador1,jogador2))
        {
            sf::CircleShape shape(100.f);
            shape.setFillColor(sf::Color::Green);
            gerenciador_graf->window->draw(shape);
        }
        gerenciador_graf->window->display();

    }
}
