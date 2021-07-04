#include <stdio.h>
#include <stdlib.h>

struct vetor
{
    float x;
    float y;
    float z;
};

void opcoes()
{
    printf("\nDigite:\n");
    printf("1 - Soma Escalar dos Vetores\n");
    printf("2 - Produto Escalar dos Vetores\n");
    printf("3 - Soma e o Produto Escalar dos Vetores\n");
    printf("4 - Alterar Valores das Coordenadas\n");
    printf("0 - Sair\n");
}

void vetores (struct vetor *c)
{

    for (int i = 0; i < 2; i++)
    {
        printf("Digite as coordenadas para o vetor %d",  i+1);
        printf("\nx:");
        scanf("%f", &(c+i)->x);

        printf("y:");
        scanf("%f", &(c+i)->y);

        printf("z:");
        scanf("%f", &(c+i)->z);
    }
}

void soma (struct vetor *s)
{
    float somax, somay, somaz, soma;
    somax = (s->x) + ((s+1)->x);
    somay = (s->y) + ((s+1)->y);
    somaz = (s->z) + ((s+1)->z);

    soma = somax + somay + somaz;

    printf("Soma = %.2f\n", soma);
}

void produto (struct vetor *p)
{
    float produtox, produtoy, produtoz, produto;
    produtox = (p->x) * ((p+1)->x);
    produtoy = (p->y) * ((p+1)->y);
    produtoz = (p->z) * ((p+1)->z);

    produto = produtox + produtoy + produtoz;

    printf("Produto = %.2f \n", produto);
}

int main()
{
    struct vetor *coordenadas = malloc(2 * sizeof(struct vetor));
    int escolha;

    vetores(coordenadas);

    do
    {
        opcoes();
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            soma(coordenadas);
            break;

        case 2:
            produto(coordenadas);
            break;

        case 3:
            soma(coordenadas);
            produto(coordenadas);
            break;

        case 4:
            vetores(coordenadas);
            break;

        case 0:
        break;

        default:
            printf("Opcao invalida. digite novamente.");
        }
    }
    while(escolha != 0);

    free(coordenadas);
    return 0;
}
