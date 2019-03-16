#include "villageois.hpp" // Bon header! (c'est moi qui l'ai ajouté)


using namespace std;



// Tu veux construire Villageois, pas Personnage!!
Villageois::Villageois() : Personnage(
      int vieMax,
      int Degat,
      int Portee,
      int Vie,
      int Cible,
      int position
)

{
      mVie = Vie;              // Bien tenté, mais non.
      mVieMax = vieMax;           // On doit venir passer ces arguments au constructeur
      mDegat = Degat;             // De personnage, comme dans la 3eme definition de fonction
      mCible = Cible;
      mPortee = Portee;
      mPosition = position;
}
