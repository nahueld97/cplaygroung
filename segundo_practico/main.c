#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int N = 10;

void iniciar(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand();
    }
}

void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void ordenar(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

int esta_ordenado(int a[], int n)
{
    int ordenado = 1;
    for (int i = 0; i < n - 1 && ordenado; i++)
    {
        if (a[i] > a[i + 1])
        {
            ordenado = !ordenado;
        }
    }
    return ordenado;
}

int *intercalar(int a[], int b[])
{
    int size1 = sizeof(&a) / sizeof(int);
    int size2 = sizeof(&b) / sizeof(int);
    int sizenuevo = size1 + size2;
    int* nuevo = malloc(sizeof(int)*sizenuevo);
    int i = 0, j = 0, n = 0;
    while (i < size1 && j < size2)
    {
        if (a[i] < b[j])
        {
            if (nuevo[n] != a[i])
            {
                nuevo[n] = a[i];
                n++;
            }
            i++;
        }
        else
        {
            if (nuevo[n] != b[j])
            {
                nuevo[n] = b[j];
                n++;
            }
            j++;
        }
    }

    while (i < size1)
    {
        if (nuevo[n] != a[i])
        {
            nuevo[n] = a[i];
            n++;
        }
        i++;
    }

    while (j < size2)
    {
        if (nuevo[n] != a[j])
        {
            nuevo[n] = a[j];
            n++;
        }
        j++;
    }
    return (int*) nuevo;
}

int main()
{
    srand(567);
    int a[N];
    iniciar(a, N);
    srand(8645);
    int b[14];
    iniciar(b, 14);
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", a[i]);
    }
    if (esta_ordenado(a, N))
    {
        printf("esta ordenado\n");
    }
    else
    {
        printf("no esta ordenado\n");
    }
    printf("ordenar\n");
    ordenar(a, N);
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", a[i]);
    }
    if (esta_ordenado(a, N))
    {
        printf("esta ordenado\n");
    }
    else
    {
        printf("no esta ordenado\n");
    }
    ordenar(b, 14);
    int *c = intercalar(a, b);
    if (esta_ordenado(c, 24))
    {
        printf("esta ordenado\n");
    }
    else
    {
        printf("no esta ordenado\n");
    }
    return 0;
}
