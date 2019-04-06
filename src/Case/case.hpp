#ifndef CASE_
#define CASE_
#include <iostream>
#include <SFML/Graphics.hpp>

typedef enum {mer, foret, plaine, roche} case_t;

class Case
{
private:
    bool mpasser_ou_pas_passer;
public:
    sf::Color mCouleur;
    Case() {}
    Case(case_t typeCase);
    case_t mTypeCase;
};

#endif
