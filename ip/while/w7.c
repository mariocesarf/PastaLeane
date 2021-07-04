#include <stdio.h>

int main()
{
    int soma = 0;
    int i = 1;

    while (i <= 100)
    {

        if (i % 9 == 0)
        {
            soma = soma;
        }
        else
        {
            soma = soma + i;
        }

        i++;
    }
    printf("Soma= %d", soma);
    return 0;
}
