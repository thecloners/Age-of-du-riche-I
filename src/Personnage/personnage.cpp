#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "personnage.hpp"
using namespace std;

Personnage::Personnage(int Vie, int Degat, int Portee, int CoutEnOr,int CoutEnNourriture, int CoutEnBois, int CoutEnPierre) : mVie(Vie), mVieMax(Vie), mDegat(Degat), mPortee(Portee), mCoutEnOr(CoutEnOr), mCoutEnNourriture(CoutEnNourriture), mCoutEnBois(CoutEnBois), mCoutEnPierre(CoutEnPierre){


}

//}
 void Personnage::draw(sf::RenderTarget& target, sf::RenderStates states) const {
     sf::CircleShape personnage(100);
     personnage.setFillColor(sf::Color(100, 250, 50));
     personnage.setPosition(mPosition);
     target.draw(personnage);
 }
