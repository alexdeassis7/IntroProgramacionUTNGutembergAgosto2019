#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosPares[100], indice = 0 ,sumaNumPares = 0;

    for(int x = 0 ; x < 200 ; x++)
    {
        if( x%2 == 0 )
        {
            numerosPares[indice] = x ;
            indice++ ;
            sumaNumPares += x;
            sumaNumPares = sumaNumPares + x;


        }
    }
    for(int j = 0; j <100 ; j++)
    {
        printf("NUMEROS PARES[ %i ] = %i\n", j,numerosPares[j]  );

    }
    printf("LA SUMA DE LOS PARES ES = %i ", sumaNumPares);

    return 0;
}
