#include <stdio.h>
#include <stdlib.h>

int main()
{

	int numero;
	int qtd_positivos = 0, qtd_negativos = 0;
	int perc_positivos = 0, perc_negativos = 0;
	float soma_positivos = 0, soma_negativos = 0, soma_arit = 0;
	float media_positivos = 0, media_negativos = 0, media_arit = 0;

	printf("digite 10 numeros:\n");

	for (int i = 1; i <= 10; i++)
	{

		scanf("%d", &numero);

		if (numero > 0)
		{
			soma_positivos = soma_positivos + numero;
			qtd_positivos++;
		}
		else
		{
			soma_negativos = soma_negativos + numero;
			qtd_negativos++;
		}
		soma_arit = soma_arit + numero;
	}

	if (qtd_positivos > 0 && qtd_negativos > 0)
	{
		media_positivos = (float)(soma_positivos / qtd_positivos);
		media_negativos = (float)(soma_negativos / qtd_negativos);
	}
	else
	{
		if (qtd_negativos == 0)
		{
			media_positivos = (float)(soma_positivos / qtd_positivos);
			media_negativos = 0;
		}
		else
		{
			if (qtd_positivos == 0)
			{
				media_negativos = (float)(soma_negativos / qtd_negativos);
				media_positivos = 0;
			}
		}
	}
	media_arit = (soma_arit / 10.0);

	perc_positivos = ((qtd_positivos / 10.0) * 100);

	perc_negativos = ((qtd_negativos / 10.0) * 100);

	printf("\nquantidade de positivos= %d\nquantidade de negativos= %d\n", qtd_positivos, qtd_negativos);
	printf("\nmedia arit.= %.2f\n", media_arit);
	printf("media dos positivos= %.2f", media_positivos);
	printf("\nmedia dos negativos= %.2f\n", media_negativos);
	printf("\nperc. de positivos= %d\nperc. de negativos= %d\n", perc_positivos, perc_negativos);

	return 0;
}
