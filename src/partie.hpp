#ifndef PART_
#define PART_

#include <iostream>
#include <SFML/Graphics.hpp>

// On hérite de la classe Drawable qui nous permet de nous faire dessiner

class Partie : public sf::Drawable
{
    private :

 int mNbJoueur;
 int mNbTour;
void genereMap();
Case mCases[TAILLE_PLATEAU][TAILLE_PLATEAU];
    public :
 std::string nomParti;
 void affichPlateau(int taille);
 void win();

 void run();


};
#endif
