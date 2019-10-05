#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[100] = {'a', 'l','e','x'};
    char apellido[100];
    printf("nombre  :%s \n  ", nombre);

    printf("por favor ingrese su nombre \n");
    scanf("%s", nombre);

    printf("por favor ingrese su apellido \n");
    scanf("%s", apellido );

    printf("usted ingreso :\n %s \n %s ", nombre, apellido);

    int dimencionIngresada = 0;

    printf("ingrese la dimencion del array ");
    scanf("%i", &dimencionIngresada);

    int array[dimencionIngresada];

    for (int x = 0 ;  x< dimencionIngresada ; x++)
    {
        printf("ingrese el valor %i \n", x);
        scanf("%i",&array[x]);
    }
    for (int x = 0 ;  x< dimencionIngresada ; x++)
    {
        printf("array [%i] =  %i \n", x, array[x]);
    }


    return 0;
}
