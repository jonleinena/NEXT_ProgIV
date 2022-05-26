#include "ConHijos.h"
#include "Miembro.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
ConHijos::ConHijos() : Familia()
{
    this->numHijos = 0;
    this->hijos = new Miembro *[numHijos]; // Hijos es un puntero a puntero
}

ConHijos::ConHijos(Miembro *h, Miembro *m, int numHijos) : Familia(h, m) // para llamar al constructor del padre
{
    // super()
    this->numHijos = numHijos;
    this->hijos = new Miembro *[this->numHijos];
}

ConHijos::ConHijos(const ConHijos &c) : Familia(c)
{
    this->numHijos = c.getNumHijos();
    this->hijos = new Miembro *[numHijos];

    for (int i = 0; i < numHijos; i++)
    {
        this->hijos[i] = c.getHijos()[i];
    }
}
ConHijos::~ConHijos()
{
    delete[] this->hijos;
}
void ConHijos::setNumHijos(int numHijos)
{
    this->numHijos = numHijos;
    delete[] this->hijos;
    this->hijos = new Miembro *[numHijos];
}

int ConHijos::getNumHijos() const
{
    return this->numHijos;
}

void ConHijos::setHijos(Miembro *h, int orden)
{
    this->hijos[orden] = h;
}

Miembro **ConHijos::getHijos() const
{
    return this->hijos;
}

Miembro *ConHijos::getHijo(int orden) const
{
    return this->hijos[orden];
}
void ConHijos::imprimir() // polimorfico
{
    Familia::imprimir();

    cout << "HIJOS" << endl;
    for (int i = 0; i < this->numHijos; i++)
    {
        cout << "Hijo " << (i + 1) << " " << this->hijos[i]->toStr() << endl;
    }
}
