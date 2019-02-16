#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "personnage.hpp"
using namespace std;

Personnage::Personnage()
{
      mVie = 100;
      mVieMax = 100;
      mDegat = 100;
      mcible = {100,100};
      mPortee = 100;
      mPosition = {100, 100};
}
 void Corps::draw(sf::RenderTarget& target, sf::RenderStates states) const {
   sf::Texture texture;
 //  if(Corps=="terre") {
     if (!texture.loadFromFile("earth1.png"))
     {
       // erreur...
     }
 //  }

     sf::CircleShape le_corps(rayon);
     le_corps.setTexture(&texture);
     le_corps.setPosition(coords);
     le_corps.setOutlineThickness(10.f);
     le_corps.setOutlineColor(sf::Color(49, 140, 231));

     target.draw(le_corps);
 }
