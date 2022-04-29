#include "ejer1.h"
#include <iostream>
#include <stdlib.h>

using namespace containers;

ArrayInt ::ArrayInt()
{ // constructor vacío
    this->capacity = 0;
    this->array = new int[this->capacity]; // malloc(capacity*sizeof(int));
    // String array = new String[5];
}
ArrayInt ::ArrayInt(unsigned int capacity)
{
    this->capacity = capacity;
    this->array = new int[this->capacity];
}
ArrayInt ::~ArrayInt()
{
    // free() se convierte en delete[]
    delete[] this->array;
}
void ArrayInt ::setValue(unsigned int index, int data)
{ // unsigned = sin signo -> numero >=0
    this->array[index] = data;
}
int ArrayInt ::getValue(unsigned int index)
{
    return this->array[index];
}
void ArrayInt ::setCapacity(unsigned int capacity)
{
    this->capacity = capacity;
}
unsigned int ArrayInt ::getCapacity()
{
    return this->capacity;
}

Element ::Element(int data)
{
    this->data = data;
    this->next = NULL;
}
int Element ::getData()
{
    return this->data;
}
void Element ::setNext(Element *e)
{
    this->next = e;
}
Element ::*getNext() const
{
    return this->next;
}

Stack ::Stack()
{
    this->first = NULL;
    this->size = 0;
}

Stack ::~Stack()
{
    delete[] this->first;
}

void Stack::push(int dato)
{
    Element *e = new Element(dato);
    this->size++;
    this->first.setNext(e);
    this->first = e;
}