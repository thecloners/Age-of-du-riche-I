#include "partie.hpp"

#define TAILLE_FENETRE 1000
// Le constructeur, (entre autre faut qu'il appelle genereMap)
Partie::Partie()
{
}

// Fonction qui est appellée quand on fait window.draw(partie)
// En gros, RenderTarget s'utilise comme window.
// RenderStates je sais plus
void Partie::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    int i, j;
    for (i = 0; i < mTaillePlateau; i++)
        for (j = 0; j < mTaillePlateau; j++)
        {
            if (mMap[i][j].mTypeCase == mer)
            {
                sf::RectangleShape case_d(sf::Vector2f(TAILLE_FENETRE/TAILLE_PLATEAU, TAILLE_FENETRE/TAILLE_PLATEAU));
                case_d.setFillColor(sf::Color(0, 0, 250));
            }
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

void Partie::genereMap()
{
    int i,j;
    for (i = 0;i <=mTaillePlateau; i++)
    {
        for (j = 0;j <=mTaillePlateau; j++)
        {
            unsigned int x = rand()%4;
            if (x == 1)
            {
                mMap[i][j] = mer;
            }
            if (x == 2)
            {
                mMap[i][j] = plaine;
            }
            if (x == 3)
            {
                Partie::mMap[i][j] = roche;
            }
            if (x == 4)
            {
                Partie::mMap[i][j] = foret;
            }
        }
    }
}
