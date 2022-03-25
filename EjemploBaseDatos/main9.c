#include "ejer9.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    Complex c1 = {5, 7};
    Complex c2 = {2, 3};

    Complex *c1p;
    Complex *c2p;
    c1p = (Complex *)malloc(sizeof(Complex));
    c2p = (Complex *)malloc(sizeof(Complex));

    c1p->real = 5;
    c1p->imaginario = 7;
    c2p->real = 2;
    c2p->imaginario = 3;

    printf("El valor real de C1 antes de la resta: %i\n", c1.real);

    printf("El valor real de C1p antes de la resta: %i\n", c1p->real);

    restar(&c1, &c2);
    restar(c1p, c2p);

    printf("El valor real de C1 despues de la resta: %i\n", c1.real);
    printf("El valor real de C1p despues de la resta: %i\n", c1p->real);

    free(c1p);
    free(c2p);

    return 0;
}