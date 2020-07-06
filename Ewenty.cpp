#include "Ewenty.h"
#include "Text.h"

void Ewenty::initShape()
{
    this->shape.setRadius(9.f);
    this->shape.setOutlineThickness(1.f);
    this->shape.setOutlineColor(sf::Color::Black);

    // if (!visited)
    // {
    //     this->shape.setFillColor(sf::Color::Black);
    //     visited = true;
    // }
}
void Ewenty::EwentyLogic()
{
}
const sf::FloatRect Ewenty::getBounds() const
{
    return this->shape.getGlobalBounds();
}
Ewenty::Ewenty(float pos_x, float pos_y)
{
    this->initShape();

    this->shape.setPosition(pos_x, pos_y);

    this->shape.setFillColor(sf::Color::Yellow); //random

    // if (eventtype == 2)
    // {
    //     this->shape.setFillColor(sf::Color::Red); //enemy higher chance
    // }
    // if (eventtype == 3)
    // {
    //     this->shape.setFillColor(sf::Color::Green); //secret higher chance
    // }
}
Ewenty::~Ewenty()
{
}
void Ewenty::initType()
{
}
void Ewenty::update(float pos_x, float pos_y)
{
    this->shape.setPosition(pos_x, pos_y);
    // if (eventtype == 1)
    // {
    //     // if (!visited)
    //     // {
    //         this->shape.setFillColor(sf::Color::Yellow);   //random
    //     // }
    //     // else
    //     // {
    //     //     delete this->shape;
    //     // }

    // }
    // if (eventtype == 2)
    // {
    //     this->shape.setFillColor(sf::Color::Red);   //enemy higher chance
    // }
    // if (eventtype == 3)
    // {
    //     this->shape.setFillColor(sf::Color::Green);   //secret higher chance
    // }
}
void Ewenty::render(sf::RenderTarget *target)
{
    target->draw(this->shape);
    // target->draw(this->text);
}