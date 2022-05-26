#include "Familia.h"
#include "Miembro.h"

#ifndef CONHIJOS_H
#define CONHIJOS_H

class ConHijos : public Familia
{
private:
    Miembro **hijos;
    int numHijos;

public:
    ConHijos();
    ConHijos(Miembro *h, Miembro *m, int numHijos);
    ConHijos(const ConHijos &);
    ~ConHijos();

    void setNumHijos(int numHijos);
    int getNumHijos() const;
    void setHijos(Miembro *h, int orden);
    Miembro **getHijos() const;
    Miembro *getHijo(int orden) const;
    virtual void imprimir();
};

#endif