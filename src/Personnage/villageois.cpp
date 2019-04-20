#include "villageois.hpp" // Bon header! (c'est moi qui l'ai ajouté)


using namespace std;



Villageois::Villageois(sf::Vector2f Position) : Personnage(
                      100,
                      100,
                      50,
                      10,
                      100,
                      100,
                      100,
                      20,
                      Position
) {}
void Villageois::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    sf::CircleShape villageois(15);
    if(getSelection()==true) {
      villageois.setOutlineThickness(10);
      villageois.setOutlineColor(sf::Color(250, 150, 100));
    } else {
      villageois.setOutlineThickness(1);
    }
    villageois.setFillColor(sf::Color(250, 250, 50));
    villageois.setPosition(Personnage::getPosition());
    target.draw(villageois);

    sf::ConvexShape epee;

    epee.setPointCount(4);
    epee.setPoint(0, sf::Vector2f(10.f, 5.f));
    epee.setPoint(1, sf::Vector2f(10.f, 15.f));
    epee.setPoint(2, sf::Vector2f(50.f, -05.f));
    epee.setPoint(3, sf::Vector2f(50.f, -15.f));
    epee.setFillColor(sf::Color(250, 50, 50));
    epee.setPosition(Personnage::getPosition());
    target.draw(epee);
}
