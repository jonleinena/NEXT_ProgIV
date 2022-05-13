#ifndef EJER3_H
#define EJER3_H

namespace cointainers
{

    class Point
    {
    private:
        int x, y;

    public:
        Point(int x, int y);
        void suma1(Point p);
        void suma2(Point &p);
        void suma3(Point *p);
        Point getSuma(Point &p);
        void print();
    };

    class Alumno
    {
    private:
        static int counter;
        int id;
        char *nombre;

    public:
        Alumno(const char *nombre);
        Alumno(Alumno &a);
        ~Alumno();
        int getID();
        char *getNombre();
    };

}

#endif