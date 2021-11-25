#include "Menu.h"

Menu::Menu(Gerenciador_Grafico* gerenciador)
{
	this->gerenciador = gerenciador;
	atual = 0;
}

Menu::~Menu()
{
}

void Menu::Executar()
{
	switch (atual)
	{
	case 0:
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(*gerenciador->window).x > 525.0f && sf::Mouse::getPosition(*gerenciador->window).x < 1025.0f && sf::Mouse::getPosition(*gerenciador->window).y > 200.0f && sf::Mouse::getPosition(*gerenciador->window).y < 275.0f)
		{
			//Ver níveis
			atual = 1;
		}
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(*gerenciador->window).x > 525.0f && sf::Mouse::getPosition(*gerenciador->window).x < 1025.0f && sf::Mouse::getPosition(*gerenciador->window).y > 400.0f && sf::Mouse::getPosition(*gerenciador->window).y < 475.0f)
		{
			//Sair do jogo
			gerenciador->window->close();
		}
		break;
	}
	Imprimir_se();
}

void Menu::Imprimir_se()
{
	gerenciador->window->clear();
	sf::RectangleShape background = sf::RectangleShape(sf::Vector2f(1600.0f, 800.0f));
	background.setFillColor(sf::Color::Green);
	sf::Font font;
	font.loadFromFile("arial.ttf");
	gerenciador->window->draw(background);
	switch (atual)
	{
	case 0:
		sf::Text title = sf::Text("Reality Base", font, 100);
		title.setOutlineColor(sf::Color::Red);
		title.setFillColor(sf::Color::Red);
		title.setPosition(sf::Vector2f(500.0f, 50.0f));

		sf::RectangleShape baseButton = sf::RectangleShape(sf::Vector2f(500.0f, 75.0f));
		baseButton.setPosition(sf::Vector2f(525.0f, 200.0f));
		//
		sf::Text text = sf::Text("Play", font, 50);
		text.setFillColor(sf::Color::Black);
		text.setPosition(sf::Vector2f(730.0f, 200.0f));

		
		gerenciador->window->draw(title);
		gerenciador->window->draw(baseButton);
		gerenciador->window->draw(text);

		baseButton.setPosition(sf::Vector2f(525.0f, 300.0f));
		text.setPosition(sf::Vector2f(690.0f, 300.0f));
		text.setString("Ranking");
		gerenciador->window->draw(baseButton);
		gerenciador->window->draw(text);

		baseButton.setPosition(sf::Vector2f(525.0f, 400.0f));
		text.setPosition(sf::Vector2f(730.0f, 400.0f));
		text.setString("Exit");
		gerenciador->window->draw(baseButton);
		gerenciador->window->draw(text);
		break;
	}
	gerenciador->window->display();
}
