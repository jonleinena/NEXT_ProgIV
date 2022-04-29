#include <iostream>

#ifndef EJER1_H_
#define EJER1_H_

using namespace std;

namespace containers
{

    class ArrayInt
    {
    private:
        unsigned int capacity;
        int *array;

    public:
        ArrayInt();
        ArrayInt(unsigned int capacity);
        ~ArrayInt();
        void setValue(unsigned int index, int data);
        int getValue(unsigned int index);
        void setCapacity(unsigned int capacity);
        unsigned int getCapacity();
    };

    class Element
    {
    private:
        int data;
        Element *next;

    public:
        Element(int data);
        int getData();
        void setNext(Element *e);
        Element *getNext() const;
    };

    class Stack
    {
    private:
        Element *first;
        unsigned int size;

    public:
        Stack();
        ~Stack();
        void push(int dato);
        int pop();
        int poll();
        void clear();
        unsigned int getSize();
    };

}

#endif
