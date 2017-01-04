#include <SFML/Graphics.hpp>
#include"TextLabel.h"
#include"Button.h"
#include<iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 350), "SFML-UI");

	sf::Font font;
	
	if (!font.loadFromFile("arial.ttf")) {

	}

	// Creating a text object
	ui::TextLabel *test;
	test = new ui::TextLabel(font, "Hello World", 34);
	test->centerText(window);

	// Creating a button object
	ui::Button *button;
	button = new ui::Button(sf::Vector2f(75, 30), sf::Color::Blue);

	button->SetRectPosition(sf::Vector2f(40, 40));

	button->setFont(font);
	button->setCharSize(20);
	button->setString("Play");
	button->centerTextWithinRect(); 

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::MouseButtonPressed) {
				if (button->isMouseInside(static_cast<sf::Vector2f>(sf::Mouse::getPosition(window)))) {
					printf("Star Game");
				}
			}
		}

		window.clear();

		test->draw(window);
		button->draw(window);
		//buttonPointer->draw(window);

		window.display();
	}

	return 0;
}
