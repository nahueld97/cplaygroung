#include <stdio.h>
#include <stdlib.h>

int ascendente(int n);
int descendente(int n);

int esProlijo(int n){
    if (n<10){
        return 1;
    }else
    {
        if (n%10 == (n/10) % 10){
            return 0;
        }
        if (n%10 > (n/10) % 10)
        {
            return ascendente(n/10);
        }
        else
        {
            return descendente(n/10);
        }

    }

}

int ascendente(int n){
    if (n<10)
    {
        return 1;
    }
    else
    {
        return (n%10 > (n/10)%10) && ascendente(n/10);
    }
}

int descendente(int n){
    if (n<10)
    {
        return 1;
    }
    else
    {
        return (n%10 < (n/10)%10) && descendente(n/10);
    }
}
