/**
 * @file GraphicAccessor.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-05-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Graphic.hpp"

bool Graphic::isOpen()
{
    return m_Window -> isOpen();
}