#include "villageois.hpp" // Bon header! (c'est moi qui l'ai ajouté)


using namespace std;



// Tu veux construire Villageois, pas Personnage!!
Villageois::Villageois(int x, int y) : Personnage(
      50,
      35,
      2,
      100,
      sf::Vector2f(x, y)
)
