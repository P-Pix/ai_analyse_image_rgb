#include "Graphic.hpp"

void Graphic::pollEvent()
{
    if(this -> m_Window -> pollEvent(this -> m_Event))
    {
        if(this -> m_Event.type == sf::Event::Closed)
        {
            this -> m_Window -> close();
        }
        else if(this -> m_Event.type == sf::Event::KeyPressed)
        {
            if(this -> m_Event.key.code == sf::Keyboard::Escape)
            {
                this -> m_Window -> close();
            }
        }
    }
}
void Graphic::updateScreen()
{
    allDrawing();
}