#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Walls
{
private:
    sf::RectangleShape rect;

public:
    Walls(float pos_x, float pos_y, float size_x, float size_y);
    ~Walls();
    
    const sf::FloatRect getBounds() const;
    void render(sf::RenderTarget* target);
};