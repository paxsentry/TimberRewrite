#ifndef TIMBER_REWRITE_GAMEWINDOW_H
#define TIMBER_REWRITE_GAMEWINDOW_H

#include "SFML\Graphics.hpp"

class GameWindow
{
public:
    GameWindow(const std::string& title, const sf::Vector2u& size);
    ~GameWindow();

    void beginDraw();
    void endDraw();

    void update();

    bool isDone();

    sf::RenderWindow* getRenderWindow();
    sf::Vector2u getWindowSize();

    void draw(sf::Drawable& drawable);

private:
    sf::RenderWindow m_window;
    sf::Vector2u m_windowSize;
    std::string m_windowTitle;

    bool m_isDone;
};

#endif // !TIMBER_REWRITE_GAMEWINDOW_H