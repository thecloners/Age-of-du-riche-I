#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "../hitbox.hpp"

#ifndef BATIMENTS
#define BATIMENTS

typedef enum {maison, moulin, chateau} bat_t;


class Batiment : public sf::Drawable

{
  private:
    int mPV;
    unsigned int mTailleX,mTailleY;
    sf::Vector2f mPosition;
    sf::Color mColor;
    bat_t mTypeBat;
    hitbox mHitboxDefensive();

  public:

    Batiment(bat_t nom, sf::Vector2f Position);
    Batiment::~Batiment();


    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

    void recevoirDegats(int degats);
    void autoRegen();
    void returnPV();


};
#endif
