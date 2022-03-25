#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char letra;
    letra = getchar();
    fflush(stdin); // limpia entrada por consola
    while (letra != 'q')
    {
        printf("La letra que has introducido es %c\n", letra);
        fflush(stdout); // limpia salida por consola
        letra = getchar();
        fflush(stdin);
    }
}