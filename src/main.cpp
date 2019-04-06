#include <SFML/Graphics.hpp>
#include "Batiment/batiments.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Age Of Du Riche v 0.01");

    Batiment bat7(moulin, sf::Vector2f(500, 500));
    bat7.returnPV();
    while ( window.isOpen() )
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.draw(bat7);
        window.display();
    }



    return 0;
}
