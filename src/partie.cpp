#include "partie.hpp"
#include "Personnage/villageois.hpp"
#include <time.h>
using namespace std;

#define TAILLE_FENETRE 1000

void Partie::elargissement_montagne(int i,int j)
{
    int c,d,e;//,i,j;
    //for (i = 1; i < TAILLE_PLATEAU-1; i++)
    //{
//        for (j = 1;j < TAILLE_PLATEAU-1; j++)
    //    {
            c = rand()%3;    //
            if (c == 2) // Pour passer de 0/1 à -1/1
                c = -1;

            d = rand()%3;
            if (d == 2)
                d = -1;

            if (mMap[i][j].returnTypeCase() == roche)
                mMap[i + c][j + d] = Case(roche);

            e = rand()%10;
            if (e == 1 || e == 2 || e == 3 || e == 4)
            elargissement_montagne(i,j);


}
void Partie::lac(int i,int j)
{
    int c,d,e;

            c = rand()%3;
            if (c == 2)
                c = -1;
            d = rand()%3;
            if (c == 2)
                c = -1;
            if (mMap[i][j].returnTypeCase() == mer)
            {
                if (mMap[i + c][j + d].returnTypeCase() == plaine)
                    mMap[i + c][j + d] = mer;
            }
            e = rand()%6;
            if (e == 0 || e == 1 || e == 2)
                lac(i,j);
}
void Partie::bois(int i,int j)
{
    int c,d,e;

            c = rand()%3;
            if (c == 2)
                c = -1;
            d = rand()%3;
            if (c == 2)
                c = -1;
            if (mMap[i][j].returnTypeCase() == foret)
            {
                if (mMap[i + c][j + d].returnTypeCase() == plaine)
                    mMap[i + c][j + d] = foret;
            }
            e = rand()%2;
            if (e == 0 )
                bois(i,j);
}
Partie::Partie()
{
    genereMap();
    mPersonnages.push_back(new Villageois(sf::Vector2f(50 ,50)));
    mBatiments.push_back(new Batiment(moulin, sf::Vector2f(100, 100)));
}

// Fonction qui est appellée quand on fait window.draw(partie)
// En gros, RenderTarget s'utilise comme window.
// RenderStates je sais plus

void Partie::genereMap()
{
    int i,j;
    for (i = 0; i < TAILLE_PLATEAU; i++)
    {
        for (j = 0;j < TAILLE_PLATEAU; j++)
        {
            mMap[i][j] = Case(plaine);
        }
    }
    for (i = 0; i < (TAILLE_PLATEAU*TAILLE_PLATEAU)/40; i++)
    {
        int a,b;
        a = rand()%TAILLE_PLATEAU;
        b = rand()%TAILLE_PLATEAU;

        if (mMap[a][b].returnTypeCase() == plaine)
            mMap[a][b] = Case(roche);
    }
    //for(i = 0; i<2; i++)
    for (i = 1; i < TAILLE_PLATEAU-1; i++)
    {
        for (j = 1;j < TAILLE_PLATEAU-1; j++)
        {
            elargissement_montagne(i,j);
        }
    }
     for (i = 0; i < (TAILLE_PLATEAU*TAILLE_PLATEAU)/70; i++)
    {
        int a,b;
        a = rand()%TAILLE_PLATEAU;
        b = rand()%TAILLE_PLATEAU;

        if (mMap[a][b].returnTypeCase() == plaine)
            mMap[a][b] = Case(mer);
    }
    for (i = 1; i < TAILLE_PLATEAU-1; i++)
    {
        for (j = 1;j < TAILLE_PLATEAU-1; j++)
        {
            lac(i,j);
        }
    }
    for (i = 0; i < (TAILLE_PLATEAU*TAILLE_PLATEAU)/70; i++)
    {
        int a,b;
        a = rand()%TAILLE_PLATEAU;
        b = rand()%TAILLE_PLATEAU;

        if (mMap[a][b].returnTypeCase() == plaine)
            mMap[a][b] = Case(foret);
    }
    for (i = 1; i < TAILLE_PLATEAU-1; i++)
    {
        for (j = 1;j < TAILLE_PLATEAU-1; j++)
        {
            bois(i,j);
        }
    }
}

void Partie::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    int i, j;
    for (i = 0; i < TAILLE_PLATEAU; i++)
        for (j = 0; j < TAILLE_PLATEAU; j++)
        {
        //    cout << mMap[i][j].mCouleur << endl;
            sf::RectangleShape case_d(sf::Vector2f(TAILLE_FENETRE/TAILLE_PLATEAU, TAILLE_FENETRE/TAILLE_PLATEAU));
            case_d.setPosition(sf::Vector2f(i*(TAILLE_FENETRE/TAILLE_PLATEAU), j*(TAILLE_FENETRE/TAILLE_PLATEAU)));
            case_d.setFillColor(mMap[i][j].returnCouleur());
            target.draw(case_d);
        }
    for(unsigned int i = 0 ; i < mPersonnages.size(); i++) {
        target.draw(*mPersonnages[i]);
    }
    for(unsigned int i = 0 ; i < mBatiments.size(); i++) {
        target.draw(*mBatiments[i]);
    }
}

// Cette fonction est appellée en continu. Elle gère tout les trucs
// Qui prennent du temps (e.g : flèches, personnages qui marchent, etc)
void Partie::update()
{


}

// Cette fonction récupère les évènements du clavier
void Partie::sendEvent(sf::Event)
{
}
