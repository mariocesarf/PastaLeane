#include <stdio.h>
#include <string.h>

int main()
{
    int valor[10];
    int menor, posicao;

    printf("digite 10 numeros:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &valor[i]);
    }

    menor = valor[0];

    for (int i = 0; i < 10; i++)
    {
        if (menor < valor[i])
        {
            menor = menor;
        }
        else
        {
            menor = valor[i];
            posicao = i;
        }
    }
    printf("menor numero= %d, sua posicao no vetor= %d", menor, posicao);
    return 0;
}