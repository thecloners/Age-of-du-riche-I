#include <SFML/Graphics.hpp>
#include "Batiment/batiments.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Age Of Du Riche v 0.01");
    Batiment bat7; 
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(bat7);
        window.display();
    }

    return 0;
}