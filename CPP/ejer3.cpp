#include "ejer3.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace cointainers;
using namespace std;
Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::suma1(Point p) // pasar por valor
{
    this->x = this->x + p.x;
    this->y = this->y + p.y;
    // p se borra aqui
}

void Point::suma2(Point &p)
{
    this->x = this->x + p.x;
    this->y = this->y + p.y;
}
void Point::suma3(Point *p)
{
    this->x = this->x + p->x;
    this->y = this->y + p->y;
}

Point Point::getSuma(Point &p)
{
    p.x = this->x + p.x;
    p.y = this->y + p.y;
    return p;
}

void Point::print()
{
    // System.out.println("X: "+x+ " Y "+y) ;
    cout << "X : " << this->x << "Y: " << this->y << endl;
}

Alumno::Alumno(const char *nombre)
{
    this->nombre = new char[sizeof(nombre) + 1];
    strcpy(this->nombre, nombre);
    this->id = 0;
    this->counter = 0;
}
Alumno::Alumno(Alumno &a)
{
    this->id = a.getID();
    this->counter = a.counter;
    this->nombre = new char[sizeof(a.getNombre())];
    strcpy(this->nombre, a.getNombre());
}

Alumno::~Alumno()
{
    delete[] this->nombre;
    this->nombre = NULL;
}

int Alumno::getID()
{
    return this->id;
}

char *Alumno::getNombre()
{
    return this->nombre;
}

int main(void)
{

    Point p1(1, 2);
    Point p2(3, 4);

    p1.suma1(p2);
    p1.print();

    p1.suma2(p2);
    p1.print();

    p1.suma3(&p2);
    p1.print();

    Alumno a("Juan");          // Alumno original
    Alumno b = a;              // Debe ser una copia de a
    Alumno c(b);               // Debe ser una copia de b
    Alumno *d = new Alumno(c); // Copia de c. delete necesario

    return 0;
}