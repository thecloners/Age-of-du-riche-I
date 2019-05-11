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
        mCouleur = sf::Color(39, 174, 96);
    }
    if (typeCase == roche) {
        mpasser_ou_pas_passer = 1;
        mCouleur = sf::Color(88, 41, 0);
    }
}


case_t Case::returnTypeCase()
{
    return mTypeCase;
}

sf::Color Case::returnCouleur() const
{
    return mCouleur;
}
