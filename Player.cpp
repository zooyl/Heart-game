#include "Player.h"

void Player::initVariables()
{
     this->movementSpeed = 0.8f;
}
void Player::initSprite()
{
    this->shape.setPosition(123,370);
    this->shape.setRadius(6.f);
    this->shape.setFillColor(sf::Color::Blue);
    this->shape.setOutlineThickness(1.f);
    this->shape.setOutlineColor(sf::Color::Black);
}

Player::Player(/* args */)
{
    this->initVariables();
    this->initSprite();
}

Player::~Player()
{
}
const sf::FloatRect Player::getBounds() const
{
    return this->shape.getGlobalBounds();
}
const sf::Vector2f& Player::getPos() const
{
    return this->shape.getPosition();
}
void Player::move(const float dirX, const float dirY)
{
    this->shape.move(this->movementSpeed * dirX, this->movementSpeed * dirY);
}
void Player::render(sf::RenderTarget& target)//Render a target
{
    target.draw(this->shape);
    // std::cout << shape.getPosition().x << " " << shape.getPosition().y << std::endl;
}