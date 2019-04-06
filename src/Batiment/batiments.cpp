#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "batiments.hpp"
<<<<<<< HEAD
#include "hitbox.hpp"
=======
#include "../hitbox.hpp"
>>>>>>> 7c681236f501de6b19e23b0d2bdc2ad2f87de69c

Batiment::Batiment (bat_t TypeBat, sf::Vector2f Position)
{
    mPosition = Position;
    mTypeBat = TypeBat;

    switch(mTypeBat)
    {
        case maison:
            mPV = 500;
            mColor = sf::Color::Green;
            break;
        case moulin:
            mPV = 250;
            mColor = sf::Color::Blue;
            break;
        case chateau:
            mPV = 1500;
            mColor = sf::Color::Red;;
            break;
        default:
            mPV = 1;
            mColor = sf::Color::Black;
        break;
    }
}

Batiment::~Batiment(){

}

void Batiment::recevoirDegats(int degats)
{
  mPV -= degats;
  if(mPV<=0){
     ~Batiment
  }
}

void Batiment::returnPV()
{
std::cout << mPV << std::endl;
}

void Batiment::autoRegen ()
    {
sf::Time timeBat = sf::milliseconds(1000);
    //if mPv
    }

// Alors cette fonction la permet de faire un window.draw(batiment)
// RenderTarget représente la window
// Donc si vous avez un RectangleShape à dessiner,
// Vous faites RenderTarget.draw(tiboInShape);
void Batiment::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    sf::CircleShape mTriangle(80.f, 3);
    mTriangle.setFillColor(mColor);
    mTriangle.setPosition(mPosition);
    target.draw(mTriangle);

}
