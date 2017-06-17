#include <SFML\Graphics.hpp>
#include "game.h"

Game::Game()
    :m_window("Timber", sf::Vector2u(1920, 1080)),
    m_world(sf::Vector2u(1920, 1080))
{
    m_clock.restart();
    srand(time(nullptr));
}

Game::~Game() {}

void Game::handleInput()
{}

void Game::update()
{
    sf::Time delta = m_clock.restart();

    m_window.update();

    m_bee.fly(delta);

    for (int i = 0; i < NUM_CLOUDS; i++)
    {
        Cloud* current = &m_clouds[i];
        m_clouds[i].update(delta, current);
    }
    
    float timeStep = 1.0f;
}

void Game::render()
{
    m_window.beginDraw();

    m_world.render(*m_window.getRenderWindow());
    m_bee.render(*m_window.getRenderWindow());

    for (int i = 0; i < NUM_CLOUDS; i++)
    {
        m_clouds[i].render(*m_window.getRenderWindow());
    }

    m_window.endDraw();
}

//sf::Time Game::getElapsed() { return m_clock.getElapsedTime(); }
//
//void Game::restartClock() { m_elapsed += m_clock.restart().asSeconds(); }

GameWindow* Game::getWindow() { return &m_window; }