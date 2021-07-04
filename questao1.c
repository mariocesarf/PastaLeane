#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *valores = malloc (5 * sizeof (int));
    int *ordenar = malloc (5 * sizeof (int));
    int *soma = malloc (sizeof(int));
    int *aux = malloc (sizeof (int));

    *soma = 0;

printf ("Digite 5 valores:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (valores + i));

        *(ordenar + i) = *(valores + i);

        *soma += *(valores + i);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (*(ordenar + j) > *(ordenar + (j+1)))
            {
                *aux = *(ordenar + j);
                *(ordenar + j) = *(ordenar + (j +1));
                *(ordenar + (j+1)) = *aux;
            }
        }
    }

    printf ("Valores iniciais:");
    for (int i = 0; i < 5; i++)
    {
        printf ("%d  ", *(valores + i));
    }

    printf ("\nValores ordenados:");

    for (int i = 0; i < 5; i++)
    {
        printf ("%d  ", *(ordenar + i));
    }

    printf ("\nSoma = %d", *soma);

    free(valores);
    free(ordenar);
    free(soma);
    return 0;
}
