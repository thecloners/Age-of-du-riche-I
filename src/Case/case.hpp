#ifndef CASE_
#define CASE_
#include <iostream>


class Case
{
private:
    bool mpasser_ou_pas_passer;
    int mcouleur;
public:
    typedef enum {mer, foret, plaine, roche} case_t;
    Case(case_t typeCase);
};

#endif
