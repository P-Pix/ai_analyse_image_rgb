#if !defined(__GRADIENT__)
#define __GRADIENT__

#include <iostream>
#include <vector>

class Gradient
{
    private:
        // Variable 
            bool    m_running = true;

            float   m_a = 0,
                    m_b = 0,
                    m_c = 0,

                    m_cout = 1,
                    m_alpha = 1;
            int     m_couter = 0;
        // Structur
            struct Coord2D
            {
                float x = 0;
                float y = 0;
            };

            std::vector<Coord2D> m_vectorcoord;
            std::vector<float> m_vectorderivate;
        // Function
            float function(float a, float b, float c, int x);
            void cout();

            float derivateA();
            float derivateB();

            void tangeante();

    public:
        // Constructor / Destructor
            Gradient();
            ~Gradient();
        
        // Accessor
            bool isRunning();

        // Function
            void addCoord2D(float x, float y);
            void execution();
};

#endif