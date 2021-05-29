/**
 * @file GraphicPrivateLine.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Graphic.hpp"

void Graphic::makeLine()
{
    m_linex.setSize(sf::Vector2f(300.f, 1.f));
    m_linex.setPosition(sf::Vector2f(50.f, 350.f));
    m_linex.setFillColor(sf::Color::White);

    m_liney.setSize(sf::Vector2f(1.f, 300.f));
    m_liney.setPosition(sf::Vector2f(50.f, 50.f));
    m_liney.setFillColor(sf::Color::White);
}