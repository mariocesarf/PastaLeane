#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero, valor, fatorial;

	printf("digite um numero inteiro positivo:\n");
	scanf("%d", &numero);

	if (numero < 0)
	{
		printf("somente numero inteiro positivo\n");
		return 0;
	}

	printf("digite %d numero(s) inteiro(s) positivo(s):\n", numero);

	for (int i = 1; i <= numero; i++)
	{
		fatorial= 1;

		scanf("%d", &valor);

		if (valor > 0)
		{
			for (int j = 1; j <= valor; j++)
			{
				fatorial = fatorial * j;
			}
		}
		else
		{
			printf("invalido\n");
			i--;
			continue;
		}

		printf("fatorial de %d= %d\n", valor, fatorial);
	}

	return 0;
}
