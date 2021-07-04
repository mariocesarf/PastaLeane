#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fat (int x)
{
    if (x != 0)
    {
        return  x * fat(x-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    printf("Digite um numero para calcular o fatorial: \n");
    scanf("%d", &n);

    printf("Fatorial de %d = %d", n, fat(n));
    return 0;
}
