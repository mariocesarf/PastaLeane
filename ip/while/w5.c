#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intervalo0_15 = 0, intervalo16_30 = 0, intervalo31_50 = 0, intervalo51_100 = 0;
    int numero;
    int i = 0;

    printf("Digite 20 numeros:\n");

    while (i < 20)
    {

        scanf("%d", &numero);

        if (numero >= 0 && numero <= 15)
        {
            intervalo0_15++;
        }
        else
        {
            if (numero >= 16 && numero <= 30)
            {
                intervalo16_30++;
            }
            else
            {
                if (numero >= 31 && numero <= 50)
                {
                    intervalo31_50++;
                }
                else
                {
                    if (numero >= 51 && numero <= 100)
                    {
                        intervalo51_100++;
                    }
                }
            }
        }

        i++;
    }
    printf("\nA quantidade de numeros nos intervelos:\n");
    printf("[0,15]= %d, [16,30]= %d", intervalo0_15, intervalo16_30);
    printf(", [31,50]= %d, [51,100]= %d", intervalo31_50, intervalo51_100);

    return 0;
}
