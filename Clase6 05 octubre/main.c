#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**Llenar dos vectores A y B de 10 elementos cada uno,
    sumar el elemento uno del vector A con el
    elemento uno del vector B y así sucesivamente hasta 10,
    almacenar el resultado en un vector C,
    e imprimir el vector resultante por pantalla.*/

    int vectorA []= {11,2,5,7,9,10,23,1,7,6,8} ;
    int vectorB []= {7,8,25,30,31,62,9,8,9,0,5} ;

    int vectorC[10] ;

    for (int x= 0 ; x <= 10 ; x++)
    {
        vectorC[x] = vectorA[x] + vectorB[x];
        printf("vectorC [%i]  = %i \n", x, vectorC[x]);
    }

    int menor = 10000;
    int mayor = 0;
    /**Buscar el menor y el mayor valor del ArrayA*/
    for(int x=0 ; x <= 10; x++ )
    {        }

    int  x = 0;
    while(mayor < 11)
    {
        int y = 0;
        int mayor = 0;
        while (y < 11 )
        {

            if (vectorA[x] >= vectorA [y])
            {
                mayor++;

            }
            y++;
        }
        if (mayor < 11)
        {
            x++;
        }
        printf("%i",vectorA[x]);
    }

    return 0;
}
