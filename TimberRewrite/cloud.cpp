#include "cloud.h"

Cloud::Cloud()
    :m_isActive(false),
    m_cloudSpeed(0)
{
    if (m_cloudTexture.loadFromFile("graphics/cloud.png"))
    {
        m_cloud.setTexture(m_cloudTexture);
        m_cloud.setPosition(-300, 150);
    }
}

Cloud::~Cloud()
{}

void Cloud::render(sf::RenderWindow & window)
{
    window.draw(m_cloud);
}

void Cloud::update(sf::Time delta, Cloud* cloud)
{
    if (!cloud->isActive())
    {
        srand((int)time(0) * 10);
        m_cloudSpeed = (rand() % 200);

        float height = (rand() % 150);
        m_cloud.setPosition(-200, height);
        //m_clouds[i].setScale(sf::Vector2f());
        m_isActive = true;
    }
    else
    {
        m_cloud.setPosition(
            m_cloud.getPosition().x + (m_cloudSpeed * delta.asSeconds()),
            m_cloud.getPosition().y);

        if (m_cloud.getPosition().x > 1920)
        {
            m_isActive = false;
        }
    }
}

bool Cloud::isActive() { return m_isActive; }
