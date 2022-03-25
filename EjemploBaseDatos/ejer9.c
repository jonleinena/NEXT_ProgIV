#include "ejer9.h"

void restar(Complex *c1, Complex *c2)
{
    c1->real = c1->real - c2->real;
    (*c1).imaginario = (*c1).imaginario - (*c2).imaginario;
}