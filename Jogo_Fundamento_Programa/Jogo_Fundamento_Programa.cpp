// Jogo_Fundamento_Programa.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 400), "Jogo");
    sf::RectangleShape shape(sf::Vector2f(100.0f,100.0f));
    shape.setPosition(sf::Vector2f(400.0f, 200.0f));
    shape.setFillColor(sf::Color::Magenta);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            shape.move(sf::Vector2f(0.1f, 0.0f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            shape.move(sf::Vector2f(-0.1f, 0.0f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            shape.move(sf::Vector2f(0.0f, -0.1f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            shape.move(sf::Vector2f(0.0f, 0.1f));
        }
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
