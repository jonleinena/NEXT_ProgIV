#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{

private:
    char *nombre;

    int edad;

public:
    int const getEdad();
    void setEdad(int edad);
    char *const getNombre();
    void setNombre(char *nombre);
    virtual void toString() = 0; // esto hae que la clase sea abstracta
    // Una clase abstracta NO SE PUEDE INSTANCIAR
    // no puedo crear objetos con un constructor de animal
};

#endif