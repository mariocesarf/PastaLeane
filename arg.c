#include <stdio.h>
#include <stdlib.h>

int fatorial(int *num)
{
    int fat = 1;

    for (int i = 1; i <= *num; i++)
    {
        fat = fat * i;
    }

    *num = fat;

    return 0;
}
int main(int argc, char *argv[])
{
    int n1, n2;
    n1 = atoi (argv[1]);

    n2 = n1;

    fatorial(&n1);

    printf("Numero lido = %d\n", n2);
    printf("Fatorial = %d\n", n1);
    return 0;
}

