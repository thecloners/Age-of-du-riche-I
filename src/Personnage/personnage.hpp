#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;

#ifndef PERSONNAGE
#define PERSONNAGE

class Personnage //: public sf::Drawable{
{

    private:
      int mVie;
      int mVieMax;
      sf::Vector2f mPosition;
      int mDegat;
      int mPortee;
      sf::Vector2f mcible;
      //virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;




    public:
      Personnage();
      void dessiner(sf::Vector2f position);
      void definircible();
      void mouvement();
      void attaque();
      void getporte();



};
#endif
