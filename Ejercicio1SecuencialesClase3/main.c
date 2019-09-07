#include <stdio.h>
#include <stdlib.h>
#define NOMBREBANCO Nacion

/**Suponga que un individuo desea invertir su capital
 en un banco y desea saber  cuanto dinero ganara
 despueès de un mes si el banco le paga a razòn de un 2% mensula */
int main()
{
   /**defino contantes*/
   const float INTERES = 0.02;
   /**declaramos la variables de trabajo  */
   float capital = 0, ganancia = 0, resultado=0;

   printf("por favor ingrese el capital invertido\n");
   scanf("%f",&capital);

   ganancia = capital * INTERES ;
   resultado = ganancia + capital;

   printf("\nusted invirtio %.2f a 30 dias los cuales le generaron una ganancia de %.2f",capital,ganancia );
   printf("\nel total de su cuenta es %.2f", resultado);


    return 0;
}
