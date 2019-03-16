#include "Personnage/villageois/villageois.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Age Of Du Pauvre v0.01");

    Villageois personnage();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.draw(personnage()); // Appelle la fonction draw de Personnage
    }

    return 0;

}
