#include "personnage.hpp"


using namespace std;

Personnage::Villageois()
{
      mVie = 25;
      mVieMax = 25;
      mDegat = 3;
      mcible = {100,100};
      mPortee = 1;
      mPosition = {100, 100};
}
