// planteo:
//     CB:n tiene un digito, cantDigitos es 1
//     CR:n tiene mas de un digito, cantDigitos es cantDigitos(n/10) + 1

int cantDigitos(int n){
    if (n<10)
    {
        return 1;
    }else
    {
        return cantDigitos(n/10) + 1;
    }
}
/*
Planteo Contardigito:
Entrada numero n y digito d;
CB:
    -Si n tiene un digito y ese es igual a d, Contardigito es 1
    -Si n tiene un digito y no es igual a d, Contardigito es 0
CR:
    -Si n tiene mas de un digito y el ultimo digito es igual a d, Contardigito es Contardigito(n/10)+1
    -Si n tiene mas de un digito y el ultimo digito no es igual a d, Contardigito es Contardigito(n/10)
*/

int contarDigito(int n, int d){
    if (n<10)
    {
        return n==d ? 1 : 0;
    }
    else
    {
        return ((n%10)==d)? contarDigito(n/10,d)+1 : contarDigito(n/10,d);
    }
}

/*
Planteo Contarcant:
Entrada numero n;
CB:
    -Si n tiene un digito y ese es par, Contarcant es 1
    -Si n tiene un digito y no es par, Contarcant es 0
CR:
    -Si n tiene mas de un digito y el ultimo digito es posicion par, Contarcant es Contarcant(n/10)
    -Si n tiene mas de un digito, el ultimo digito no es pos par y es par, Contarcant es Contarcant(n/10)+1
    -Si n tiene mas de un digito, el ultimo digito no es pos par y no es par, Contarcant es Contarcant(n/10)
*/
int contarCantR(int n,int esPar){
    if (n<10)
    {
        return (n%2 == 0) ? 1 : 0;
    }
    else
    {
        if (!esPar)
        {
            return (n % 2 == 0) ? contarCantR(n/10,!esPar)+1 : contarCantR(n/10,!esPar);
        }
        else
        {
            return contarCantR(n/10,!esPar);
        }

    }

}

int contarCant(int n){
    return contarCantR(n,0);
}
