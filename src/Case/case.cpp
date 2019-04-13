#include "case.hpp"

Case::Case() {

}

Case::Case(case_t typeCase)
{
    mTypeCase = typeCase;
    if (typeCase == mer) {
        mpasser_ou_pas_passer = 1;
        mCouleur = sf::Color(80, 90,155);
    }
    if (typeCase == foret) {
        mpasser_ou_pas_passer = 0;
        mCouleur = sf::Color(15, 90, 15);
    }
    if (typeCase == plaine) {
        mpasser_ou_pas_passer = 0;
        mCouleur = sf::Color(120, 210, 65);
    }
    if (typeCase == roche) {
        mpasser_ou_pas_passer = 1;
        mCouleur = sf::Color(195, 170, 135);
    }
}


case_t Case::returnTypeCase()
{
    return mTypeCase;
}

sf::Color Case::returnCouleur()
{
    return mCouleur;
}
