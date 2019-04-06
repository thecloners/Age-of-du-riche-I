#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>


#ifndef BATIMENTS
#define BATIMENTS

typedef enum {maison, moulin, chateau} bat_t;

// La classe représente UN batiment, doncn pas Batiments mais Batiment!!!
class Batiment : public sf::Drawable // La on hérite de Drawable pour pouvoir se faire dessienr. Valide!

{
  private:
    int mPV;
    int mTAILLE;
    sf::Vector2f mPosition;
    sf::Color mColor;
    bat_t mTypeBat;

  public:

    Batiment(bat_t nom, sf::Vector2f Position);
    // Alors cette fonction la permet de faire un window.draw(batiment)
    // RenderTarget représente la window
    // Donc si vous avez un RectangleShape à dessiner,
    // Vous faites RenderTarget.draw(tiboInShape);
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

    void recevoirDegats(int degats);
    void autoRegen();
    void returnPV();


};
#endif
