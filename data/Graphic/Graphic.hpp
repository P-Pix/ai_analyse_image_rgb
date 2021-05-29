/**
 * @file Graphic.hpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-05-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#if !defined(__GRAPHIC__)
#define __GRAPHIC__

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
class Graphic
{
    public:
        //Constructor / Destructor
            Graphic(const char *namewindow);
            ~Graphic();
        
        // Accessor
            bool isOpen();

        // Function
            void pollEvent();

    private:
        // Variable
            unsigned int    m_width = 400,
                            m_height = 400;

            std::vector<std::vector<std::vector<int>>> m_rgb;
            std::vector<std::vector<int>>   m_r,
                                            m_g,
                                            m_b;
            
            sf::RenderWindow    *m_Window;
            sf::VideoMode   m_Video;
            sf::Event   m_Event;
};

#endif