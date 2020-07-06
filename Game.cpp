#include "Game.h"

void Game::initWindow()
{
    this->window = new sf::RenderWindow(sf::VideoMode(958, 793), "Fantastyczna gra");
    this->window->setFramerateLimit(144);
    this->window->setVerticalSyncEnabled(false);

}
void Game::initTexture() //map
{
    this->wintextureobj.setPosition(0, 0); 
    this->wintexture.loadFromFile("Textures/map.png"); //Load texture from file
    this->wintextureobj.setTexture(this->wintexture);
    this->wintextureobj.scale(1.f,1.f);//1 = 100% in each direction
    // resize the sprite

}
void Game::AddWall()
{

    this->wallArray.push_back(this->wall1);
    this->wallArray.push_back(this->wall2);
    this->wallArray.push_back(this->wall3);
    this->wallArray.push_back(this->wall4);
    this->wallArray.push_back(this->wall5);
    this->wallArray.push_back(this->wall6);
    this->wallArray.push_back(this->wall7);
    this->wallArray.push_back(this->wall8);
    this->wallArray.push_back(this->wall9);
    this->wallArray.push_back(this->wall10);
    this->wallArray.push_back(this->wall11);
    this->wallArray.push_back(this->wall12);
    this->wallArray.push_back(this->wall13);
    this->wallArray.push_back(this->wall14);
    this->wallArray.push_back(this->wall15);
    this->wallArray.push_back(this->wall16);
    this->wallArray.push_back(this->wall17);
    this->wallArray.push_back(this->wall18);
    this->wallArray.push_back(this->wall19);
    this->wallArray.push_back(this->wall20);
    this->wallArray.push_back(this->wall21);
    this->wallArray.push_back(this->wall22);
    this->wallArray.push_back(this->wall23);
    this->wallArray.push_back(this->wall24);
    this->wallArray.push_back(this->wall25);
    this->wallArray.push_back(this->wall26);
    this->wallArray.push_back(this->wall27);
    this->wallArray.push_back(this->wall28);
}
void Game::drawWall()
{   
    int count = 0;
    for(iter1 = wallArray.begin(); iter1 != wallArray.end(); iter1++)
    {
        this->wallArray[count]->render(this->window);

        count ++;
    }
}
void Game::AddEwent()
{
    this->ewentArray.push_back(this->ewenty);
    this->ewentArray.push_back(this->ewenty1);
    this->ewentArray.push_back(this->ewenty2);
    this->ewentArray.push_back(this->ewenty3);
    this->ewentArray.push_back(this->ewenty4);
    this->ewentArray.push_back(this->ewenty5);
    this->ewentArray.push_back(this->ewenty6);
    this->ewentArray.push_back(this->ewenty7);
    this->ewentArray.push_back(this->ewenty8);
    // this->ewentArray.push_back(this->ewenty9);
    // this->ewentArray.push_back(this->ewenty10);
}
void Game::initStuff()
{
    this->ewenty = new Ewenty(168.f,370.f);
    this->ewenty1 = new Ewenty(240.f,440.f); // secret
    this->ewenty2 = new Ewenty(430.f,420.f);
    this->ewenty3 = new Ewenty(250.f,390.f);
    this->ewenty4 = new Ewenty(319.f,480.f);
    this->ewenty5 = new Ewenty(288.f,332.f);

    this->ewenty6 = new Ewenty(400.f,340.f);
    this->ewenty7 = new Ewenty(318.f,382.f);
    this->ewenty8 = new Ewenty(388.f,372.f);   


    this->text1 = new Text();

    this->scroll = new Text();

    this->AddEwent();

    this->player = new Player();


    this->wall1 = new Walls(77, 430, 97, 1);
    this->wall2 = new Walls(77, 330, 1, 106);
    this->wall3 = new Walls(177, 325, 1, 45);
    this->wall4 = new Walls(235, 330, 200, 1);
    this->wall5 = new Walls(177, 388, 1, 60);
    this->wall6 = new Walls(256, 489, 60, 1);
    this->wall7 = new Walls(178, 450, 57, 1);
    this->wall8 = new Walls(258, 588, 1, -174);
    this->wall9 = new Walls(320, 389, -62, 1);
    this->wall10 = new Walls(338, 588, 1, -196);
    this->wall11 = new Walls(336, 390, 58, 1);
    this->wall12 = new Walls(395, 450, 81, 1);
    this->wall13 = new Walls(477, 448, 1, -58);
    this->wall14 = new Walls(477, 390, -60, 1);
    this->wall15 = new Walls(398, 403, 1, 50);
    this->wall16 = new Walls(398, 330, 1, 40);
    this->wall17 = new Walls(418, 368, 1, 20);
    this->wall18 = new Walls(418, 371, 20, 1);
    this->wall19 = new Walls(438, 371, 1, -42);
    this->wall20 = new Walls(418, 408, 1, 40);
    this->wall21 = new Walls(298, 370, -114, 1);
    this->wall22 = new Walls(238, 340, 1, 28);
    this->wall23 = new Walls(297, 350, 1, 40);
    this->wall24 = new Walls(256, 370, 1, 20);
    this->wall25 = new Walls(80, 330, 100, 1);
    this->wall26 = new Walls(218, 512, 1, -56);
    this->wall27 = new Walls(218, 510, 40, 1);
    this->wall28 = new Walls(258, 590, 70, 1);

    this->AddWall();
}
Game::Game(/* args */)
{
    Game::initWindow();
    Game::initTexture(); //map
    Game::initStuff();
}

Game::~Game()
{
    delete this->window;


    delete this->player;


    delete this->ewenty;
    delete this->ewenty1;
    delete this->ewenty2;
    delete this->ewenty3;
    delete this->ewenty4;
    delete this->ewenty5;
    delete this->ewenty6;
    delete this->ewenty7;
    delete this->ewenty8;



    delete this->wall1;
    delete this->wall2;
    delete this->wall3;
    delete this->wall4;
    delete this->wall5;
    delete this->wall6;
    delete this->wall7;
    delete this->wall8;
    delete this->wall9;
    delete this->wall10;
    delete this->wall11;
    delete this->wall12;
    delete this->wall13;
    delete this->wall14;
    delete this->wall15;
    delete this->wall16;
    delete this->wall17;
    delete this->wall18;
    delete this->wall19;
    delete this->wall20;
    delete this->wall21;
    delete this->wall22;
    delete this->wall23;
    delete this->wall24;
    delete this->wall25;
    delete this->wall26;
    delete this->wall27;
    delete this->wall28;

}
// void Game::Gameover()
// {
//     this->gameovertexture.loadFromFile("Textures/Gameover.jpg"); //Load texture from file
//     this->gameover.setTexture(this->gameovertexture);
//     this->gameover.scale(1.f,1.f);//1 = 100% in each direction
//     this->gameover.setPosition(200, 200);
//     this->window->draw(gameover);
// }
void Game::run()
{
    while(this->window->isOpen())
    {
        Game::update();
        Game::render();
    }
}
void Game::updateInput()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            if (canmoveleft = true)
            {
                this->player->move(-1.f,0.f);
                canmoveup = true;
                canmovedown = true;
                canmoveleft = true;
                canmoveright = true;
            }
        }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            if (canmovedown = true)
            {
                this->player->move(0.f,1.f);
                canmoveup = true;
                canmovedown = true;
                canmoveleft = true;
                canmoveright = true;
            }
        }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            if (canmoveright = true)
            {
                this->player->move(1.f,0.f);
                canmoveup = true;
                canmovedown = true;
                canmoveleft = true;
                canmoveright = true;
            }
        }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            if (canmoveup = true)
            {
                this->player->move(0.f,-1.f);
                canmoveup = true;
                canmovedown = true;
                canmoveleft = true;
                canmoveright = true;
            }
        }
    else
    {
        //do nothing
    }
}
void Game::updatePollEvents()
{
    sf::Event event;
    while (this->window->pollEvent(event))
		{
			// uzytkownik kliknal zamkniecie  okna
			if (event.type == sf::Event::Closed || (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)))
				this->window->close();

			// // uzytkownik nacisnal klawisz
			// if (event.type == sf::Event::KeyPressed)
		}


    int counter = 0;
    for(iter1 = wallArray.begin(); iter1 != wallArray.end(); iter1++)
    {
        if (this->player->getBounds().intersects(this->wallArray[counter]->getBounds()))
        {
            //hit the wall
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) // player goes left
            {
                canmoveleft == false;
                canmovedown == false;
                canmoveup == false;
                this->player->move(2.f,0.f);
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                canmovedown == false;
                canmoveleft == false;
                canmoveright == false;
                this->player->move(0.f,-2.f);
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            {
                canmoveright == false;
                canmovedown == false;
                canmoveup == false;
                this->player->move(-2.f,0.f);
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                canmoveup == false;
                canmoveleft == false;
                canmoveright == false;
                this->player->move(0.f,2.f);
            }
            else
            {
                //
            }
            
        }

        counter ++;
    }
    int count = 0;
    for(iter2 = ewentArray.begin(); iter2 != ewentArray.end(); iter2++)
    {
        if (this->player->getBounds().intersects(this->ewentArray[count]->getBounds()))
        {
            this->ewentArray.at(count)->update(-20, -10);
            StatusEffects();
            t++;
        }
        if (t == 9)
        {
            dead = true;
            this->text1->SetLocalString("You got out of the dungeon!\n\n\n\n\n\n         Congratulations!");
        }
        count++;
    }
}
void  Game::StatusEffects()
{
    int k = rand() % 3;
    if (k == 0)
    {
        HpEffect();
    }
    if (k == 1)
    {
        Monster();
    }
    if (k == 2)
    {
        Secret();
    }
    sleep(1);
}
void Game::Monster()
{
    int z = rand() % 7;
    if (z == 0)
    {
        this->text1->SetLocalString("There's a rabbit in a\ndungeon running by");
    }
    if (z == 1)
    {
        this->text1->SetLocalString("Goblins cross your patch\nas you walk by.\nHp -1");
        hp --;
    }
    if (z == 2)
    {
        this->text1->SetLocalString("Ghosts! Ghosts\neverywhere!\nHp -1");
        hp --;
    }
    if (z == 3)
    {
        this->text1->SetLocalString("A cyclops appeard right\nin front of you!\n Hp -2");
        hp --;
        hp --;
    }
    if (z == 4)
    {
        this->text1->SetLocalString("Skeletons come out of\ntheir coffins to get\nyou!\n Hp -2");
        hp --;
        hp --;
    }
    if (z == 5)
    {
        this->text1->SetLocalString("There is an angry dragon\nright in\nfront of you!\nHp -3");
        hp --;
        hp --;
        hp --;
    }
    if (z == 6)
    {
        this->text1->SetLocalString("A goblin stole your potion!\nPotion-1");
        potion --;
    }
}
void Game::Secret()
{
    int l = rand() % 6;
    if (l == 0)
    {
        this->text1->SetLocalString("Wow! You found a potion\non the ground!\nPotion +1");
        potion ++;
    }
    if (l == 1)
    {
        this->text1->SetLocalString("You dropped your potion\non the ground!\nPotion -1");
        potion --;
    }
    if (l == 2)
    {
        this->text1->SetLocalString("You decided to rest at\na campfire!\nHp +1");
        hp ++;
    }
    if (l == 3)
    {
        this->text1->SetLocalString("You stepped on some spikes\nfool!\nHp -1");
        hp --;
    }
    if (l == 4)
    {
        this->text1->SetLocalString("You've got nothing!\nKeep moving");
    }
    if (l == 5)
    {
        this->text1->SetLocalString("You dropped ALL of your\npotions on the ground!\nYou fool!");
        potion --;
        potion --;
    }
}
void Game::HpEffect()
{
    int h = rand() % 2;
    if (h == 0)
    {
        Monster();
    }
    if (h == 1)
    {
        this->text1->SetLocalString("You catch your breath\nand take a minute.\nHp +1");
        hp ++;
    }
}
void Game::updatePotions()
{
    this->pot.setPosition(540, 700);
    if (potion > 2)
    {
        this->pottexture.loadFromFile("Textures/pot2.png");
        potion --;
    }
    if (potion == 2)
    {
        this->pottexture.loadFromFile("Textures/pot2.png");
        if (sf::Keyboard::isKeyPressed((sf::Keyboard::P)))
        {
            hp++;
            potion--;
            this->text1->SetLocalString("You decide to drink\na potion!");
            sleep(1);
        }
    }
    if (potion == 1)
    {
        this->pottexture.loadFromFile("Textures/pot.png");
        if (sf::Keyboard::isKeyPressed((sf::Keyboard::P)))
        {
            hp++;
            potion--;
            this->text1->SetLocalString("You decide to drink\na potion!");
            sleep(1);
        }
    }
    if (potion == 0)
    {
        this->pottexture.loadFromFile("Textures/empty.png");
        if (sf::Keyboard::isKeyPressed((sf::Keyboard::P)))
        {
            this->text1->SetLocalString("You don't have any potions!");
            sleep(1);
        }
    }
    this->pot.setTexture(this->pottexture);
    this->pot.scale(1.f,1.f);//1 = 100% in each direction
}
void Game::updateHp()
{
    this->hearts.setPosition(510, 580); 
    if (this->hp > 5)
    {
        this->heartstexture.loadFromFile("Textures/hp5.png"); //Load texture from file
        // this->hearts.setTexture(this->heartstexture);
        // this->hearts.scale(1.f,1.f);//1 = 100% in each direction
        hp --;
    }
    if (hp == 5)
    {
        this->heartstexture.loadFromFile("Textures/hp5.png"); 
        // this->hearts.setTexture(this->heartstexture);
        // this->hearts.scale(1.f,1.f);
        // std::cout << "o LUL" << std::endl;
    }
    if (hp == 4)
    {
        this->heartstexture.loadFromFile("Textures/hp4.png"); 
        // this->hearts.setTexture(this->heartstexture);
        // this->hearts.scale(1.f,1.f);
        // std::cout << "oUL" << std::endl;
    }
    if (hp == 3)
    {
        this->heartstexture.loadFromFile("Textures/hp3.png"); 
        // this->hearts.setTexture(this->heartstexture);
        // this->hearts.scale(1.f,1.f);
        // std::cout << "L" << std::endl;
    }
    if (hp == 2)
    {
        this->heartstexture.loadFromFile("Textures/hp2.png"); 
        // this->hearts.setTexture(this->heartstexture);
        // this->hearts.scale(1.f,1.f);
    }
    if (hp == 1)
    {
        this->heartstexture.loadFromFile("Textures/hp1.png"); 
        // this->hearts.setTexture(this->heartstexture);
        // this->hearts.scale(1.f,1.f);
    }
    if (hp <= 0)
    {
        this->heartstexture.loadFromFile("Textures/hp0.png"); 
        // this->hearts.setTexture(this->heartstexture);
        // this->hearts.scale(1.f,1.f);
        dead = true;
        this->text1->SetLocalString("You died!\n \n \n\n\n             GAME OVER");
    }
    this->hearts.setTexture(this->heartstexture);
    this->hearts.scale(1.f,1.f);//1 = 100% in each direction
}
void Game::update()
{
    if (!dead)
    {
    this->updateInput();
    }
    this->updatePollEvents();
    this->updateHp();
    this->updatePotions();

    // this->ewenty->EwentyLogic();
    // this->ewenty1->EwentyLogic();
    // this->ewenty2->EwentyLogic();
    // // this->player->update();
}
void Game::render()
{
    this->window->clear();
    this->window->draw(wintextureobj); //map

    //render player in the window
    this->player->render(*this->window);
    this->window->draw(hearts);

    this->window->draw(pot);

    this->drawWall();

    // if(dead == true)
    // {
    //     Gameover();
    // }

    this->text1->render(this->window);
    this->scroll->render(this->window);

    this->ewenty->render(this->window);
    this->ewenty1->render(this->window);
    this->ewenty2->render(this->window);
    this->ewenty3->render(this->window);
    this->ewenty4->render(this->window);
    this->ewenty5->render(this->window);
    this->ewenty6->render(this->window);
    this->ewenty7->render(this->window);
    this->ewenty8->render(this->window);


    this->window->display();
}