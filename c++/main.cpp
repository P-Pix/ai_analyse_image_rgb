#include <iostream>

#include "data/ImageToVector/ImageToVector.hpp"
#include "data/Graphic/Graphic.hpp"
#include "data/Gradient/Gradient.hpp"

int main()
{
    ImageToVector Image1("Image/6_001.jpg");
    Graphic Graphic1("6_001");
    Gradient Gradient1;

    Gradient1.addCoord2D(1, 4);
    Gradient1.addCoord2D(2, 8);
    Gradient1.addCoord2D(3, 4);
    Gradient1.execution();

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