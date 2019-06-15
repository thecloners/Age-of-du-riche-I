#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "personnage.hpp"
#include "../hitbox.hpp"
#include "math.h"
#include "../Case/case.hpp"
#include <time.h>
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
                      sf::Vector2f Position,
                      int equipe)
                      : mVie(Vie),
                      mVieMax(Vie),
                      mDegat(Degat),
                      mPortee(Portee),
                      mCoutEnOr(CoutEnOr),
                      mCoutEnNourriture(CoutEnNourriture),
                      mCoutEnBois(CoutEnBois),
                      mCoutEnPierre(CoutEnPierre),
                      mVitesse(vitesse),
                      mPosition( Position),
                      mequipe(equipe)
                      {

                          //sf::Clock clock;
                          //mClock = clock.getElapsedTime();
                      }

Personnage::~Personnage() {
}

//}

int Personnage::getEquipe() const {
  return mequipe;
}

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

    float a,b;
    int i,j;

    a = mPosition.x + ( (getCible().x - getPosition().x) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2))) );
    b = mPosition.y + ( (getCible().y - getPosition().y) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2))) );

    i = (int(a) - (int(a) % tailleCase)) / tailleCase;
    j = (int(b) - (int(b) % tailleCase)) / tailleCase;

    if( mCarte[i][j].returnTypeCase() == roche)
        return;

    //mClock = clock.getElapsedTime();

    if((abs(mPosition.x-getCible().x)>1) || (abs(mPosition.y-getCible().y)>1)) {
        mPosition.x += /*mClock.asMilliseconds() */ mVitesse * ( (getCible().x - getPosition().x) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2))));
        mPosition.y += /*mClock.asMilliseconds() */ mVitesse * ( (getCible().y - getPosition().y) / (sqrt(pow(getPosition().x-getCible().x, 2) + pow(getPosition().y-getCible().y, 2))));
    }

    //clock.restart();

}

sf::Vector2f Personnage::setCible(int x,int y) {
      mCible.x=x;
      mCible.y=y;
      return mCible;
}
