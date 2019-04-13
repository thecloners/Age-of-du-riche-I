#include "hitbox.hpp"

Hitbox::Hitbox(sf::Vector2f p1,sf::Vector2f p2,sf::Vector2f p3,sf::Vector2f p4)
{
    mSommet1 = p1;
    mSommet2 = p2;
    mSommet3 = p3;
    mSommet4 = p4;
}

Hitbox::Hitbox(sf::Vector2f p, sf::Vector2f taille)
{
    mSommet1 = p;
    mSommet2.x = p.x + taille.x;
    mSommet2.y = p.y;
    mSommet3 = p + taille;
    mSommet4.x = p.x;
    mSommet4.y = p.y + taille.y;
}

Hitbox::Hitbox(sf::Vector2f p, unsigned int tailleX, unsigned int tailleY)
{
    mSommet1 = p;
    mSommet2.x = p.x + tailleX;
    mSommet2.y = p.y;
    mSommet3.x = p.x + tailleX;
    mSommet3.Y = p.Y + tailleY;
    mSommet4.x = p.x;
    mSommet4.y = p.y + tailleY;
}
Hitbox::Hitbox()
{
    sf::Vector2f p(0.f,0.f);
    mSommet1 = p;
    mSommet2 = p;
    mSommet3 = p;
    mSommet4 = p;

}

/*bool Hitbox::Collision()
{

}*/
