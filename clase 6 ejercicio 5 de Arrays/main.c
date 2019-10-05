#include <stdio.h>
#include <stdlib.h>
int main()
{
    /**   Almacenar 300 números en un vector,
       imprimir cuantos son ceros, cuantos son negativos y
       cuantos positivos. Imprimir además la suma de los negativos
       y la suma de los positivos */

    int vector[300] ;

    int contardorDeCeros = 0;
    int contardorDeNumerosPositivos = 0;
    int contardorDeNumerosNegativos = 0;

    int acumuladorPositivos = 0;
    int acumuladorNegativos  = 0;

    /**CARGAMOS EL ARRAY DE DATOS */
    for(int x = 0 ; x < 5; x++ )
    {
        vector[x] = x - 1;
        printf("vector[ %i ] = %i \n", x, vector[x]) ;
        if(vector[x] > 0)
        {
            contardorDeNumerosPositivos ++;
            acumuladorPositivos += vector[x];
        }
        else if (vector[x] < 0)
        {
            contardorDeNumerosNegativos ++ ;
            acumuladorNegativos += vector[x];
        }
        else
        {
            contardorDeCeros ++ ;
        }
    }
    printf("CANTIDAD DE CEROS ENCONTRADOS = %i\n",contardorDeCeros);

    printf("CANTIDAD DE NUMEROS NEGATIVOS ENCONTRADOS = %i\n",contardorDeNumerosNegativos);
    printf("CANTIDAD DE NUMEROS POSITIVOS ENCONTRADOS = %i\n",contardorDeNumerosPositivos);

    printf("LA SUMA DE TODOS LOS NUMERO POSITIVOS ENCONTRADOS ES =  %i \n", acumuladorPositivos);
    printf("LA SUMA DE TODOS LOS NUMERO NEGATIVOS ENCONTRADOS ES = %i \n", acumuladorNegativos);




           return 0;
}
