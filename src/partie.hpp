#ifndef PART_
#define PART_

#include <iostream>


class Partie
{
    private :

 int mNbJoueur;
 int taillePlateau;
 int mNbTour;
void genereMap();

    public :
 std::string nomParti;
 void affichPlateau(int taille);
 void win();
 
 void run();


};
#endif
