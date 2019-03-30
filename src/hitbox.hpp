#ifndef HITBOX_
#define HITBOX_
typedef enum {cercle,quadrilatere} hitbox_t;

class Hitbox : public sf::Drawable
{
  private:
    int mTaille;
  public:
    bool mAction;
    sf::Vector2f arrete1;
    sf::Vector2f arrete2;
    sf::Vector2f arrete3;
    sf::Vector2f arrete4;
    Hitbox(hitbox_t typeHitbox)
};

#endif
