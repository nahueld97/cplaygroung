#include <stdio.h>
#include <stdlib.h>
int n = 0;
long int entrada,contador=0L,min,max;

int run(){

    printf("ingrese la cantidad de numeros a leer:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("ingrese un nro:");
        scanf("%ld",&entrada);
        if(i == 0){
            min = max = entrada;
        }
        else
        {
            if (entrada<min)
            {
                min=entrada;
            }
            if (entrada>max)
            {
                max=entrada;
            }            
        }

        contador += entrada;
    }

    printf("El mayor es %ld \n",max);
    printf("El menor es %ld \n",min);
    printf("El promedio es %ld \n\n",contador / n);

    return 0;
}
