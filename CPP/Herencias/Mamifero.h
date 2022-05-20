#ifndef MAMIFERO_H
#define MAMIFERO_H
#include "Animal.h"

class Mamifero : public Animal // Para que no sea abstracta, debe implementar TODOS los metodos abstractos del padre
{

public:
    Mamifero();
    Mamifero(int edad, char *nombre);
    ~Mamifero(); // se hace delete[] de los punteros y se pone todo a NULL
    virtual void tenerHijos();
    virtual void toString(); // tengo que ponerlo para que Mamifero NO SEA ABSTRACTO
};

#endif