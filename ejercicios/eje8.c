#include <stdio.h>
#include <stdlib.h>

/*
Planteo mediano:
Entrada numero n;
CB:
    -Si n tiene un digito y es posicion par, mediano es -n
    -Si n tiene un digito y no es posicion par, mediano es n
CR:
    -Si n tiene mas de un digito y el ultimo digito es posicion par, mediano es mediano(n/10)- n%10
    -Si n tiene mas de un digito y el ultimo digito no es pos par, mediano es mediano es mediano(n/10)+ n%10
*/
int medianoR(int n, int esPar)
{
    if (n < 10)
    {
        return (esPar) ? -n : n;
    }
    else
    {
        return (esPar) ? medianoR(n / 10, !esPar) - n % 10 : medianoR(n / 10, !esPar) + n % 10;
    }
}

int mediano(int n)
{
    return medianoR(n, 0);
}