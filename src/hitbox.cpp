#include "hitbox.hpp"

Hitbox::Hitbox(sf::Vector2f p1,sf::Vector2f p2,sf::Vector2f p3,sf::Vector2f p4)
{
    mSommet1 = p1;
    mSommet2 = p2;
    mSommet3 = p3;
    mSommet4 = p4;
}

Hitbox::Hitbox(sf::Vector2f p, sf::Vector2f taille)
{
    mSommet1 = p;
    mSommet2.x = p.x + taille.x;
    mSommet2.y = p.y;
    mSommet3 = p + taille;
    mSommet4.x = p.x;
    mSommet4.y = p.y + taille.y;
}

Hitbox::Hitbox(sf::Vector2f p, unsigned int tailleX, unsigned int tailleY)
{
    mSommet1 = p;
    mSommet2.x = p.x + tailleX;
    mSommet2.y = p.y;
    mSommet3.x = p.x + tailleX;
    mSommet3.y = p.y + tailleY;
    mSommet4.x = p.x;
    mSommet4.y = p.y + tailleY;
}
Hitbox::Hitbox()
{
    sf::Vector2f p(0.f,0.f);
    mSommet1 = p;
    mSommet2 = p;
    mSommet3 = p;
    mSommet4 = p;

}


bool ccw(sf::Vector2f A, sf::Vector2f B, sf::Vector2f C)
{
    return (C.y-A.y)*(B.x-A.x) > (B.y-A.y)*(C.x-A.x);
}

bool lines_intersect(sf::Vector2f A, sf::Vector2f B, sf::Vector2f C,sf::Vector2f D)
{
    return ccw(A, C, D) != ccw(B, C, D) && ccw(A, B, C) != ccw(A, B, D);
}



bool collisions(Hitbox obj1, Hitbox obj2){

    sf::Vector2f Tsommet1 [4]= {obj1.mSommet1,obj1.mSommet2,obj1.mSommet3,obj1.mSommet4};
    sf::Vector2f Tsommet2 [4]= {obj2.mSommet1,obj2.mSommet2,obj2.mSommet3,obj2.mSommet4};



    int a,a_;
    int b,b_;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            a=i;
            if(a>=3){
                a_=0;
            }
            else{
                a_=a+1;
            }
            b=j;
            if(b>=3){
                b_=0;
            }
            else{
                b_=b+1;
            }
            if(lines_intersect(Tsommet1[a],Tsommet1[a_],Tsommet2[b],Tsommet2[b_])  == 1){
                return true;
            }

}
}
return false;
}
