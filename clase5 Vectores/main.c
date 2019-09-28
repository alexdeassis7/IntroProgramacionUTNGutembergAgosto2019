#include <stdio.h>
#include <stdlib.h>

int main()
{    /**Definicion de vectores */
    int notas [10];
    /**Carga de un vector */
//    vector[0]= 22;
//    vector[1]= 123;
//    vector[2]= 56;

    /**utilizo for para carga el array de manera dinamica*/
    for(int x = 0 ;x < 10 ; x++){
        printf("ingrese la nota %i \n", (x +1) );
        scanf("%i",&notas[x]);
    }
     for(int y = 0 ;y < 10 ; y++){
        printf("NOTAS [%i] = %i \n", y ,notas[y]);

    }


//
//    printf("vector[0] = %i \n",vector[0]);
//    printf("vector[3] = %i \n",vector[3]);
//    printf("vector[9] = %i \n",vector[9]);


    return 0;
}
