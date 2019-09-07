#include <stdio.h>
#include <stdlib.h>

int main()
{

    /**buscamos el mayor de 3 numeros*/
    int  a =107878, b =2000, c =77;
    if( a > b && a > c)
    {
        printf("el mayar numero es A");
    }
    else if (b > c && b > a)
    {
        printf("el mayar numero es B");
    }
    else
    {
        printf("el mayar numero es C");
    }

    return 0;
}
