#ifndef TIMBER_REWRITE_CLOUD_H
#define TIMBER_REWRITE_CLOUD_H

#include <SFML\Graphics.hpp>

class Cloud
{
public:
    Cloud();
    ~Cloud();

    void render(sf::RenderWindow& window);
    void update(sf::Time delta, Cloud* cloud);
    bool isActive();

private:
    sf::Texture m_cloudTexture;
    sf::Sprite m_cloud;

    int m_cloudSpeed;
    bool m_isActive;
};

#endif // !TIMBER_REWRITE_CLOUD_H