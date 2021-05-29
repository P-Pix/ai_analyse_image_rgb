#include <iostream>
#include "data/ImageToVector/ImageToVector.hpp"
#include "data/Graphic/Graphic.hpp"

int main()
{
    ImageToVector Image1("Image/6_001.jpg");
    Graphic Graphic1("6_001");

    while(Graphic1.isOpen())
    {
        Graphic1.pollEvent();
    }
    return 0;
}