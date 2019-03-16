#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "batiments.hpp"
using namespace std;

void Batiment::recevoirDegats(int degats)
{
  mPV -= degats;
}

// Alors cette fonction la permet de faire un window.draw(batiment)
// RenderTarget représente la window
// Donc si vous avez un RectangleShape à dessiner,
// Vous faites RenderTarget.draw(tiboInShape);
void Batiment::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(RectangleShape)
}
