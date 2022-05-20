#include "Animal.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
void Animal::setEdad(int edad)
{
    this->edad = edad;
}

const int Animal::getEdad()
{
    return this->edad;
}

void Animal::setNombre(char *nombre)
{
    this->nombre = new char[strlen(nombre) + 1]; //+1 para el /0 de nombre
    strcpy(this->nombre, nombre);
}
