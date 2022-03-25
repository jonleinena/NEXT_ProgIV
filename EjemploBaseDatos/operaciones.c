#include "operaciones.h"

float sumar(float a, float b)
{
    return a + b;
}
float restar(float a, float b)
{
    return a - b;
}
float multiplicar(float a, float b)
{
    return a * b;
}
float potencia(float base, int potencia)
{
    float res = 1.0;
    for (int i = 0; i < potencia; i++)
    {
        res *= base;
    }
    return res;
}
