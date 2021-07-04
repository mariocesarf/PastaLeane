#include <stdio.h>
#include <stdlib.h>

int main()
{
	int soma = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 9 == 0)
		{
			continue;
		}
		else
		{
			soma = soma + i;
		}
	}
	printf("Soma= %d", soma);
	return 0;
}
