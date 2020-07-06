#include "Text.h"

void Text::initScroll()
{
    this->scroll.setSize(sf::Vector2f(370,290));
    this->scroll.setFillColor(sf::Color::Transparent);
    this->scroll.setPosition(540,150);
}
void Text::initText()
{
    this->font.loadFromFile("Textures/arial.ttf"); //Load font from file
    this->text.setFont(this->font);
    this->text.scale(1.f,1.f);//1 = 100% in each direction
    // this->text.setPosition(sf::Vector2f(200,300));
    this->text.setFillColor(sf::Color::Black);
    this->text.setScale(1.f,1.f);
    this->text.setCharacterSize(25);
    this->text.setPosition(scroll.getPosition().x + 5, scroll.getPosition().y);
}
Text::Text(/* args */)
{
    this->initScroll();
    this->initText();
}

Text::~Text()
{
}
void Text::SetLocalString(std::string str)
{
    this->text.setString(str);
}
void Text::render(sf::RenderTarget *target)
{
    target->draw(this->text);

    target->draw(this->scroll);
    // std::cout << "ok" << std::endl;
}