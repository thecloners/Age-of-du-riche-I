#ifndef CASE_
#define CASE_
#include <iostream>
#include <SFML/Graphics.hpp>

typedef enum {mer, foret, plaine, roche} case_t;

class Case
{
private:
    bool mpasser_ou_pas_passer;
    sf::Color mCouleur;
    case_t mTypeCase;
public:

    Case();
    Case(case_t typeCase);
    case_t returnTypeCase();
    sf::Color returnCouleur() const;
};

#endif
