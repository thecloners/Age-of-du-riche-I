#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;

#ifndef BATIMENTS
#define BATIMENTS

// La classe représente UN batiment, doncn pas Batiments mais Batiment!!!
class Batiment : public sf::Drawable // La on hérite de Drawable pour pouvoir se faire dessienr. Valide!
class Batiments     // Pas valide!
{
  private:
    int pv;     // Les conventions de nommage! C'est mPV pas pv
    int taille; // Pareil pour taille
    int x;      // X et Y c'est quoi? Faut faire un sf::Vector2f position
    int y;
    int auto_gene; // WTF?
  public:
    // Alors cette fonction la permet de faire un window.draw(batiment)
    // RenderTarget représente la window
    // Donc si vous avez un RectangleShape à dessiner, 
    // Vous faites RenderTarget.draw(tiboInShape);
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

    void recevoirDegats(int degats);    // Pas mal
    Batiments(bat_t nom, int x, int y); // Juste faut définir bat_t
};
#endif
