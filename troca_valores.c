#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int troca_valores(int *x, int *y)
{
    int aux = 0;

    aux = *y - *x;

    *x = *x + aux;
    *y = *y - aux;

    return 0;
}
int main()
{
    int n1 = 2;
    int n2 = 3;

    troca_valores(&n1, &n2);

    printf("n1 = %d e n2 = %d\n", n1, n2);
    return 0;
}
