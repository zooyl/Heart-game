#ifndef EWENTY_H
#define EWENTY_H


#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

class Ewenty
{
private:
    /* data */
    sf::CircleShape shape;
    bool enemy;
    bool loot;
    int hp = 3;
    int potion = 2;


    void initShape();
    void initType();
    void Secret();
    void Monster();
    void HpEfect();

public:
    Ewenty(float pos_x, float pos_y);
    ~Ewenty();

    const sf::FloatRect getBounds() const;
    void EwentyLogic();
    void update(float pos_x, float pos_y);
    void render(sf::RenderTarget* target);
};
#endif