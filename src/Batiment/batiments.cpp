#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "batiments.hpp"
using namespace std;

void Batiments::recevoirDegats(int degats)
{

  pv -= degats;
}

// Alors cette fonction la permet de faire un window.draw(batiment)
// RenderTarget représente la window
// Donc si vous avez un RectangleShape à dessiner,
// Vous faites RenderTarget.draw(tiboInShape);
virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const
{
  
}
