#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"
#include <iostream>
using namespace std;

int main()
{
	Miembro luis("Luis Diez", 60 /*años*/);
	Miembro marta("Marta Sanchez", 58);
	Miembro angel("Angel Diez", 32);
	Miembro laura("Laura Ponte", 30);
	Miembro hodei("Hodei Diez", 2);
	Miembro ana("Ana Diez", 7);
	Miembro pablo("Pablo Diez", 10);
	Miembro jon("Jon Pena", 40);
	Miembro maite("Maite Pazos", 35);

	cout << luis.toStr() << " os desea suerte en el examen." << endl;

	Familia f(&jon, &maite); // Creamos una instancia de familia

	ConHijos c1(&luis, &marta, 1); // creamos una instancia de COnHijos
	c1.setHijos(&jon, 0);		   // le añadimos un hijo (en la primera posición) al conHijos creado

	ConHijos c2(&pablo, &ana, 4);
	c2.setHijos(&hodei, 0);
	c2.setHijos(&maite, 1);
	c2.setHijos(&luis, 2);
	c2.setHijos(&angel, 3);

	f.imprimir();  // llamamos a imprimir
	c1.imprimir(); // llamamos a imprimir
	c2.imprimir();

	int numeroMenores = 0;

		return 0;
}
