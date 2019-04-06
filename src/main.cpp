#include <SFML/Graphics.hpp>
#include "partie.hpp"


int main()
{
    Partie partie;
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Age Of Du Riche v0.01");
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
    sf::Time GeneralTime;



    return 0;
}
