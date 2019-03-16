#ifndef DEF_VILLAGEOIS

#define DEF_VILLAGEOIS



#include <iostream>

#include <string>

#include "../personnage.hpp"



class Villageois : public Personnage


{
public:
    Villageois();
    void recolteressource()const;
    void construirebatiments()const;


};



#endif
