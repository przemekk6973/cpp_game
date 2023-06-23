#include"stdafx.h"
#include "Game.h"

int main()
{

    //system("dir");

    srand(static_cast<unsigned>(time(0)));

    Game game;

    game.run();

    //End of application
    return 0;
}