#include "ejer2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int leerLineas(char *filename)
{
    FILE *f;
    f = fopen(filename, "r");

    int num_lineas = 0;
    char c;

    while ((c = fgetc(f)) != EOF)
    {
        if (c == '\n')
        {
            num_lineas++;
        }
        putchar(c);
    }
    fclose(f);
    return num_lineas / 2;
}

Pedido *leerFichero(int numLineas, char *filename)
{
    Pedido *pedidos;
    pedidos = (Pedido *)malloc(numLineas * sizeof(Pedido));

    FILE *f;
    f = fopen(filename, "r");

    char contenido[MAX];

    int i = 0;
    while (i < numLineas)
    {

        fgets(contenido, MAX, f);
        sscanf(contenido, "%s", pedidos[i].nombrePedido);

        fgets(contenido, MAX, f);
        sscanf(contenido, "%f", pedidos[i].precio);

        i++;
    }

    return pedidos;
}