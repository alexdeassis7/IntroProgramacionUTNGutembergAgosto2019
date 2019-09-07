#include <stdio.h>
#include <stdlib.h>

#define CANTIDADNOTAS 3
int main()
{
    /** Determinmar si un alumno aprueba o reprueba un curso ,
       sabiendo que aprobara si su promedio de tres
       calificaciones es mayor o igual a 7; de lo contrario
       reprueba*/

    /**definimos variables de trabajo */
    float nota1 = 0,nota2 = 0, nota3 = 0, promedio = 0;

    /**solicitamos los datos al user*/
    printf("Por favor ingres la nota 1\n");
    scanf("%f",&nota1);
    printf("Por favor ingres la nota 2\n");
    scanf("%f",&nota2);
    printf("Por favor ingres la nota 3\n");
    scanf("%f",&nota3);
    /**calculamos el promedio */
    promedio = (nota1 + nota2 +nota3) / CANTIDADNOTAS ;

    /**modificamos el curso de nuestro programa
    en base al resultado de una determinada condicón*/
    if(promedio >= 7)
    {    /**cuerpo del if */
        printf("CONGRATULATIOONS Aproved \n");
    }
    else
    {
        printf("RECUPERA desaprobo el examen\n");
        printf("su promedio fue de  %.2f",promedio);
        /**cuerpo del else*/
    }
    return 0;
}
