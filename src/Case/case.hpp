#ifndef CASE_
#define CASE_
#include <iostream>
#include <SFML/Graphics.hpp>


class Case
{
private:
    bool mpasser_ou_pas_passer;
    sf::Color mCouleur;
public:
    typedef enum {mer, foret, plaine, roche} case_t;
    Case(case_t typeCase);
    case_t mTypeCase;
};

#endif
