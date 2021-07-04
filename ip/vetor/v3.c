#include <stdio.h>
#include <string.h>

int main()
{
    int tam1 = 10;
    int tam2;

    int valores[tam1];
    int ordem_valores[tam1];

    int auxiliar;
    int vetor_auxiliar[tam1];

    printf("Digite 10 numeros:\n");

    for (int i = 0; i < tam1; i++)
    {
        scanf("%d", &valores[i]);
        if (valores[i] == __INT_MAX__)
        {
            printf("Valor invalido, digite outro numero:\n");
            i--;
        }
        else
        {
            ordem_valores[i] = valores[i];
        }
    }

    for (int j = 0; j < tam1; j++)
    {
        for (int i = 0; i < tam1 - 1; i++)
        {
            if (ordem_valores[i] > ordem_valores[i + 1])
            {
                auxiliar = ordem_valores[i];
                ordem_valores[i] = ordem_valores[i + 1];
                ordem_valores[i + 1] = auxiliar;
            }
        }
    }

    printf("Digite a quantidade de menores da sequecia que deseja:\n");
    scanf("%d", &tam2);

    while (tam2 > 10)
    {
        printf("Digite a quantidade apenas menor ou igual a 10: \n");
        scanf("%d", &tam2);
    }

    int posicao[tam2];

    for (int i = 0; i < tam1; i++)
    {
        vetor_auxiliar[i] = ordem_valores[i];
    }

    for (int i = 0; i < tam1; i++)
    {
        for (int j = 0; j < tam2; j++)
        {
            if (valores[i] == vetor_auxiliar[j])
            {
                posicao[j] = i;

                if (vetor_auxiliar[j] == vetor_auxiliar[j + 1])
                {
                    vetor_auxiliar[j] = __INT_MAX__;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < tam2; i++)
    {
        printf("numero = %d, posicao = %d\n", ordem_valores[i], posicao[i]);
    }

    return 0;
}