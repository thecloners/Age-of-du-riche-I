#include "hitbox.hpp"

Hitbox::Hitbox(sf::Vector2f p1,sf::Vector2f p2,sf::Vector2f p3,sf::Vector2f p4)
{
    mArrete1 = p1;
    mArrete2 = p2;
    mArrete3 = p3;
    mArrete4 = p4;
}

Hitbox::Hitbox(sf::Vector2f p, sf::Vector2f taille)
{
    mArrete1 = p;
    mArrete2.x = p.x + taille.x;
    mArrete2.y = p.y;
    mArrete3 = p + taille;
    mArrete4.x = p.x;
    mArrete4.y = p.y + taille.y;
}

void Hitbox::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    sf::ConvexShape convex;

    // définit le nombre de points (5)
    convex.setPointCount(4);

    // définit les points
    convex.setPoint(0, mArrete1);
    convex.setPoint(1, mArrete2);
    convex.setPoint(2, mArrete3);
    convex.setPoint(3, mArrete4);
    target.draw(convex);
}
/*bool Hitbox::Collision()
{

}*/
