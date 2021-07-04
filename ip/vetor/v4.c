#include <stdio.h>
#include <string.h>

int main()
{
    int tam = 10;
    int valores[tam];
    int ordem_valores[tam];
    int auxiliar;

    printf("Digite 10 numeros:\n");

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &valores[i]);
        ordem_valores[i] = valores[i];
    }

    for (int j = 0; j < tam; j++)
    {
        for (int i = 0; i < tam - 1; i++)
        {
            if (ordem_valores[i] > ordem_valores[i + 1])
            {
                auxiliar = ordem_valores[i];
                ordem_valores[i] = ordem_valores[i + 1];
                ordem_valores[i + 1] = auxiliar;
            }
        }
    }

    printf("Valores de entrada: ");

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", valores[i]);
    }

    printf("\nValores de entrada ordenados: ");

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", ordem_valores[i]);
    }
    return 0;
}