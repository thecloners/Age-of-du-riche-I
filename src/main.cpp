#include "Personnage/personnage.hpp"
#include "Personnage/villageois.hpp"


int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Age Of Du Pauvre v0.01");

    Villageois michel(sf::Vector2f(250, 250));
    Villageois jean(sf::Vector2f(550, 250));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
              }
              if (event.type == sf::Event::MouseButtonPressed)
                {
                  if (event.mouseButton.button == sf::Mouse::Left)
                  {
                      std::cout << "the right button was pressed" << std::endl;
                      std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                      std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                  }
                }
        window.clear(sf::Color::Black);



        window.draw(michel);
        window.draw(jean);
       window.display();
    }

    return 0;

}
