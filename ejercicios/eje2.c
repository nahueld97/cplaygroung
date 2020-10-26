#include <stdio.h>
#include <stdlib.h>

long int entrada;
int seg,min,horas;

int run(long int entrada) {
    seg = entrada % 60;
    entrada = entrada / 60;
    min = entrada % 60;
    horas = entrada / 60;
    printf("son: %d:%d:%d.",horas,min,seg);
    return 0;
}
