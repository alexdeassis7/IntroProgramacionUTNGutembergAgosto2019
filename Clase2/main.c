/**Soy comentario de bloque
directiva de pre procesador
*/
#include <stdio.h>
/**Contantes simbolicas*/
#define NUMEROCAOS 2001
#define MAYORDEEDAD 18

/**funciòn principal o punto de inicio de ejecucion del programa*/
int main()
{
    /**cuerpo de la funcion main*/

    /**Definicion de variables
    TipoDeDato NombreDeVariable ;
    */
    //CamelCase
    /**Declaro e inicializo una variable */
    int NumeroUno = 0;
    int NumeroDos = 0;
    int Resultado = 0;

    printf("*******Calculadora******** \n\n");

    printf("Ingrese el primer numero\n");
    /**capturamos el primer numero del teclado  */
    scanf("%i",&NumeroUno );

    /**capturamos el segundo numero del teclado  */
    printf("Ingrese el segundo numero\n");
    scanf("%i",&NumeroDos );

    Resultado = NumeroUno + NumeroDos;
    printf("El Resultado de la Suma es %i\n", Resultado);

    int edad = 0;
    printf("ingrese su edad\n");
    scanf("%i",&edad);

    Resultado =  edad + NUMEROCAOS ;
    printf("el resultado es %i\n",Resultado);

    /**defino contante llamada jugadores*/
    const int JUGADORES = 11;

        Resultado =  44 + NUMEROCAOS;
        printf("%i",Resultado);

    printf("cantidad de jugadores es = %i", jugadores);

    printf("");
    system("pause");
    return 0;
}
