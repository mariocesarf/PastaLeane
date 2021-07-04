#include <stdio.h>
#include <stdlib.h>

struct dados
{
    char nome[50];
    int idade;
    float notas[4];

    float media;

    int idade_de_conclusao;
};

struct dados aluno;

void lerdados()
{
    fflush(stdin);
    printf("Nome:");
    gets(aluno.nome);

    fflush(stdin);
    printf("Idade:");
    scanf("%d", &aluno.idade);

    for(int i = 0; i < 4; i ++)
    {
        fflush(stdin);
        printf("Nota %d:", i+1);
        scanf("%f", &aluno.notas[i]);
    }
}

void media()
{
    float soma = 0.0;
    for (int i =0; i  < 4; i++)
    {
        soma += aluno.notas[i];
    }

    aluno.media = soma/4.0;
}

void mostrar_dados()
{
    printf("\nDados do aluno:\n");
    printf("Nome: %s\n", aluno.nome);

    for (int i =0; i  < 4; i++)
    {
        printf("Nota %d: %.2f\n", i+1, aluno.notas[i]);
    }

    printf("Media das notas: %.2f\n", aluno.media);

    printf("Idade minima da conclusao do curso: %d anos\n", aluno.idade_de_conclusao);
}

int main()
{
    printf("Digite as informacoes do aluno:\n");

    lerdados();

    media();

    aluno.idade_de_conclusao = aluno.idade +3;

    mostrar_dados();

    return 0;
}

