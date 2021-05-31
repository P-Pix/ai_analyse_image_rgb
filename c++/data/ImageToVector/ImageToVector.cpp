/**
 * @file ImageToVector.cpp
 * @author yGuillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-05-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "ImageToVector.hpp"

ImageToVector::ImageToVector(const char *nameimage)
{
    m_Image.loadFromFile(nameimage);
    vectoriseImage();
}
ImageToVector::~ImageToVector()
{
    
}