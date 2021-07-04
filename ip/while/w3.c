#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, valor, fatorial;
    int j = 1;
    int i = 1;

    printf("digite um numero inteiro positivo:\n");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("somente numero inteiro positivo\n");
        return 0;
    }

    printf("digite %d numero(s) inteiro(s) positivo(s):\n", numero);

    while (i <= numero)
    {
        fatorial = 1;
        j = 1;

        scanf("%d", &valor);

        if (valor > 0)
        {
            while (j <= valor)
            {
                fatorial = fatorial * j;
                j++;
            }
        }
        else
        {
            printf("invalido\n");
            i--;
            continue;
        }

        printf("fatorial de %d= %d\n", valor, fatorial);
        i++;
    }

    return 0;
}
