#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "personnage.hpp"
#include "../hitbox.hpp"
#include "math.h"
#include "../Case/case.hpp"
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

Personnage::~Personnage() {
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
 void Personnage::setSelection(bool selection){
      mselection = selection;
}

void Personnage::setVie(int vie){
  mVie=vie;
}

int Personnage::getVie() const {
  return mVie;
}

void Personnage::deplacement(Case mCarte[50][50], int tailleCase){
    int i = ( (int (mPosition.x) + int ((getCible().x- getPosition().x) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2))))) - (int (mPosition.x) + int ((getCible().x- getPosition().x) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2))))) % tailleCase)/tailleCase;
    int j = ((int (mPosition.y) + int ((getCible().y - getPosition().y) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2))))) - (int (mPosition.y) + int ((getCible().y - getPosition().y) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2))))) % tailleCase ) /tailleCase;
    if( mCarte[i][j].returnTypeCase() == roche)
        return;
    if((abs(mPosition.x-getCible().x)>1) || (abs(mPosition.y-getCible().y)>1)) {
        mPosition.x += (getCible().x- getPosition().x) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2)));
        mPosition.y += (getCible().y - getPosition().y) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2)));
      }

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
