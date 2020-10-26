#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pot=0, contador=0;

int run(int entrada){
    //primer planteo
    //printf("%d",entrada);

    while(entrada){
        contador += (entrada%10)*pow(2,pot);
        pot++;
        entrada=entrada/10;
    }
    printf("el numero es : %d",contador);
    return 0;
}

