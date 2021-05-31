#include "Gradient.hpp"

void Gradient::cout()
{
    float derivate = 1;
    derivate /= (2 * m_vectorcoord.size());
    float derivatestock = 0;
    for(int x = 0; x < m_vectorcoord.size(); x ++)
    {
        derivatestock += ((function(m_a, m_b, m_c, m_vectorcoord[x].x) - m_vectorcoord[x].y) * (function(m_a, m_b, m_c, m_vectorcoord[x].x) - m_vectorcoord[x].y));
    }
    m_cout =  derivate * derivatestock;
}

float Gradient::derivateA()
{
    float derivate = 1;
    derivate /= m_vectorcoord.size();
    float derivatestock = 0;
    for(int x = 0; x < m_vectorcoord.size(); x ++)
    {
        derivatestock +=  (x * (function(m_a, m_b, m_c, m_vectorcoord[x].x) - m_vectorcoord[x].y));
    }
    return derivate * derivatestock;
}
float Gradient::derivateB()
{
    float derivate = 1;
    derivate /= m_vectorcoord.size();
    float derivatestock = 0;
    for(int x = 0; x < m_vectorcoord.size(); x ++)
    {
        derivatestock +=  (function(m_a, m_b, m_c, m_vectorcoord[x].x) - m_vectorcoord[x].y);
    }
    return derivate * derivatestock;
}

void Gradient::tangeante()
{
    m_a = m_a - m_alpha * derivateA();
    m_b = m_b - m_alpha * derivateA();
    m_c = m_c - m_alpha * derivateB();
}
float Gradient::function(float a, float b, float c, int x)
{
    return a * x * x + b * x + c;
}