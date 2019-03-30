#include "hitbox.hpp"

Hitbox::Hitbox(hitbox_t typeHitbox)
{

    if (typeHitbox == quadrilatere) {
        Hitbox::arrete1 = p1;
        Hitbox::arrete2 = p2;
        Hitbox::arrete3 = p3;
        Hitbox::arrete4 = p4;
    }

}

int Hitbox::collision()
{

}
