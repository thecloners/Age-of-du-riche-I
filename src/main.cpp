#include "Personnage/personnage.hpp"
#include "Personnage/personnage.cpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Age Of Du Pauvre v0.01");
    //sf::CircleShape shape(100.f);
    //shape.setFillColor(sf::Color::Green);
    Personnage perso();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.draw(perso()); // Appelle la fonction draw de Personnage
        perso().getporte();   // Appelle getporte
        // Personnage getporte(); // Mauvaise syntaxe!!, c'est perso.getporte();
    }

    return 0;

}
