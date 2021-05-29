#include "Graphic.hpp"

void Graphic::pollEvent()
{
    if(this -> m_Window -> pollEvent(this -> m_Event))
    {
        if(this -> m_Event.type == sf::Event::Closed)
        {
            this -> m_Window -> close();
        }
    }
}