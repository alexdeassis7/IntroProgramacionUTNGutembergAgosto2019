#include <stdio.h>
#include <stdlib.h>

int main()
{
   /**leer 5 numeros y comvertir los
   negativos a    positivos*/
   int numeroIngresado = 0;

   for(int x =1 ; x <= 5 ; x++){
    printf("INGRESE EL NUMERO %i", x);
    scanf("%i",&numeroIngresado);

    if(numeroIngresado < 0){

        printf("NUMERO POSITIVO %i \n", (numeroIngresado * -1)) ;
    }else{
        printf("NUMERO POSITIVO %i \n", numeroIngresado);
    }


   }



    return 0;
}
