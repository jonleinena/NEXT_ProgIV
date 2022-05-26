#include "Miembro.h"

#ifndef FAMILIA_H
#define FAMILIA_H

class Familia
{
private:
    Miembro *conyugeH, *conyugeM;

public:
    Familia();
    Familia(Miembro *, Miembro *);
    ~Familia();
    Familia(const Familia &);
    void setMiembroH(Miembro *);
    const Miembro *getMiembroH();
    void setMiembroM(Miembro *);
    const Miembro *getMiembroM();
    char *getNombre();
    virtual void imprimir(); // es un metodo polimorfico
};

#endif