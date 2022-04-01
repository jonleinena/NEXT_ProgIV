#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int main(void)
{

    char str[MAX];
    char *cadena;
    cadena = (char *)malloc(MAX * sizeof(char));

    printf("\nIntroduce una cadena: \n");
    fflush(stdout);
    fgets(str, MAX, stdin);
    sscanf(str, "%s", cadena);

    for (int i = strlen(cadena) - 1; i >= 0; i--)
    {
        printf("%c", cadena[i]);
    }

    free(cadena);
}