#include "Graphic.hpp"

Graphic::Graphic(const char *namewindow = "Name Default")
{
    this -> m_Window = nullptr;
    this -> m_Window = new sf::RenderWindow(sf::VideoMode(m_width, m_height), namewindow);
    this -> m_Window -> setFramerateLimit(60);
}
Graphic::~Graphic()
{

}