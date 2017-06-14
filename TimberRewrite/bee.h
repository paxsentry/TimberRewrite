#ifndef TIMBER_REWRITE_BEE_H
#define TIMBER_REWRITE_BEE_H

#include <SFML\Graphics.hpp>

class Bee
{
public:
    Bee();
    ~Bee();

    void render(sf::RenderWindow& window);
    void fly(sf::Time delta);

private:
    sf::Texture m_beeTexture;
    sf::Sprite m_bee;
    bool m_isActive;
    float m_beeSpeed;
};

#endif // !TIMBER_REWRITE_BEE_H