/**
 * @file GraphicPrivateDraw.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-05-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Graphic.hpp"

void Graphic::allDrawing()
{
    this -> m_Window -> clear();
    
    drawGraphicEchelle();
    drawAllCoord2D();

    this -> m_Window -> display();
}
void Graphic::drawGraphicEchelle()
{
    drawRectangle(m_linex);
    drawRectangle(m_liney);

    sf::RectangleShape rectx, recty;
    rectx.setSize(sf::Vector2f(1.f, 20.f));
    recty.setSize(sf::Vector2f(20.f, 1.f));

    for(unsigned short x = 1; x < 8; x ++)
    {
        rectx.setPosition(sf::Vector2f(x * 50.f, 340.f));
        recty.setPosition(sf::Vector2f(40.f, x * 50.f));
        drawRectangle(rectx);
        drawRectangle(recty);
    }
}
void Graphic::drawSprite(sf::Sprite sprite)
{
    this -> m_Window -> draw(sprite);
}
void Graphic::drawText(sf::Text text)
{
    this -> m_Window -> draw(text);
}
void Graphic::drawRectangle(sf::RectangleShape rectangle)
{
    this -> m_Window -> draw(rectangle);
}
void Graphic::drawPoint(sf::CircleShape point)
{
    this -> m_Window -> draw(point);
}
void Graphic::drawAllCoord2D()
{
    sf::CircleShape point;
    point.setRadius(1);
    for(unsigned int x = 0; x < m_VectorCoord2D.size(); x ++)
    {
        point.setPosition(sf::Vector2f(m_VectorCoord2D[x].x + 50.f, 350 - m_VectorCoord2D[x].y * 1.f));
        drawPoint(point);
    }
}