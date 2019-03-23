#include "Personnage/personnage.cpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Age Of Du Pauvre v0.01");

    Personnage michel;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Black);

        //window.draw(michel); // Appelle la fonction draw de Personnage
       window.display();
    }

    return 0;

}
