#ifndef DEF_VILLAGEOIS

#define DEF_VILLAGEOIS



#include <iostream>

#include <string>

#include "personnage.hpp"




class villageois : public Personnage


{
public:
    void recolteressource()const;
    void construirebatiments()const;


};



#endif
