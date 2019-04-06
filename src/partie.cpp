#include "partie.hpp"
#include "Personnage/villageois.hpp"
using namespace std;

#define TAILLE_FENETRE 1000
// Le constructeur, (entre autre faut qu'il appelle genereMap)
Partie::Partie()
{
    genereMap();
    mPersonnages.push_back(Villageois(sf::Vector2f(50 ,50)))
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
            unsigned int x = rand()%4;
            if (x == 1)
            {
                mMap[i][j] = Case(mer);
            }
            if (x == 2)
            {
                mMap[i][j] = Case(plaine);
            }
            if (x == 3)
            {
                Partie::mMap[i][j] = Case(roche);
            }
            if (x == 4)
            {
                Partie::mMap[i][j] = Case(foret);
            }
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
