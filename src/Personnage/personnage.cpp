#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "personnage.hpp"
using namespace std;

Personnage::Personnage()
{
     mVie = 100;
     mVieMax = 100;
     mCible = {100,100};
     mPortee = 100;
     mPosition = {100, 100};
     mCoutEnOr = 1;
     mCoutEnBois = 1;
     mCoutEnPierre = 1;
     mCoutEnNourriture = 1;
     mDegat = 1;
}

Personnage::Personnage(int vie, int degat, int Portee, int CoupEnOr,int CoupEnNourriture, int CoupEnBois, int coupEnPierre) : m_vie(Vie), m_VieMAx(Vie), mDegat(Degat), mPortee(Portee), mCoupEnOr(CoupEnOr), mCoupEnNourriture(CoupEnNourriture), mCoupEnBois(CoupEnBois), mmCoupEnPierre(CoupEnPierre){


}

//}
 //void Personnage::draw(sf::RenderTarget& target, sf::RenderStates states) const {
//  sf::Texture texture;
  // if (!texture.loadFromFile("earth1.png"))
  // {

   //}

  //   sf::CircleShape personnage(10);
    // personnage.setFillColor(sf::Color(100, 250, 50));
     //personnage.setPosition(mPosition);
     //personnage.setOutlineThickness(10.f);
    // personnage.setOutlineColor(sf::Color(49, 140, 231));

  //   target.draw(personnage);
 //}
