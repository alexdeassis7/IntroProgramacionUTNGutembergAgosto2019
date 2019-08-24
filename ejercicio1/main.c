#include <stdio.h>
#include <stdlib.h>

int main()
{
   float capitalInvertido = 10000;
   float mes  = 30 ;
   float interesDiario = 0.01;
   float interesGanado = (capitalInvertido * mes) * interesDiario;

   printf("usted invirtio %.2f y se llevo %.2f de gananacias\n",capitalInvertido,interesGanado);
    printf("TOTAL DINERo EN SU CUENTA %.2f \n",interesGanado+ capitalInvertido);
    return 0;
}
