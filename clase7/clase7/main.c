#include <stdio.h>
#include <stdlib.h>

/**importamos libreria de funciones para
el manejo de Cadena de caracteres*/
/**DEFINIMOS ESTRUCTURAS*/
#include <string.h>
struct CD
{
    char titulo[25];
    char artista[25];
    float precio;
    int catidadDeTemas;
};

int main()
{
    /**definimos nuestra primer struct*/
    struct CD musicaParaVolar;
    musicaParaVolar.precio =99.5;
    musicaParaVolar.catidadDeTemas= 13;
    /**utilizamos funcion de la libreria String.h*/
    strcpy(musicaParaVolar.artista,"Gustavo Cerati" );
    strcpy(musicaParaVolar.titulo,"MusicaParaVOlarVolumen uno" );

    printf("**************primer CD************");
    printf("\n artista : %s" , musicaParaVolar.artista);
    printf("\n precio :%f", musicaParaVolar.precio);
    printf("\n cantidad de temas : %i ", musicaParaVolar.catidadDeTemas);
    printf("\n titulo : %s",musicaParaVolar.titulo);

    return 0;
}
