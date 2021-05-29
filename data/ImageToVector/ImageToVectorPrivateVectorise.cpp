/**
 * @file ImageToVectorPrivateVectorise.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-05-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "ImageToVector.hpp"

void ImageToVector::vectoriseImage()
{
    m_width = m_Image.getSize().x;
    m_height = m_Image.getSize().y;

    for(int y = 0; y <= m_height; y ++)
    {
        std::vector<int>    r,
                            g,
                            b;
        
        for(int x = 0; x <= m_width; x ++)
        {
            sf::Color Color = m_Image.getPixel(x, y);
            r.push_back(Color.r);
            g.push_back(Color.g);
            b.push_back(Color.g);
        }
        m_r.push_back(r);
        m_g.push_back(g);
        m_b.push_back(b);
    }
    m_rgb.push_back(m_r);
    m_rgb.push_back(m_g);
    m_rgb.push_back(m_b);
}