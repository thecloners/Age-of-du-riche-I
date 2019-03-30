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
                      Position
) {}
void Villageois::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    sf::CircleShape villageois(100);
    villageois.setFillColor(sf::Color(250, 250, 50));
    villageois.setPosition(Personnage::getPosition());
    target.draw(villageois);
}
