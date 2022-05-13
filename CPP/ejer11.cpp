#include <iostream>
#include "ejer11.h"
#include <stdlib.h>

using namespace containers;

ArrayInt::ArrayInt()
{
    this->capacity = 0;
    this->array = new int[this->capacity];
}
ArrayInt::ArrayInt(unsigned int capacity)
{
    this->capacity = capacity;
    this->array = new int[this->capacity];
}
ArrayInt::~ArrayInt()
{
    this->capacity = NULL;
    delete[] this->array;
    this->array = NULL;
}
void ArrayInt::setValue(unsigned int index, int data)
{
    this->array[index] = data;
}
int ArrayInt::getValue(unsigned int index)
{
    return this->array[index];
}
void ArrayInt::setCapacity(unsigned int capacity)
{
    this->capacity = capacity;
}
unsigned int ArrayInt::getCapacity()
{
    return this->capacity;
}