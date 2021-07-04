#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero, digito = 0, qtd_pares = 0, qtd_impares = 0;

	printf("digite um numero:\n");

	scanf("%d", &numero);

	printf("o numero %d tem ", numero);

	for (numero; numero > 0; numero = numero / 10)
	{
		digito = numero % 10;

		if (digito % 2 == 0)
		{
			qtd_pares++;
		}
		else
		{
			qtd_impares++;
		}
	}
	printf("%d numero(s) par(es) e %d numero(s) impar(es)s", qtd_pares, qtd_impares);
	return 0;
}
