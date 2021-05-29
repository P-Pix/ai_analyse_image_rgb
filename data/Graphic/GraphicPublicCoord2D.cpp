/**
 * @file GraphicPublicCoord2D.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-05-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Graphic.hpp"

void Graphic::addCoord2D(float x, float y)
{
    Coord2D coord;
    coord.x = x;
    coord.y = y;
    m_VectorCoord2D.push_back(coord);
}