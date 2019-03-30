#ifndef PERSONNAGE
#define PERSONNAGE

#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
class Personnage : public sf::Drawable
{
    private:
      sf::Vector2f mCible;
      sf::Vector2f mPosition; // Ouais, pas mal. On attaque donc juste sur une position

      int mVie;
      int mVieMax;

      int mDegat;
      int mPortee; // Parfait

      int mCoutEnOr;
      int mCoutEnNourriture;
      int mCoutEnBois;
      int mCoutEnPierre;
      virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
      // Pourquoi vous avez commenté ça?



    public:
          Personnage(int Vie, int Degat, int Portee, int CoutEnOr, int CoutEnNourriture, int CoutEnBois, int CoutEnPierre, sf::Vector2f Position);
      //Personnage(
      //    int VieMax,
      //    int Position,
      //    int CoutEnOr,
      //    int CoutEnBois,
      //    int CoutEnNourriture,
      //    int CoutEnPierre,
      //    int Portee
      //);
    //  void definirCible();
    //  void definirennemi();
    //  void peutattaquercible();
    //  void mouvement();
    //  void attaque();
    //  void getporte();
    //  void evoluer();




};

#endif
