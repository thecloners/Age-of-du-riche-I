#include "guerrier.hpp" // Bon header! (c'est moi qui l'ai ajouté)


using namespace std;



Guerrier::Guerrier(sf::Vector2f Position) : Personnage(
                    200,
                    150,
                    70,
                    10,
                    100,
                    100,
                    100,
                    2,
                    Position
) {}

void Guerrier::draw(sf::RenderTarget& target, sf::RenderStates states) const {

    sf::CircleShape guerrier(5);

    if(getSelection()==true) {
        guerrier.setOutlineThickness(4);
        guerrier.setOutlineColor(sf::Color(250, 150, 100));
    } else {
        guerrier.setOutlineThickness(1);
    }

    guerrier.setFillColor(sf::Color(250, 250, 50));
    guerrier.setPosition(Personnage::getPosition());
    target.draw(guerrier);


    sf::ConvexShape vie0;
    vie0.setPointCount(4);
    vie0.setPoint(0, sf::Vector2f(-10.f, 5.f));
    vie0.setPoint(1, sf::Vector2f(-10.f, 10.f));
    vie0.setPoint(2, sf::Vector2f(20.f, 10.f));
    vie0.setPoint(3, sf::Vector2f(20.f, 5.f));
    vie0.setFillColor(sf::Color(250, 0, 0));
    vie0.setPosition(Personnage::getPosition().x, Personnage::getPosition().y -20);
    target.draw(vie0);

    sf::ConvexShape vie;
    vie.setPointCount(4);
    vie.setPoint(0, sf::Vector2f(-10.f, 5.f));
    vie.setPoint(1, sf::Vector2f(-10.f, 10.f));
    vie.setPoint(2, sf::Vector2f(Personnage::getVie()*0.2, 10.f));
    vie.setPoint(3, sf::Vector2f(Personnage::getVie()*0.2, 5.f));
    vie.setFillColor(sf::Color(124, 252, 0));
    vie.setPosition(Personnage::getPosition().x, Personnage::getPosition().y -20);
    target.draw(vie);

    sf::ConvexShape chapeau;
    chapeau.setPointCount(4);
    chapeau.setPoint(0, sf::Vector2f(-10.f, 0.f));
    chapeau.setPoint(1, sf::Vector2f(5.f, -10.f));
    chapeau.setPoint(2, sf::Vector2f(20, 0.f));
    chapeau.setFillColor(sf::Color(0, 0 , 255));
    chapeau.setPosition(Personnage::getPosition().x, Personnage::getPosition().y);
    target.draw(chapeau);

    sf::ConvexShape epee;

    epee.setPointCount(4);
    epee.setPoint(0, sf::Vector2f(5.f, 2.5));
    epee.setPoint(1, sf::Vector2f(5.f, 7.f));
    epee.setPoint(2, sf::Vector2f(20.f, -7.f));
    epee.setPoint(3, sf::Vector2f(20.f, -15.f));
    epee.setFillColor(sf::Color(211, 211, 211));
    epee.setPosition(Personnage::getPosition());
    target.draw(epee);

}
