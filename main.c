#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *dni;
    char *contrasenya;
    char *nombreApellidos;
    char *fechaNacimiento;
    int telefono;
    char *email;
} Usuario;

typedef struct
{
    int a;
    int b;
} Prueba;

int main(void)
{

    Prueba p = {1, 23};

    Usuario u1 = {"72837211Y", "1234567AaB", "Jon Leiñena Otamendi", "13/12/2000", 697937310, "jon.leinena@opendeusto.es"};
    // printf("el valor de a es %i y el de b %i\n", p.a, p.b);

    Usuario u2;
    u2.dni = "72837211Z";
    u2.contrasenya = "1234567AaB";
    u2.nombreApellidos = "Jon Leiñena Otamendi";
    u2.fechaNacimiento = "13/12/2000";
    u2.telefono = 697937310;
    u2.email = "jon.leinena@opendeusto.es";

    Usuario *users = (Usuario *)malloc(5 * sizeof(Usuario));

    for (int i = 0; i < 5; i++)
    {

        (users + i)->dni = "" + i;
        // strcpy((users + i)->dni, (const char *)"JOnLe");
        (users + i)->nombreApellidos = "" + i;
        (users + i)->contrasenya = "" + i;
        (users + i)->email = "" + i;
        (users + i)->fechaNacimiento = "" + i;
        (users + i)->telefono = i;

        // printf("\n%i\n", i);
    }

    for (int i = 0; i < 5; i++)
    {
        /*
        printf("%i********\n", i);
        printf("%x\n", (users + i));
        printf("%x\n", (users + i)->dni);
        printf("%x\n", (users + i)->contrasenya);
        */
    }

    for (int i = 0; i < 5; i++)
    {
        free((users + 1)->dni);
        free((users + 1)->nombreApellidos);
        free((users + 1)->contrasenya);
        free((users + 1)->email);
        free((users + 1)->fechaNacimiento);
    }
    free(users);

    // printf("El dni del u1 es %s", u1.dni);
    // printf("El dni del u2 es %s", u2.dni);

    char nombre[6] = "jonle";
    // printf("nombre %s", (nombre));

    Usuario users1[5];

    (users1[0]).dni = "jonle";
    (users1[1]).dni = "yepa";

    printf("El dni del u1 es %s", (users1[0].dni));
    printf("El dni del u2 es %s", (users1[1].dni));

    return 0;
}
