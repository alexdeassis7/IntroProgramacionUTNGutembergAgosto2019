#include <stdio.h>
#include <stdlib.h>

int main()
{    /** en esta pagina resuelvo mis problemsas :) -> es.stackoverflow.com */
    /**Una tienda ofrece un descuento del 15% sobre el total
    de la compra y un cliente desea saber cuanto deberá pagar
    finalmente por su compra
    */
    /**definimos variables y contantes */
    const float PORCENTAJE = 0.15;
    float totalDeLaCompra = 0 , totalAPagar = 0 , descuento = 0;
    //solicitamos datos al user
    printf("  por favor ingrese el total que abono por su compra \n");
    scanf("%f",&totalDeLaCompra);

    /**calculamos el descuento y el total a pagar*/
    descuento = totalDeLaCompra * PORCENTAJE;
    totalAPagar = totalDeLaCompra - descuento ;

    printf("\nusted gasto  %.3f en la tienda \n obtuvo un
                descuento de %.2f  \n el total que debe abonar
                es de %.2f",totalDeLaCompra,descuento,totalAPagar);




    return 0;
}
