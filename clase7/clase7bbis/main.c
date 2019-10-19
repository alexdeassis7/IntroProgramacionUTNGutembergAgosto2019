#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANO 25
/**Definimos Estructura anidadas com typeDef*/
typedef struct
{
    char name[TAMANO];
    int legajo;
    int numDni;
    char sexo ;
    char provincia[TAMANO];
    int codigoPostal;
    //char empresa[TAMANO];
    //float saldo;

} infoPersona;

typedef struct
{
    /**anidamos estructuras*/
    infoPersona p1 ;
    char empresa[TAMANO];
    float saldo;
} Cliente;

typedef struct
{
    /**anidamos estructuras*/
    infoPersona p2 ;
    int horasExtras ;
    float sueldo ;

} Empleado;

int main()
{
    /**definimos un Struc de tipo empleado */
    Empleado e1;
    /**definimos un array de Clientes*/
    Cliente misClientes [TAMANO];

    for(int x = 0 ; x <  TAMANO ; x++  )
    {

        printf("********INGRESE DATOS DE EMPLEADO %i **********" , (x + 1));

        printf("\ningrese el nombre del Cliente ");
        scanf("%s",&misClientes[x].p1.name);

        printf("\ningrese el DNI del Cliente");
        scanf("%i", &misClientes[x].p1.numDni);

        printf("\ningrese el legajo del Cliente");
        scanf("%i",&misClientes[x].p1.legajo);

        fflush(stdin);
        printf("\n ingrese el sexo del Cliente");
        scanf("%c",&misClientes[x].p1.sexo);

        fflush(stdin);
        printf("\n ingrese la provincia del Cliente");
        gets(misClientes[x].p1.provincia);

        printf("\n ingrese el codigo postal del Cliente");
        scanf("%i",&misClientes[x].p1.codigoPostal);

        printf("\n ingrese la empresa del Cliente");
        scanf("%s",&misClientes[x].empresa);

        printf("\n ingrese el saldo del Cliente");
        scanf("%f",&misClientes[x].saldo);
    }















//
//    printf("ingrese el DNI del Cliente ");
//
//    printf("ingrese el legajo del Cliente ");
//
//    printf("ingrese el provicia del Cliente ");
//
//    printf("ingrese el Codigo postal del Cliente ");
//
//    printf("ingrese el sexo del Cliente ");
//
//    printf("ingrese el saldo del Cliente ");
//
//    printf("ingrese la Empresa del Cliente ");
//
//

//
//
///**
//
//    /**Cargamos una estructura anidadada
//    strcpy(e1.p2.name, "alex");
//    e1.p2.legajo = 3578;
//    e1.p2.codigoPostal = 3230 ;
//    e1.p2.numDni=  36863837 ;
//    strcpy(e1.p2.provincia, "chubut" );
//    e1.p2.sexo = 'M';
//    /**cargamos los datos de empleado "NO ANIDADOS"
//    e1.horasExtras = 20;
//    e1.sueldo = 150000;
//
//
//    /**cargamos las estructuras mediante el teclado
//
//
//    printf("por favor ingrese los datos del empleado \n");
//    printf("ingrese el nombre del empleado ");
//    scanf("%s",e1.p2.name);
//
//    printf("\n Por favor ingrese el legajo ");
//    scanf("%i",&e1.p2.legajo);
//
//    printf("\n Por favor ingrese el sexo");
//    fflush(stdin);/**limpieza de buffer de entrada*/
//    scanf("%c",&e1.p2.sexo);
//
//    printf("\npor favor ingrese el codigo postal");
//    scanf("%i",&e1.p2.codigoPostal);
//
//    printf("\npor favor ingrese el numero del DNI ");
//    scanf("%i",&e1.p2.numDni);
//
//    printf("\npor favor ingrese la provincia de residencia ");
//    scanf("%s", &e1.p2.provincia);
//
//
//    printf("\npor favor ingrese las Hs Extras");
//    scanf("%i",&e1.horasExtras);
//
//    printf("\npor favor ingrese el Sueldo");
//    scanf("%f",&e1.sueldo);
//
//
//    printf("\n *********** EMPLEADO 1 ************");
//    printf("\nnombre : %s ",e1.p2.name);
//    printf("\nlegajo : %i",e1.p2.legajo);
//    printf("\ncodigoPostal: %i ", e1.p2.codigoPostal);
//    printf("\nNumero de DNI : %i", e1.p2.numDni);
//    printf("\nprovincia : %s", e1.p2.provincia);
//    printf("\nSexo : %c", e1.p2.sexo );
//    printf("\nSueldo : %f", e1.sueldo);
//    printf("\nHoras Extras: %i",e1.horasExtras);
//
//

    return 0;
}
