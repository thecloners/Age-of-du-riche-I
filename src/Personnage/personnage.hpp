#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;

#ifndef PERSONNAGE
#define PERSONNAGE

class Personnage //: public sf::Drawable{
{

    private:
      sf::Vector2f mPositionEnnemi;
      int mVie;
      int mVieMax;
      sf::Vector2f mPosition;
      int mDegat;
      int mPortee;
      sf::Vector2f mcible;
      int coupEnOr;
      int coupEnNourriture;
      int coupEnBois;
      int coupEnPierre;
      //virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;




    public:
      Personnage();
      void dessiner(sf::Vector2f position);
      void definircible();
      void definirennemi();
      void peutattaquercible();
      void mouvement();
      void attaque();
      void getporte();
      void evoluer();




};
#endif
