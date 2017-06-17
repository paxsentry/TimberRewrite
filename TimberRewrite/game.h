#ifndef TIMBER_REWRITE_GAME_H
#define TIMBER_REWRITE_GAME_H

const int NUM_CLOUDS = 20;

#include "gameWindow.h"
#include "world.h"
#include "bee.h"
#include "cloud.h"

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
    Cloud m_clouds[NUM_CLOUDS];
};


#endif // !TIMBER_REWRITE_GAME_H