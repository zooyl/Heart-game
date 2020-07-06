#include "Walls.h"

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

Walls::Walls(float pos_x, float pos_y, float size_x, float size_y)
{
    this->rect.setSize(sf::Vector2f(size_x, size_y));
    this->rect.setPosition(pos_x, pos_y);
    this->rect.setFillColor(sf::Color::Black);
}
Walls::~Walls()
{

}
const sf::FloatRect Walls::getBounds() const
{
    return this->rect.getGlobalBounds();
}
void Walls::render(sf::RenderTarget * target)
{
    target->draw(this->rect);
}