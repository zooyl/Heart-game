#include "Player.h"
#include "Ewenty.h"
#include "Walls.h"
#include "Text.h"
#include <iostream>
#include <unistd.h> // sleep


class Game
{
private:
    //vars stuff ewentualnie defincja funkcji ktore zawieraja tylko vars
    sf::Sprite wintextureobj; // sprite = texture = object
    sf::Texture wintexture;
    sf::Sprite hearts;
    sf::Texture heartstexture;
    sf::Sprite gameover;
    sf::Texture gameovertexture;
    sf::Sprite pot;
    sf::Texture pottexture;

    

    //Player
    Player* player;
    int t = 0;
    int hp = 5;
    int potion = 2;
    bool dead = false;
    bool canmoveup = true;
    bool canmovedown = true;
    bool canmoveleft = true;
    bool canmoveright = true;

    //Walls
    std::vector<Walls*>::const_iterator iter1;
    std::vector<Walls*> wallArray;
    Walls* wall1;
    Walls* wall2;
    Walls* wall3;
    Walls* wall4;
    Walls* wall5;
    Walls* wall6;
    Walls* wall7;
    Walls* wall8;
    Walls* wall9;
    Walls* wall10;
    Walls* wall11;
    Walls* wall12;
    Walls* wall13;
    Walls* wall14;
    Walls* wall15;
    Walls* wall16;
    Walls* wall17;
    Walls* wall18;
    Walls* wall19;
    Walls* wall20;
    Walls* wall21;
    Walls* wall22;
    Walls* wall23;
    Walls* wall24;
    Walls* wall25;
    Walls* wall26;
    Walls* wall27;
    Walls* wall28;


    //Ewenty
    Ewenty* ewenty;
    Ewenty* ewenty1;
    Ewenty* ewenty2;
    Ewenty* ewenty3;
    Ewenty* ewenty4;
    Ewenty* ewenty5;
    Ewenty* ewenty6;
    Ewenty* ewenty7;
    Ewenty* ewenty8;
    std::vector<Ewenty*>::const_iterator iter2;
    std::vector<Ewenty*> ewentArray;

    //text
    Text* text1;
    Text* scroll;


    void initWindow();
    void initTexture();
    sf::RenderWindow* window;


    void initStuff();
    void StatusEffects();
    void AddEwent();
    void drawWall();
    void AddWall();
    void Monster();
    void Secret();
    void HpEffect();
    void Gameover();

public:
    Game(/* args */);
    ~Game();

    //definicja funkcji
    void run();
    void updateInput();
    void updatePollEvents();
    void updateHp();
    void updatePotions();
    void update();
    void render();

};