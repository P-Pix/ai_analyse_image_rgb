#include "Gradient.hpp"

void Gradient::execution()
{
    while(m_cout != 0)
    {
        tangeante();
        cout();
        if(m_cout == 0 || m_couter == 10000000)
        {
            std::cout << "a = " << m_a << " b = " << m_b << " c = " << m_c << std::endl;
            std::cout <<"cout = " << m_cout << std::endl;
            std::cout << "couter = " << m_couter << std::endl;
            m_running = false;
        }
        m_couter ++;
    }
}

void Gradient::addCoord2D(float x, float y)
{
    Coord2D coord;
    coord.x = x;
    coord.y = y;
    m_vectorcoord.push_back(coord);
}