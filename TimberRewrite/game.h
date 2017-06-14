#ifndef TIMBER_REWRITE_GAME_H
#define TIMBER_REWRITE_GAME_H

#include "gameWindow.h"
#include "world.h"
#include "bee.h"

class Game
{
public:
    Game();
    ~Game();

    void handleInput();
    void update();
    void render();

 /*   sf::Time getElapsed();
    void restartClock();*/

    GameWindow* getWindow();

private:
    GameWindow m_window;
    sf::Clock m_clock;
    float m_elapsed;

    World m_world;
    Bee m_bee;
};


#endif // !TIMBER_REWRITE_GAME_H