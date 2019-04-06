#ifndef HITBOX_
#define HITBOX_
#include <SFML/Graphics.hpp>
#include <iostream>
#include "hitbox.hpp"

//typedef enum {cercle,rectangle,quadrilatere} hitbox_t;




class Hitbox : public sf::Drawable
{
  private:

      sf::Vector2f mArrete1;
      sf::Vector2f mArrete2;
      sf::Vector2f mArrete3;
      sf::Vector2f mArrete4;
      bool mAction;
  public:
    Hitbox(sf::Vector2f p1,sf::Vector2f p2,sf::Vector2f p3,sf::Vector2f p4);
    Hitbox(sf::Vector2f p, sf::Vector2f taille);

};
//lien collisions
//https://openclassrooms.com/fr/courses/1374826-theorie-des-collisions/1375352-formes-plus-complexes

#endif
