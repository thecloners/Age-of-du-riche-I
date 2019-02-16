#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "personnage.hpp"
using namespace std;

Personnage::Personnage()
{
      mvie = 100;
      mVieMax = 100;
      mDegat = 100;
      mcible = {100,100};
      mPortee = 100;
      mPosition = {100, 100};
}
