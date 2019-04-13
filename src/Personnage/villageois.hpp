#ifndef DEF_VILLAGEOIS
#define DEF_VILLAGEOIS

#include <iostream>
#include <string>
#include "personnage.hpp"



class Villageois : public Personnage
{
public:
      Villageois(sf::Vector2f Position);


private:
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};



#endif
