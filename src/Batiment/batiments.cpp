#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "batiments.hpp"


Batiment::Batiment (bat_t TypeBat, sf::Vector2f Position)
{
    mPosition = Position;
    mTypeBat = TypeBat;

    switch(mTypeBat)
    {
        case maison:
            mPV = 500;
        case moulin:
            mPV = 250;
        case chateau:
            mPV = 1500;
    }
}

Batiment::~Batiment(){

}

void Batiment::recevoirDegats(int degats)
{
  mPV -= degats;
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
    mTriangle.setFillColor(sf::Color(132, 46, 27));
     mTriangle.setPosition(10.f, 50.f);
     target.draw(mTriangle);

}
