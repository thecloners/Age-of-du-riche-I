#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "personnage.hpp"
using namespace std;

Personnage::Personnage(
      int VieMax,
      int Position,
      int CoutEnOr,
      int CoutEnBois,
      int CoutEnNourriture,
      int CoutEnPierre,
      int Portee
    )
{
      mVie = 100;
      mVieMax = 100;
      mDegat = 100;
      mCible = {100,100};
      mPortee = 100;
      mPosition = {100, 100};
      mCoutEnOr = 1;
      mCoutEnBois = 1;
      mCoutEnPierre = 1;
      mCoutEnNourriture = 1;
}
void Personnage::getporte() {
      std::cout << mPortee << std::endl;
}
 void Personnage::draw(sf::RenderTarget& target, sf::RenderStates states) const {
  sf::Texture texture;
  // if (!texture.loadFromFile("earth1.png"))
  // {

   //}

     sf::CircleShape personnage(10);
     personnage.setFillColor(sf::Color(100, 250, 50));
     personnage.setPosition(mPosition);
     personnage.setOutlineThickness(10.f);
     personnage.setOutlineColor(sf::Color(49, 140, 231));

     target.draw(personnage);
 }
