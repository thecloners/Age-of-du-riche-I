#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "batiments.hpp"


Batiment::Batiment (bat_t nom, sf::Vector2f Position)
{
    mPosition = Position;
}

Batiment::~Batiment()
{

}
void Batiment::recevoirDegats(int degats)
{
  mPV -= degats;
}
void Batiment::autoRegen ()
    {
sf::Time timeBat = sf::milliseconds(1000);
    if mPv 
    }



// Alors cette fonction la permet de faire un window.draw(batiment)
// RenderTarget représente la window
// Donc si vous avez un RectangleShape à dessiner,
// Vous faites RenderTarget.draw(tiboInShape);
void Batiment::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw();
}
