#include <stdio.h>
#include <stdlib.h>
/**PROTOTIPO DE LA FUNCION*/
int sumar (int n1, int n2 );
int restar (int n1, int n2 );
int multiplicar(int n1, int n2 );
int dividir(int n1, int n2 );
void mostrarmensaje();

int main()
{
    int opcionIngresada = 0;
    printf("********CALCULADORA********\n");
    printf("INGRESE LA OPCION DESEADA\n");
    printf("1: SUMAR\n");
    printf("2: RESTAR\n");
    printf("3: MULTIPLICAR\n");
    printf("4: DIVIDIR\n");
    scanf("%i", &opcionIngresada);

    switch(opcionIngresada)
    {
        int numero1 = 0;
        int numero2 = 0;
    case 1 :
        printf("ested selecciono opcion 1");
        mostrarmensaje();
        scanf("%i", &numero1);
        mostrarmensaje();
        scanf("%i", &numero2);
        printf("El resultado es %i\n",sumar(numero1, numero2));
        break;
    case 2 :
        printf("ested selecciono opcion 2");
        mostrarmensaje();
        scanf("%i", &numero1);
        mostrarmensaje();
        scanf("%i", &numero2);

        printf("El resultado es %i\n", restar(numero1, numero2));

        break;

    case 3 :
        printf("ested selecciono opcion 3");
        mostrarmensaje();
        scanf("%i", &numero1);
        mostrarmensaje();
        scanf("%i", &numero2);
        printf("El resultado es %i\n",multiplicar(numero1, numero2));

        break;
    case 4 :
        printf("ested selecciono opcion 4");
        printf("ested selecciono opcion 3");
        printf("ingrese el numero 1\n");
        scanf("%i", &numero1);
        printf("ingrese el numero 1\n");
        scanf("%i", &numero2);
        if (dividir(numero1, numero2) == 0 )
        {
                printf("ingresaste mal el dato intenta de nuevo \n");
        }
        else
        {
            printf("El resultado es %i\n",dividir(numero1, numero2));
        }
        break;
    default:
        printf("opcion ingresada no es valida \n");
    }
    return 0;
}
/**DEFINIMOS NUESTRAS FUNCIONES*/
int sumar (int n1, int n2 )
{
    /**CUERPO DE LA FUNCION */
    int resultado =  n1 + n2 ;
    return resultado;
}

int restar (int n1, int n2 )
{
    /**CUERPO DE LA FUNCION */
    int resultado =  n1 - n2 ;
    return resultado;
}
int multiplicar (int n1, int n2 )
{
    /**CUERPO DE LA FUNCION */
    int resultado =  n1 * n2 ;
    return resultado;
}
int  dividir (int n1, int n2 )
{
    /**CUERPO DE LA FUNCION */
    if (n2 == 0)
    {
        printf("No podes dividir por cero en los numeros reales \n");
        return 0 ;
    }
    else
    {
        return n1 / n2 ;
    }

}

void mostrarmensaje(){
    printf("ingrese un numero \n");
}



