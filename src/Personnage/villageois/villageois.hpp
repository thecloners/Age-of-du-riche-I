#ifndef DEF_VILLAGEOIS

#define DEF_VILLAGEOIS



#include <iostream>

#include <string>

#include "../personnage.hpp"



class Villageois : public Personnage


{
public:
    void recolteressource()const;
    void construirebatiments()const;
private:
    int VieMax;
    int Degat;
    int Portee;
    int Vie;
    sf::Vector2f;

};



#endif
