#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <string>

class Text
{
private:
    /* data */
    sf::Text text;
    sf::Font font;
    sf::RectangleShape scroll;
    sf::String str;

    void initScroll();
    void initText();
public:
    Text(/* args */);
    ~Text();
    void SetLocalString(std::string str);
    void render(sf::RenderTarget* target);
};
