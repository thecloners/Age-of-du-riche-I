#include <SFML/Graphics.hpp>
#include "Batiment/batiments.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Age Of Du Riche v 0.01");
     // pas correct, Batiment() prends comme argument un sf::Vector2f. Pas deux floats
    // Batiment bat7(maison,50,50);
    Batiment bat7(maison, sf::Vector2f(50, 50)); // correct
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
