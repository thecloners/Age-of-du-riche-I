#include "partie.hpp"
#include "Personnage/villageois.hpp"
using namespace std;

#define TAILLE_FENETRE 1000
// Le constructeur, (entre autre faut qu'il appelle genereMap)
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
            //unsigned int x = rand()%4;
            //if (x == 1)
            //{
            //    mMap[i][j] = Case(mer);
            //}
        //    if (x == 2)
        //    {
        //        mMap[i][j] = Case(plaine);
        //    }
        //    if (x == 3)
        //    {
        //        Partie::mMap[i][j] = Case(roche);
        //    }
        //    if (x == 4)
        //    {
        //        Partie::mMap[i][j] = Case(foret);
        //    }
        mMap[i][j] = case_t.plaine;
        }
    }
    for (i = 0; i < (TAILLE_PLATEAU*TAILLE_PLATEAU)/10; i++)
    {
        int a,b;
        a = rand()%4;
        b = rand()%4;

        if (mMap[a][b] == case_t.plaine)
            mMap[a][b] = case_t.roche;
    }

     elargissement_montagne();

}
void elargissement_montagne()
{
    int c,d,e;
    for (i = 0; i < TAILLE_PLATEAU; i++)
    {
        for (j = 0;j < TAILLE_PLATEAU; j++)
        {
            c = rand()%2;
            if (c == 0)
                c = -1;

            d = rand()%2;
            if (d == 0)
                d = -1

            if (mMap[i][j] == case_t.roche)
                mMap[i + c][j + d] = case_t.roche

            e = rand()%3;
            if (e == 3)
                elargissement_montagne();
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
            case_d.setFillColor(mMap[i][j].mCouleur);
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
