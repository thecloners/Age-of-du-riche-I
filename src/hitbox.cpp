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

/*int Hitbox::collision()
{

}*/
