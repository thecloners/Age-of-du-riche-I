#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;

#ifndef PERSONNAGE
#define PERSONNAGE

class Personnage : public sf::Drawable
{

    private:
      sf::Vector2f mPositionEnnemi; // Ouais, pas mal. On attaque donc juste sur une position
      int mVie;
      int mVieMax;
      sf::Vector2f mPosition;
      int mDegat;
      int mPortee; // Parfait
      sf::Vector2f mCible;
      int mCoutEnOr;
      int mCoutEnNourriture;
      int mCoutEnBois;
      int mCoutEnPierre;
      virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
      // Pourquoi vous avez commenté ça?



    public:
      Personnage(
          int VieMax,
          int Position,
          int CoutEnOr,
          int CoutEnBois,
          int CoutEnNourriture,
          int CoutEnPierre,
          int Portee
      );
      void definirCible();  // A renommer definirCible(); et peut être lui passer en argument des coords?
      void definirennemi(); // ouaais?
      void peutattaquercible(); // peutAttaquerCible(). Je vois pas trop à quoi ça sert mais vous devez savoir
      void mouvement();         // mmhh??
      void attaque();           // mmhhhhhh???
      void getporte();          // mmhmmmmhmhhh???
      void evoluer();           // WTF?!




};
#endif
