#include "operaciones.h"
#include <stdio.h>

int main(void)
{

    float a = 9.0;
    float b = 5.3;

    float suma = sumar(a, b);
    float resta = restar(a, b);
    float multiplicacion = multiplicar(a, b);
    float elevar = potencia(a, 3);

    printf("La suma de %f con %f es %f\n", a, b, suma);
    printf("La resta de %f con %f es %f\n", a, b, resta);
    printf("La multiplicacion de %f con %f es %f\n", a, b, multiplicacion);
    printf("La potencia de %f con %i es %f\n", a, 3, elevar);

    return 0;
}