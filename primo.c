#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int primo(int *x)
{
    int divisores = 0;

    for (int i = 1; i <= *x; i++)
    {
        if (*x % i == 0)
        {
        divisores++;
        }
    }

    if (divisores <= 2)
    {
        printf("%d eh primo.\n", *x);
    }
    else
    {
        printf("%d nao eh primo.\n", *x);
    }
    return 0;
}

int main()
{
    int n1;
    printf("Digite um numero para verificar se eh primo:\n");
    scanf("%d", &n1);

    primo(&n1);
    return 0;
}
