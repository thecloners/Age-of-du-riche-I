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
          int mVie;
          Personnage(int Vie, int Degat, int Portee, int CoutEnOr, int CoutEnNourriture, int CoutEnBois, int CoutEnPierre, int vitesse, sf::Vector2f Position);
          ~Personnage();
          Hitbox getDefensiveHitbox();
          Hitbox getOffensiveHitbox();
          void deplacement();
      //Personnage(
      //    int VieMax,
      //    int Position,
      //    int CoutEnOr,
      //    int CoutEnBois,
      //    int CoutEnNourriture,
      //    int CoutEnPierre,
      //    int Portee
      //);
        int getVie() const;
        void setVie(int vie);
        void donneesBatiment(std::vector<Batiment*> batiments);
        void setSelection(bool selection );
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
