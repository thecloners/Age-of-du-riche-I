#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include <iostream>
#include <string>
#include "personnage.hpp"



class Guerrier : public Personnage
{
public:
      Guerrier(sf::Vector2f Position);


private:
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};



#endif
