#ifndef PART_
#define PART_
#include "Case/case.hpp"
#include "Personnage/personnage.hpp"
#include "Batiment/batiments.hpp"
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>


// On hérite de la classe Drawable qui nous permet de nous faire dessiner
#define TAILLE_PLATEAU 50


struct Mouse {
    sf::Vector2i position;
    bool leftPressed;
    bool rightPressed;
    bool team;
};

class Partie : public sf::Drawable
{
  private:
    int mNbJoueur;
    void genereMap();
    Case mMap[TAILLE_PLATEAU][TAILLE_PLATEAU];
    std::vector<Personnage*> mPersonnages;
    std::vector<Batiment*> mBatiments;
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    // Fonction qui est appellée quand on fait window.draw(partie)
    // En gros, RenderTarget s'utilise comme window.
    // RenderStates je sais plus
  public:
    std::string nom;
    Partie(); // Le constructeur, (entre autre faut qu'il appelle genereMap)
    void setSouris(Mouse souris); // Cette fonction récupère les évènements du clavier
    void update();             // Cette fonction est appellée en continu. Elle gère tout les trucs
                               // Qui prennent du temps (e.g : flèches, personnages qui marchent, etc)

    void elargissement_montagne(int i,int j);
    void lac(int i,int j);
    void bois(int i,int j);

};
#endif
