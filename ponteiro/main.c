#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int *v[2];
int a=23;

v[1] = malloc(strlen(a));

printf("%d", *v);

    return 0;
}
