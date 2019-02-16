#ifndef PART_
#define PART_

#include <iostream>


class Partie
{
    private :

 int mNbJoueur;
 int mNbTour;

 void genereMap();

    public :
 std::string nomParti;
 void affichPlateau();
 void win();

 void run();


};
#endif
