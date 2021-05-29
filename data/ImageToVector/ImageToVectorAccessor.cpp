
#include "ImageToVector.hpp"

std::vector<std::vector<int>> ImageToVector::getRed()
{
    return m_r;
}
std::vector<std::vector<int>> ImageToVector::getGreen()
{
    return m_g;
}
std::vector<std::vector<int>> ImageToVector::getBlue()
{
    return m_b;
}
std::vector<std::vector<std::vector<int>>> ImageToVector::getRGB()
{
    return m_rgb;
}
unsigned int ImageToVector::getWidth()
{
    return m_width;
}
unsigned int ImageToVector::getHeight()
{
    return m_height;
}