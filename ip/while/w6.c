#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int i = 0;
    int pares = 0, impares = 0;
    int soma_pares = 0, soma_impares = 0, soma_arit = 0;
    float media_pares = 0, media_impares = 0, media_arit = 0;

    printf("Digite 10 numeros inteiros:\n");

    while (i < 10)
    {

        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            pares++;
            soma_pares = soma_pares + numero;
        }
        else
        {
            impares++;
            soma_impares = soma_impares + numero;
        }
        soma_arit = soma_arit + numero;
        i++;
    }

    media_pares = (float)soma_pares / pares;
    media_impares = (float)soma_impares / impares;
    media_arit = soma_arit / 10.0;

    printf("Quantidade de pares= %d, Quantidade de impares= %d \n", pares, impares);
    printf("Media dos pares= %.2f \n", media_pares);
    printf("Media dos impares= %.2f \n", media_impares);
    printf("Media aritmetica= %.2f", media_arit);

    return 0;
}
