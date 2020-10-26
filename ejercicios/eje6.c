#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char numero[100];
char cursor='1';
int cont=0,suma = 0;

int run(){
    printf("ingrese el numero a convertir\n");
    while (cursor!='\n')
    {
        scanf("%c",&cursor);
        numero[cont] = cursor;
        cont++;
    }
    cont=cont-2;

    for (int i=0; numero[i]!='\n'; i++)
    {
        cursor=numero[i];
        switch (cursor)
        {
        case '1':
            suma += 1*pow(16,cont);
            break;
        case '2':
            suma += 2*pow(16,cont);
            break;
        case '3':
            suma += 3*pow(16,cont);
            break;
        case '4':
            suma += 4*pow(16,cont);
            break;
        case '5':
            suma += 5*pow(16,cont);
            break;
        case '6':
            suma += 6*pow(16,cont);
            break;
        case '7':
            suma += 7*pow(16,cont);
            break;
        case '8':
            suma += 8*pow(16,cont);
            break;
        case '9':
            suma += 9*pow(16,cont);
            break;
        case 'A':
        case 'a':
            suma += 10*pow(16,cont);
            break;
        case 'B':
        case 'b':
            suma += 11*pow(16,cont);
            break;
        case 'C':
        case 'c':
            suma += 12*pow(16,cont);
            break;
        case 'D':
        case 'd':
            suma += 13*pow(16,cont);
            break;
        case 'E':
        case 'e':
            suma += 14*pow(16,cont);
            break;
        case 'F':
        case 'f':
            suma += 15*pow(16,cont);
            break;
        default:
            printf("caracter invalido");
            return 10;
        }
        cont--;
    }

    printf("el nro es : %d",suma);

    return 0;
}
