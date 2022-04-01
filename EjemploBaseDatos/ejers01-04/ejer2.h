#ifndef EJER_2_H_
#define EJER_2_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

typedef struct
{

    char *nombrePedido;
    float precio;

} Pedido;

int leerLineas(char *filename);
Pedido *leerFichero(int numLineas, char *filename);

#endif