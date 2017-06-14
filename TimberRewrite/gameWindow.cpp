#include "gameWindow.h"

GameWindow::GameWindow(const std::string & title, const sf::Vector2u & size)
    :m_windowTitle(title),
    m_windowSize(size),
    m_isDone(false)
{
    m_window.create({ m_windowSize.x, m_windowSize.y, 32 }, m_windowTitle, sf::Style::Default);
}

GameWindow::~GameWindow() { m_window.close(); }

void GameWindow::beginDraw() { m_window.clear(sf::Color::Black); }

void GameWindow::endDraw() { m_window.display(); }

bool GameWindow::isDone() { return m_isDone; }

sf::RenderWindow * GameWindow::getRenderWindow() { return &m_window; }

sf::Vector2u GameWindow::getWindowSize() { return m_windowSize; }

void GameWindow::update()
{
    sf::Event event;
    while (m_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            m_isDone = true;
        }
    }
}

void GameWindow::draw(sf::Drawable& drawable) { m_window.draw(drawable); }