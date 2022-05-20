
#ifndef PERRO_H
#define PERRO_H
#include "Mamifero.h"
#include "ITerrestre.h"
class Perro : public Mamifero, ITerrestre
{
public:
    virtual void hablar();     // PARA QUE NO SEA ABSTRACTA, PORQUE HEREDA DE UNA CLASE ABSTRACTA
    virtual void tenerHijos(); // PARA EL POLIMORFISMO
};

#endif