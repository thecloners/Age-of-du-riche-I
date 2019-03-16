#include "personnage.hpp" // Mauvais header! 
#include "villageois.hpp" // Bon header! (c'est moi qui l'ai ajouté)
 

using namespace std;


// RHAA!! Pas BEAU!!!
// Tu veux construire Villageois, pas Personnage!!
Personnage::Villageois() // Mauvais! 
Villageois::Villageois() // Valide!
Villageois::Villageois() : Personnage(vieMax, Degat, Portee) // Encore plus valide, la on construit l'objet mère
{
      mVie = 25;              // Bien tenté, mais non.
      mVieMax = 25;           // On doit venir passer ces arguments au constructeur
      mDegat = 3;             // De personnage, comme dans la 3eme definition de fonction
      mcible = {100,100};
      mPortee = 1;
      mPosition = {100, 100};
}
