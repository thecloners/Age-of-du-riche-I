#include <SFML/Graphics.hpp>
#include "partie.hpp"

#define TAILLE_FENETRE 1000
int main()
{
    Partie partie;
    sf::RenderWindow window(sf::VideoMode(TAILLE_FENETRE, TAILLE_FENETRE), "Age Of Du Riche v0.01");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            else
                partie.sendEvent(event);
        }
        partie.update();
        window.clear();
        window.draw(partie);
        window.display();
    }

    return 0;
}
