#ifndef TIMBER_REWRITE_WORLD_H
#define TIMBER_REWRITE_WORLD_H

#include "SFML\Graphics.hpp"

class World
{
public:
    World(sf::Vector2u window_size);
    ~World();

    void render(sf::RenderWindow& window);

private:
    sf::Vector2u m_windowSize;

    sf::Texture m_mainTreeTexture;
    sf::Sprite m_mainTree;
    sf::Texture m_additionalTreeTexture;
    sf::Sprite m_additionalTreeOne;
    sf::Sprite m_additionalTreeTwo;
    sf::Sprite m_additionalTreeThree;
    sf::Sprite m_additionalTreeFour;
    sf::Sprite m_additionalTreeFive;

    sf::Texture m_backGroundTexture;
    sf::Sprite m_backGround;
};

#endif // !TIMBER_REWRITE_WORLD_H