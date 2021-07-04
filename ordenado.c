#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordem (int v[], int n)
{
    int aux;
    for (int i = 0; i < n; i ++)
    {
        for (int j = 1; j < n; j++)
        {
            if (v[j-1] > v[j])
            {
                aux = v[j-1];
                v[j-1] = v[j];
                v[j] = aux;
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("Digite quantos numeros deseja ordenar: \n");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite %d numeros:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    ordem(vetor, n);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i ++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
