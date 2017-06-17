#include "bee.h"

Bee::Bee()
    :m_beeSpeed(0.0f),
    m_isActive(false)
{
    if (m_beeTexture.loadFromFile("graphics/bee.png"))
    {
        m_bee.setTexture(m_beeTexture);
        m_bee.setPosition(0, 800);
    }
}

Bee::~Bee()
{}

void Bee::render(sf::RenderWindow& window)
{
    window.draw(m_bee);
}

void Bee::fly(sf::Time delta)
{
    if (!m_isActive)
    {
        srand((int)time(0) * 10);
        m_beeSpeed = (rand() % 200) + 200;

        srand((int)time(0) * 10);
        float height = (rand() % 500) + 500;

        m_bee.setPosition(2000, height);
        m_isActive = true;
    }
    else
    {
        float max = 0.5f;
        float min = -0.5f;

        auto variable = min + (rand() % (int)(max - min + 0.5f));

        m_bee.setPosition(m_bee.getPosition().x - (m_beeSpeed* delta.asSeconds()), m_bee.getPosition().y + variable);

        if (m_bee.getPosition().x < -100) { m_isActive = false; }
    }
}