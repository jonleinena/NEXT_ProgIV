#include "Familia.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

Familia::Familia()
{
    this->conyugeM = new Miembro();
    this->conyugeH = new Miembro();
}

Familia::Familia(Miembro *conyugeH, Miembro *conyugeM)
{
    this->conyugeH = conyugeH;
    this->conyugeM = conyugeM;
}

Familia::Familia(const Familia &fam)
{
    this->conyugeH = fam.conyugeH;
    this->conyugeM = fam.conyugeM;
}

Familia::~Familia()
{
    delete[] this->conyugeH;
    delete[] this->conyugeM;
}

void Familia::setMiembroH(Miembro *h)
{
    this->conyugeH = h;
}

void Familia::setMiembroM(Miembro *m)
{
    this->conyugeM = m;
}

const Miembro *Familia::getMiembroH()
{
    return this->conyugeH;
}

const Miembro *Familia::getMiembroM()
{
    return this->conyugeM;
}

char *Familia::getNombre()
{
    char *nombre = new char[50];
    char *nombreH = this->conyugeH->getNombre();
    char *nombreM = this->conyugeM->getNombre();

    for (int i = 0; i < strlen(nombreH); i++)
    {
        if (nombreH[i] == ' ')
        {
            strcpy(nombre, &(nombreH[i + 1]));
        }
    }

    strcat(nombre, " - ");

    for (int i = 0; i < strlen(nombreM); i++)
    {
        if (nombreM[i] == ' ')
        {
            strcat(nombre, &(nombreM[i + 1]));
        }
    }

    return nombre;
}

void Familia::imprimir()
{
    cout << "FAMILIA"
         << this->getNombre() << endl;
    cout << "Marido " << this->conyugeH->toStr() << endl;
    cout << "Mujer " << this->conyugeM->toStr() << endl;
}