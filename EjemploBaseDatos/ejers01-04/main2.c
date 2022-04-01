#include "ejer2.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    int numLineas = leerLineas("pedidos.txt");
    Pedido *pedidos;

    pedidos = leerFichero(numLineas, "pedidos.txt");

    for (int i = 0; i < numLineas; i++)
    {
        printf("\nNombre pedido %i: %s", i, pedidos[i].nombrePedido);
        printf("\nPrecio pedido %i: %f", i, pedidos[i].precio);
    }
    free(pedidos);
}