#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Player
{
private:
    /* data */
    sf::CircleShape shape; // sprite = texture = object
    // sf::Texture texture;

    float movementSpeed;

    void initVariables();
    void initSprite();

public:
    Player(/* args */);
    ~Player();

    //funkcje ruchu
    const sf::FloatRect getBounds() const;
    const sf::Vector2f& getPos() const;
    void move(const float dirX, const float dirY);

    void update();
    void render(sf::RenderTarget& target);
};
