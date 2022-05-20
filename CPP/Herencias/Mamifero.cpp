#include "Mamifero.h"
#include <iostream>
#include <stdlib.h>

using namespace std; // namespace para llamar al cout
Mamifero::Mamifero()
{
    this->setNombre("Mamifero");
    this->setEdad(0);
}
Mamifero::Mamifero(int edad, char *nombre)
{
    this->setNombre(nombre);
    this->setEdad(edad);
}

Mamifero::~Mamifero()
{
    delete[] this->getNombre();
    this->setEdad(NULL);
}

void Mamifero::tenerHijos()
{
    cout << "estoy teniendo hijos" << endl;
}
void Mamifero::toString()
{ // System.out.println("nombre: "+getNombre()+" edad: "+getEdad());
    cout << "nombre: " << this->getNombre() << " edad : " << this->getEdad() << endl;
}