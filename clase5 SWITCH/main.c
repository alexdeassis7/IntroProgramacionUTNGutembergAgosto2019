#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcionIngresada = 0;

    int n1 = 0, n2 = 0, rs = 0;
    printf("por favor ingrese un opcion \n");
    printf("1 : SUMAR \n 2 : RESTAR  \n 3 : DIVIDIR");
    scanf("%i",&opcionIngresada);

    switch(opcionIngresada)
    {
    case 1 :
            printf("ingrese el numero 1 \n");
            scanf("%i",&n1);
            printf("ingrese el numero 1 \n");
            scanf("%i",&n2);
            rs = n1 + n2 ;
            printf("RESULTADO = %i", rs);
        break;

    case 2 :
           printf("ingrese el numero 1 \n");
            scanf("%i",&n1);
            printf("ingrese el numero 1 \n");
            scanf("%i",&n2);
            rs = n1 - n2 ;
            printf("RESULTADO = %i", rs);
        break;
    case 3 :
        printf("usted escogio la opcion 2");
    break;
    default:
        printf("La opcion ingresada no es valina \n");
    }
    return 0;
}
