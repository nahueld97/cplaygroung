#include <stdio.h>
#include <stdlib.h>
#define ERROR_MES 30
#define ERROR_DIA 31

int dia = 0,mes = 0,anio = 0;

int esBisiesto();

int run()
{
    int valido=1;
    printf("ingrese el año: ");
    scanf("%d",&anio);
    printf("ingrese el mes: ");
    scanf("%d",&mes);
    if((mes > 12) || (mes < 1)){
        printf("error mes invalido \n por favor reinicie el programa");
        return ERROR_MES;
    }
    printf("ingrese el dia: ");
    scanf("%d",&dia);
    if ((dia < 1) || (dia>31)){
        printf("error dia invalido \n por favor reinicie el programa");
        return ERROR_DIA;
    }

    if (esBisiesto(anio))
    {
        switch (mes)
        {
        case 2:
            if (dia>29)
            {
                valido=0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia>30)
            {
                valido = 0;
            }
            break;
        }
    }
    else
    {
        switch (mes)
        {
        case 2:
            if (dia>28)
            {
                valido=0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia>30)
            {
                valido = 0;
            }
            break;
        }
    }

    if (valido)
    {
        printf("La fecha es valida");
    }
    else
    {
        printf("La fecha no es valida");
    }

    return 0;
}

int esBisiesto(int anio){
    int res = ( (anio % 4 == 0) && ( !(anio % 100 == 0) || (anio % 400 == 0) ) );
    return res;
}
