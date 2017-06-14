#include "world.h"

World::World(sf::Vector2u windowSize)
{
    m_windowSize = windowSize;

    if (m_backGroundTexture.loadFromFile("graphics/background.png"))
    {
        m_backGround.setTexture(m_backGroundTexture);
        m_backGround.setPosition(0, 0);
    }

    if (m_mainTreeTexture.loadFromFile("graphics/tree.png"))
    {
        m_mainTree.setTexture(m_mainTreeTexture);
        m_mainTree.setPosition(810, 0);
    }

    if (m_additionalTreeTexture.loadFromFile("graphics/tree2.png"))
    {
        m_additionalTreeOne.setTexture(m_additionalTreeTexture);
        m_additionalTreeOne.setPosition(20, 0);

        m_additionalTreeTwo.setTexture(m_additionalTreeTexture);
        m_additionalTreeTwo.setPosition(300, -400);

        m_additionalTreeThree.setTexture(m_additionalTreeTexture);
        m_additionalTreeThree.setPosition(1250, -350);

        m_additionalTreeFour.setTexture(m_additionalTreeTexture);
        m_additionalTreeFour.setPosition(1500, -500);

        m_additionalTreeFive.setTexture(m_additionalTreeTexture);
        m_additionalTreeFive.setPosition(1700, -200);
    }
}

World::~World()
{}

void World::render(sf::RenderWindow& window)
{
    window.draw(m_backGround);
    window.draw(m_mainTree);
    window.draw(m_additionalTreeOne);
    window.draw(m_additionalTreeTwo);
    window.draw(m_additionalTreeThree);
    window.draw(m_additionalTreeFour);
    window.draw(m_additionalTreeFive);
}
