/**
 * @file ImageToVector.hpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-05-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#if !defined(__IMAGETOVECTOR__)
#define __IMAGETOVECTOR__

#include <iostream>
#include <vector>

#include <SFML/Graphics/Image.hpp>
#include <SFML/Graphics/Color.hpp>

class ImageToVector
{
    private:
        // Variable
            unsigned int    m_width,
                            m_height;
            std::vector<std::vector<std::vector<int>>> m_rgb;
            std::vector<std::vector<int>>   m_r,
                                            m_g,
                                            m_b;
            
            sf::Image m_Image;
        
        // Function 
            void vectoriseImage();

    public:
        // Constructor / Destructor
            ImageToVector(const char *name_image);

            ~ImageToVector();
        
        // Accessor
            std::vector<std::vector<int>> getRed();
            std::vector<std::vector<int>> getGreen();
            std::vector<std::vector<int>> getBlue();
            std::vector<std::vector<std::vector<int>>> getRGB();

            unsigned int getWidth();
            unsigned int getHeight();
};

#endif