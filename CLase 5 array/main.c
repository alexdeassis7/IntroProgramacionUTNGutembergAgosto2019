#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numeroIngresado = 0, sumatoria = 0;
    float NumerosPares[10] ;
    int indice = 0 ,promedio = 0;
    do
    {
        printf("ingrese un numero PAR por favor \n");
        scanf("%i", &numeroIngresado);
        if(numeroIngresado%2 == 0)
        {
            NumerosPares[indice] = numeroIngresado ;
            indice ++;
            sumatoria += numeroIngresado;
        }else{
            printf("ERROR : ingreso un numero IMPAR\n");
        }
    }
    while( indice < 10 );
    promedio = sumatoria / 10;
    for(int t = 0 ; t < 10 ; t++){
        printf("Array [%i] %f \n", t, NumerosPares[t]);
    }
    printf("El pormedio es  : %i", promedio);

    return 0;
}
