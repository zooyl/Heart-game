#include "Game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Random
    srand(time(0)); //seed from time for random stuff
    Game game;//game is an object
    game.run();

    //Koniec gry
    return 0;
}