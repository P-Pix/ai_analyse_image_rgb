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
    private:
        // Variable
            unsigned int    m_width = 400,
                            m_height = 400,
                            m_startx = 0,
                            m_starty = 0,
                            m_endx = 0,
                            m_endy = 0;
            struct Coord2D
            {
                float x;
                float y;
            };

            std::vector<std::vector<std::vector<int>>> m_rgb;
            std::vector<std::vector<int>>   m_r,
                                            m_g,
                                            m_b;
            
            std::vector<Coord2D>    m_VectorCoord2D;
            
            sf::RenderWindow    *m_Window;
            sf::VideoMode   m_Video;
            sf::Event   m_Event;

            sf::RectangleShape  m_liney,
                                m_linex;

        // Function
            // Draw
                void makeLine();
                
                void allDrawing();
                void drawGraphicEchelle();

                void drawSprite(sf::Sprite sprite);
                void drawText(sf::Text text);
                void drawRectangle(sf::RectangleShape rectangle);
                void drawPoint(sf::CircleShape point);
                
                void drawAllCoord2D();

    public:
        //Constructor / Destructor
            Graphic(const char *name_window);
            ~Graphic();
        
        // Accessor
            bool isOpen();

        // Function
            void pollEvent();
            void updateScreen();

            void addCoord2D(float x, float y);
};

#endif