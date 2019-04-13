#ifndef HITBOX_
#define HITBOX_
#include <SFML/Graphics.hpp>
#include <iostream>


//typedef enum {cercle,rectangle,quadrilatere} hitbox_t;

class Hitbox : public sf::Drawable
{
  private:

      sf::Vector2f mSommet1;
      sf::Vector2f mSommet2;
      sf::Vector2f mSommet3;
      sf::Vector2f mSommet4;

  public:
    bool mAction;

    Hitbox(sf::Vector2f p1,sf::Vector2f p2,sf::Vector2f p3,sf::Vector2f p4);
    Hitbox(sf::Vector2f p, sf::Vector2f taille);
};
//lien collisions
//https://openclassrooms.com/fr/courses/1374826-theorie-des-collisions/1375352-formes-plus-complexes

Vector2f Tsommet [4]={mSommet1,mSommet2,mSommet3,mSommet4};


  int i;
  for(i=0;i<4;i++)
  {
     Point A = tab[i];
     Point B;
     if (i==4-1)  // si c'est le dernier point, on relie au premier
         B = tab[0];
     else           // sinon on relie au suivant.
         B = tab[i+1];
     Vecteur D,T;
     D.x = B.x - A.x;
     D.y = B.y - A.y;
     T.x = P.x - A.x;
     T.y = P.y - A.y;
     float d = D.x*T.y - D.y*T.x;
     if (d<=0)
        return false;  // un point à droite et on arrête tout.
  }
  return true;  // si on sort du for, c'est qu'aucun point n'est à gauche, donc c'est bon.
}

#endif
