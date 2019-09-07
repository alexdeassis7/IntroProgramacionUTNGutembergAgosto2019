#include <stdio.h>
#include <stdlib.h>
#define PORCENTAJE1 0.05
#define PORCENTAJE2 0.07
#define PORCENTAJE3 0.1
#define PORCENTAJE4 0.15
#define PORCENTAJE5 0.2

int main()
{

    float salarioMensual = 0, utilidad = 0, antiguedad = 0;
    printf("Ingrese su salario mensual \n");
    scanf("%f",&salarioMensual  );
    printf("Ingrese su antiguedad en la empresa");
    scanf("%f",&antiguedad );

    if (antiguedad  < 1)
    {
        utilidad = salarioMensual * PORCENTAJE1;
    }
    else if (antiguedad >= 1 && antiguedad < 2)
    {
        utilidad = salarioMensual * PORCENTAJE2;
    }
    else if (antiguedad >= 2 && antiguedad < 5)
    {
        utilidad = salarioMensual * PORCENTAJE3;
    }
    else if (antiguedad >= 5 && antiguedad < 10)
    {
        printf("su utilidad es  %f", (salarioMensual * PORCENTAJE5) );

        utilidad = salarioMensual * PORCENTAJE4;
    }
    else
    {
        printf("su utilidad es  %f", (salarioMensual * PORCENTAJE5) );
        utilidad = salarioMensual * PORCENTAJE5;
    }

    printf("usted recibira una utilidad de %f", utilidad);
    return 0;
}
