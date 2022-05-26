#include "Familia.h"
#include "Miembro.h"
#ifndef ARBOLFAMILIAS_H
#define ARBOLFAMILIAS_H

#define MAX_FAM 5

class ArbolFamilias
{

private:
    Familia familias[MAX_FAM];
    int numeroFamilias;

public:
    ArbolFamilias();
    ArbolFamilias(int);
    ArbolFamilias(const ArbolFamilias &);
    ~ArbolFamilias();

    void setNumFamilias(int);
    int getNumFamilias() const;
    void anadirFamilia(Familia *);
    void imprimir();
    Familia *getFamilia(int) const;
    int contarMenoresEdad(int edad);
    Miembro **getConyugesInicial(int &, char);
};
#endif