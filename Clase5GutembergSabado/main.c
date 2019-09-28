#include <stdio.h>
#include <stdlib.h>

int main()
{       /**Leer 10 numeros e imprimir la cantidad
    de positivos , negativos y neutros */
    int numeroIngresado = 0;
    int CantNegativos = 0;
    int CantPositivos = 0;
    int CantNeutros = 0;
    for(int x = 1 ; x<= 10 ; x++)
    {   printf("ingrese el numero %i \n",x);
        scanf("%i",&numeroIngresado);
        if(numeroIngresado < 0) {
                    CantNegativos ++;
        }
        else if (numeroIngresado > 0)  {
            CantPositivos ++;
        }
        else  {
            CantNeutros ++ ;
        }
    } printf("unçsted ingreso : \n");
    printf("NEGATIVOS : %i \n POSITIVOS : %i \n CEROS : %i",CantNegativos,CantPositivos,CantNeutros);

    return 0;
}
