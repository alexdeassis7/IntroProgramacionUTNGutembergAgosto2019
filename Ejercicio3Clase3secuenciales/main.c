#include <stdio.h>
#include <stdlib.h>

#define PORCENTAJE 100

int main()
{
    /**un maestro desea saber que porcentaje de hombres y de mujeres
    hay en un grupo de estudiantes*/

    float totalHombres = 0 , totalMujeres= 0 , totalAlumnos = 0;
    float porcentajeHombres = 0 , porcentajeMujeres = 0;

    printf("por favor ingres el total de hombres\n");
    scanf("%f", &totalHombres);
    printf("por favor ingres el total de mujeres\n");
    scanf("%f", &totalMujeres);

    totalAlumnos =  totalMujeres + totalHombres;

    porcentajeMujeres = totalMujeres*PORCENTAJE/totalAlumnos;
    porcentajeHombres = totalHombres*PORCENTAJE / totalAlumnos;

    printf("\n el %% de mujeres es %f", porcentajeMujeres);
    printf("\n el %% de hombres es %f", porcentajeHombres);

    return 0;
}
