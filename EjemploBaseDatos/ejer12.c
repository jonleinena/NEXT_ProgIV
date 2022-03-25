#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    /* Definir un tipo de datos Fracción */
    int numerador;
    int denominador;
} Fraccion;

int main(void)
{
    int a = 5;                                 // Declarar una variable de tipo entero
    Fraccion f = {5, 3};                       // Declarar una variable de tipo fraccion
    int *b;                                    // crear un puntero a entero
    Fraccion *fp;                              // Declarar un puntero a una fracción
    b = &a;                                    // Hacer que el puntero declarado en (3) apunte al entero declarado en (1)
    fp = (Fraccion *)malloc(sizeof(Fraccion)); // Apuntar con el puntero de (4) a una fracción creada en memoria dinámica

    f.numerador = 3; // Modificar el valor de la fracción (por ejemplo con 3/4) creada en (2)
    f.denominador = 4;

    fp->numerador = 6; // Modificar el valor de la fracción (por ejemplo con 3/4) creada en (6)
    fp->denominador = 10;

    *(b) = 7; // Modificar el valor del entero usando el puntero declarado en (3)

    free(fp);
    return 0;
}
