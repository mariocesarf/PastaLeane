#include <stdio.h>
#include <stdlib.h>

FILE *f;

struct registro
{
    char nome[50];
    char fone[10];
    char tipo_sanguineo[4];
};

struct registro usuarios;

void opcoes()
{
    printf("\n1 - Inserir dados\n");
    printf("2 - Listar dados\n");
    printf("0 - Sair\n");
}
void inserir_dados()
{
    printf("\nNome:");
    fflush(stdin);
    gets(usuarios.nome);

    printf("Fone:");
    fflush(stdin);
    gets(usuarios.fone);

    printf("Tipo Sanguineo:");
    fflush(stdin);
    gets(usuarios.tipo_sanguineo);

    fseek(f, 0, SEEK_END);
    fwrite(&usuarios, sizeof(struct registro), 1, f);

    printf("Inserido com sucesso!\n");
}

void listar()
{
    fseek(f, 0, SEEK_SET);
    while(!feof(f))
    {
        fread(&usuarios, sizeof(struct registro), 1, f);
        if (feof(f) == 0)
        {
            printf("\nNome: %s\n", usuarios.nome);
            printf("Fone: %s\n", usuarios.fone);
            printf("Tipo Sanguineo: %s\n", usuarios.tipo_sanguineo);
        }
    }
}

int main()
{
    f = fopen("registro.bin", "rb+");

    if (f == NULL)
    {
        f = fopen("registro.bin", "wb+");
    }

    printf("Digite uma opcao:\n");
    int opcao;
    do
    {
        opcoes();
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            inserir_dados();
            break;

        case 2:
            listar();
            break;

        case 0:
            break;

        default:
            printf("Opcao Invalida, digite novamente.\n");
        }
    }
    while(opcao != 0);

    fclose(f);

    return 0;
}

