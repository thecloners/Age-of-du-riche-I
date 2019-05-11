#ifndef HITBOX_
#define HITBOX_

#include <SFML/Graphics.hpp>
#include <iostream>
#include "hitbox.hpp"

//typedef enum {cercle,rectangle,quadrilatere} hitbox_t;




class Hitbox : public sf::Drawable
{
  private:

      sf::Vector2f mSommet1;
      sf::Vector2f mSommet2;
      sf::Vector2f mSommet3;
      sf::Vector2f mSommet4;

  public:


    Hitbox(sf::Vector2f p1,sf::Vector2f p2,sf::Vector2f p3,sf::Vector2f p4);
    Hitbox(sf::Vector2f p, sf::Vector2f taille);
    Hitbox();
    Hitbox(sf::Vector2f p, unsigned int tailleX, unsigned int tailleY);
};
//lien collisions
//https://openclassrooms.com/fr/courses/1374826-theorie-des-collisions/1375352-formes-plus-complexes


#endif
