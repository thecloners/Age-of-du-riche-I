#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;

#ifndef PERSONNAGE
#define PERSONNAGE

class Personnage //: public sf::Drawable{
{

    private:
      sf::Vector2f mPositionEnnemi; // Ouais, pas mal. On attaque donc juste sur une position
      int mVie;
      int mVieMax;
      sf::Vector2f mPosition; 
      int mDegat;
      int mPortee; // Parfait
      sf::Vector2f mcible; // A renommer mCible
      int mCoupEnOr; // Super les gars! Juste c'est pas coup mais cout haha
      int mCoupEnNourriture;
      int mCoupEnBois;
      int mCoupEnPierre;
      //virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
      // Pourquoi vous avez commenté ça?



    public:
      Personnage(); // Il faut pouvoir passer des arguments! (les couts, la portee, etc)
                    // Sinon la classe fille pourra pas modifier les modifier
                    
      void dessiner(sf::Vector2f position); // Utiliser le virtual void draw de sf::Drawable!
      void definircible();  // A renommer definirCible(); et peut être lui passer en argument des coords?
      void definirennemi(); // ouaais?
      void peutattaquercible(); // peutAttaquerCible(). Je vois pas trop à quoi ça sert mais vous devez savoir
      void mouvement();         // mmhh??
      void attaque();           // mmhhhhhh???
      void getporte();          // mmhmmmmhmhhh???
      void evoluer();           // WTF?!




};
#endif
