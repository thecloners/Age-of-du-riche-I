#ifndef PERSONNAGE
#define PERSONNAGE

#include <iostream>
#include <vector>

#include <SFML/Graphics.hpp>
#include <string>
#include "../hitbox.hpp"
#include "../Batiment/batiments.hpp"

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
      int mVitesse;

      bool mselection;
      int  mdonneesbatiment[10][10];

      // Pourquoi vous avez commenté ça?



    public:
          Personnage(int Vie, int Degat, int Portee, int CoutEnOr, int CoutEnNourriture, int CoutEnBois, int CoutEnPierre, int vitesse, sf::Vector2f Position);
          Hitbox getDefensiveHitbox();
          Hitbox getOffensiveHitbox();
          sf::Vector2f deplacement(float dt);
      //Personnage(
      //    int VieMax,
      //    int Position,
      //    int CoutEnOr,
      //    int CoutEnBois,
      //    int CoutEnNourriture,
      //    int CoutEnPierre,
      //    int Portee
      //);
        void donneesBatiment(std::vector<Batiment*> batiments);
        bool setSelection(bool selection );
        bool getSelection() const;
        sf::Vector2f getPosition() const;
        sf::Vector2f getCible() const;
        sf::Vector2f setCible(int x, int y);
    //  void definirennemi();
    //  void peutattaquercible();
    //  void mouvement();
    //  void attaque();
    //  void getporte();
    //  void evoluer();




};

#endif
