#ifndef HITBOX_
#define HITBOX_

#include <SFML/Graphics.hpp>
#include <iostream>

class Hitbox
{
  public:

  sf::Vector2f mSommet1;
  sf::Vector2f mSommet2;
  sf::Vector2f mSommet3;
  sf::Vector2f mSommet4;

    Hitbox(sf::Vector2f p1,sf::Vector2f p2,sf::Vector2f p3,sf::Vector2f p4);
    Hitbox(sf::Vector2f p, sf::Vector2f taille);
    Hitbox();
    Hitbox(sf::Vector2f p, unsigned int tailleX, unsigned int tailleY);

};

bool ccw(sf::Vector2f A, sf::Vector2f B, sf::Vector2f C);
bool lines_intersect(sf::Vector2f A, sf::Vector2f B, sf::Vector2f C,sf::Vector2f D);
bool collisions(Hitbox obj1, Hitbox obj2);


#endif
