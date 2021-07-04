#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorial(int *x)
{
    int fat = 1;

    for (int i = 1; i <= *x; i++)
    {
        fat = fat * i;
    }

    *x = fat;

    return 0;
}
int main()
{
    int n1, n2;
    printf("Digite um numero para calcular o fatorial:\n");
    scanf("%d", &n1);

    n2 = n1;

    fatorial(&n1);

    printf("Fatorial de %d eh %d\n", n2, n1);
    return 0;
}
