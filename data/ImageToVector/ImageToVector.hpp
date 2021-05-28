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
#include <fstream>

class ImageToVector
{
    public:
        // Constructor / Destructor
            ImageToVector();
            ImageToVector(const char *nameimage);

            ~ImageToVector();
        
        // Accessor
            std::vector<std::vector<int>> getRed();
            std::vector<std::vector<int>> getGreen();
            std::vector<std::vector<int>> getBlue();
            std::vector<std::vector<std::vector<int>>> getRGB();

    private:
        // Variable
            std::vector<std::vector<std::vector<int>>> m_rgb;
            std::vector<std::vector<int>>   m_r,
                                            m_g,
                                            m_b;
};

#endif