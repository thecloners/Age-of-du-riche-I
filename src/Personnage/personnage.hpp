#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
class Personnage
{

    private:
      int mVie;
      int mVieMax;
      sf::Vector2f mPosition;
      int mDegat;
      int mPortee;
      int mCurrentTarget;

      virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;




    public:
      void mouvement() {

      }

      void attaque() {

      }



};
