#include <iostream>
#include "data/ImageToVector/ImageToVector.hpp"
#include "data/Graphic/Graphic.hpp"

int main()
{
    ImageToVector Image1("Image/6_001.jpg");
    Graphic Graphic1("6_001");

    std::cout << "Window open" << std::endl;

    int x = 0, y = 0;

    while(Graphic1.isOpen())
    {
        Graphic1.pollEvent();
        Graphic1.updateScreen();
        Graphic1.addCoord2D(x, y);
        x ++;
        y ++;
    }

    std::cout << "Window close" << std::endl;

    return 0;
}