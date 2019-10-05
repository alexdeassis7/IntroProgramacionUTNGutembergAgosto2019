#include <stdio.h>
#include <stdlib.h>
/**encontra en mayor y menor valor de un array */
int main()
{
    /**defino e inicializo un vector*/
    int vectorB []= {7,8,25,30,31,62,9,8,994,45} ;
    int menor = 1000;
    int mayor = 0;

    /**recorro el array en busca del menor y  del mayor */
    for(int x = 0; x < 10; x ++)
    {
        /**buscamos el menor */
        if(menor > vectorB[x])
        {
            menor = vectorB[x];
        }
        /**buscamos el mayor */
        if (mayor < vectorB[x] )
        {
            mayor =  vectorB[x];
        }
    }printf("MAYOR = %i \n MENOR = %i", mayor, menor);



    return 0;
}
