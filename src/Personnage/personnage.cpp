/*#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "personnage.hpp"
#include "../hitbox.hpp"
using namespace std;

Personnage::Personnage(
                      int Vie,
                      int Degat,
                      int Portee,
                      int CoutEnOr,
                      int CoutEnNourriture,
                      int CoutEnBois,
                      int CoutEnPierre,
                      sf::Vector2f Position)
                      : mVie(Vie),
                      mVieMax(Vie),
                      mDegat(Degat),
                      mPortee(Portee),
                      mCoutEnOr(CoutEnOr),
                      mCoutEnNourriture(CoutEnNourriture),
                      mCoutEnBois(CoutEnBois),
                      mCoutEnPierre(CoutEnPierre),
                      mPosition( Position){
}

//}


sf::Vector2f Personnage::getPosition() const
{
  return mPosition;
}


Hitbox Personnage::getDefensiveHitbox(){
  return Hitbox(getPosition(), sf::Vector2f(10, 10));
}
*/
