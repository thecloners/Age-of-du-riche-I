#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "personnage.hpp"
#include "../hitbox.hpp"
#include "math.h"

using namespace std;
using namespace sf;

Personnage::Personnage(
                      int Vie,
                      int Degat,
                      int Portee,
                      int CoutEnOr,
                      int CoutEnNourriture,
                      int CoutEnBois,
                      int CoutEnPierre,
                      int vitesse,
                      sf::Vector2f Position)
                      : mVie(Vie),
                      mVieMax(Vie),
                      mDegat(Degat),
                      mPortee(Portee),
                      mCoutEnOr(CoutEnOr),
                      mCoutEnNourriture(CoutEnNourriture),
                      mCoutEnBois(CoutEnBois),
                      mCoutEnPierre(CoutEnPierre),
                      mVitesse(vitesse),
                      mPosition( Position){
}

//}


sf::Vector2f Personnage::getPosition() const
{
  return mPosition;
}

sf::Vector2f Personnage::getCible() const
{
  return mCible;
}


Hitbox Personnage::getDefensiveHitbox(){
  return Hitbox(getPosition(), sf::Vector2f(10, 10));
}

Hitbox Personnage::getOffensiveHitbox(){
  return Hitbox(getPosition(), sf::Vector2f(10, 10));
}

bool Personnage::getSelection() const {
  return mselection;
}
 bool Personnage::setSelection(bool selection){
      mselection = selection;
      return mselection;
}

void Personnage::deplacement(){
    mPosition.x += (getCible().x- getPosition().x) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2)));
    mPosition.y += (getCible().y - getPosition().y) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2)));

}





/*sf::Vector2f Personnage::deplacement(float dt) {
      if(abs(getPosition().x - getCible().x) >= 5) {
          if(getPosition().x < getCible().x){
                  mPosition.x+=mVitesse*dt;
          } else {
                    mPosition.x-=mVitesse*dt;
          }
      }

      if(abs(getPosition().y - getCible().y) >= 5) {
          if(getPosition().y<getCible().y){
              mPosition.y+=mVitesse*dt;
          } else {
              mPosition.y-=mVitesse*dt;
          }
      }
      cout << mPosition.x << " " << mPosition.y << endl;
      return mPosition;
}*/

sf::Vector2f Personnage::setCible(int x,int y) {
      mCible.x=x;
      mCible.y=y;
      return mCible;
}
