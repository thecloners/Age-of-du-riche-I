#ifndef PART_
#define PART_

#include <iostream>
#define TAILLE_PLATEAU

class Partie
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
