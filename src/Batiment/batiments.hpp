#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;

#ifndef BATIMENTS
#define BATIMENTS

class Batiments
{
  private:
    int pv;
    int taille;
    int x;
    int y;
    int auto_gene;

  public:
    void recevoirDegats (int degats);
    Batiments(bat_t nom, int x,int y);



};
#endif
