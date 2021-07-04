#include <stdio.h>

int main()
{
    int i = 1;
    int inicio_do_intervalo, fim_do_intervalo;
    int soma = 0, divisiveis = 0;

    printf("Digite o inicio do intervalo fechado:");
    scanf("%d", &inicio_do_intervalo);

    printf("Digite o fim do intervalo fechado:");
    scanf("%d", &fim_do_intervalo);

    printf("\nA soma dos pares ou primos no intervalo [%d, %d] = ", inicio_do_intervalo, fim_do_intervalo);
    
    while (inicio_do_intervalo <= fim_do_intervalo)
    {
        i = 1;
        divisiveis = 0;
        while (i <= inicio_do_intervalo)
        {
            (inicio_do_intervalo%2 !=0 ? "impar": 0);

            if (inicio_do_intervalo % i == 0)
            {
                divisiveis++;
            }
            i++;
        }
        if ((divisiveis <= 2) || (inicio_do_intervalo % 2 == 0))
        {
            soma = soma + inicio_do_intervalo;
        }

        inicio_do_intervalo++;
    }
    printf("%d", soma);
    return 0;
}