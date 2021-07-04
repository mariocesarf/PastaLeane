#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int matricula;
    char nome[100];
    int cod_disciplina;
    int nota1;
    int nota2;
    float media;
};

void dados (struct aluno *d)
{
        printf("\n\n########## Dados ##########\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite os dados dos aluno:\n");
        printf("Matricula:");
        scanf("%d", &(d+i)->matricula);

        printf("Nome:");
        fflush(stdin);
        gets((d+i)->nome);

        printf("Codigo da Disciplina:");
        scanf("%d", &(d+i)->cod_disciplina);

        printf("Nota 1: ");
        scanf("%d", &(d+i)->nota1);

        printf("Nota 2: ");
        scanf("%d", &(d+i)->nota2);
    }
}

void media (struct aluno *m)
{
    for (int i = 0; i < 10; i++)
    {
        (m+i)->media = (((m+i)->nota1)*2 + ((m+i)->nota2)*3) / 5.0;
    }
}

void resultados (struct aluno *r)
{
    printf("\n\n########## Resultados ##########\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\nMatricula: %d\n", (r+i)->matricula);

        printf("Nome: %s\n", (r+i)->nome);

        printf("Codigo da Disciplina: %d\n", (r+i)->cod_disciplina);

        printf("Nota 1: %d\n", (r+i)->nota1);

        printf("Nota 2: %d\n", (r+i)->nota2);

        printf("Media Ponderada: %.2f\n\n", (r+i)->media);
    }
}

int main()
{
    struct aluno *alunos = malloc(10 * sizeof(struct aluno));

    dados(alunos);

    media(alunos);

    resultados(alunos);

    free(alunos);
    return 0;
}
