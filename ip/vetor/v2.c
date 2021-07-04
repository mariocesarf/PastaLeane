#include <stdio.h>
#include <string.h>

int main()
{
    int valor[10];
    int maior, posicao;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &valor[i]);
    }

    maior = valor[0];

    for (int i = 0; i < 10; i++)
    {
        if (maior > valor[i])
        {
            maior = maior;
        }
        else
        {
            maior = valor[i];
            posicao = i;
        }
    }
    printf("Maior numero = %d, posicao = %d", maior, posicao);
    return 0;
}