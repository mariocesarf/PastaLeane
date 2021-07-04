#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *ufs;

struct UF
{
    char codigo[3];
    char nome[50];
};

void opcoes()
{
    printf("\nDigite uma opcao:\n");
    printf("1 - Inserir uma UF\n");
    printf("2 - Alterar uma UF\n");
    printf("3 - Listar UF's existentes\n");
    printf("4 - Deletar uma UF\n");
    printf("0 - Sair\n");
}


int verificar_arquivo()
{
    fseek(ufs, 0, SEEK_END);

    long tamanho = ftell(ufs);

    if(tamanho > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int verificar_espacovazio(struct UF federacao)
{
    fseek(ufs, 0, SEEK_SET);

    while(!feof(ufs))
    {
        fread(&federacao, sizeof (struct UF), 1, ufs);

        if(feof(ufs) == 0)
        {
            if((strcmp (federacao.codigo, "") == 0) && (strcmp (federacao.nome, "") == 0))
            {
                return 1;
            }
        }
    }
    return 0;
}


void inserir_uf(struct UF federacao)
{
    printf("\nDigite os dados da unidade da federacao:\n");
    printf("Codigo:");
    fflush(stdin);
    gets(federacao.codigo);

    printf("Nome:");
    fflush(stdin);
    gets(federacao.nome);

    int verificar = verificar_espacovazio(federacao);

    if(verificar == 0)
    {
        fseek(ufs, 0, SEEK_END);
        fwrite(&federacao, sizeof(struct UF), 1, ufs);
        printf("UF inserida com sucesso!\n");
    }
    else
    {
        fseek(ufs, -1 * sizeof(struct UF), SEEK_CUR);
        fwrite(&federacao, sizeof(struct UF), 1, ufs);
        printf("UF inserida com sucesso!\n");
    }
}


void alterar_uf(struct UF federacao)
{
    char aux[50];

    printf("\nDigite o codigo ou o nome da federacao que deseja alterar:\n");
    fflush(stdin);
    gets(aux);

    fseek(ufs, 0, SEEK_SET);

    while(!feof(ufs))
    {
        fread(&federacao, sizeof (struct UF), 1, ufs);

        if (strcmp (aux, federacao.codigo) == 0  ||  strcmp (aux, federacao.nome) == 0)
        {
            printf("Novo Codigo:");
            fflush(stdin);
            gets(federacao.codigo);

            printf("Novo Nome:");
            fflush(stdin);
            gets(federacao.nome);

            fseek(ufs, -1 *sizeof (struct UF), SEEK_CUR);
            fwrite(&federacao, sizeof(struct UF), 1, ufs);

            printf("UF alterada com sucesso!\n");
            break;
        }
    }
}


void listar_uf(struct UF federacao)
{
    int cont = 0;
    int verificar = verificar_arquivo();
    if(verificar == 1)
    {
        fseek(ufs, 0, SEEK_SET);

        while(!feof(ufs))
        {
            fread(&federacao, sizeof (struct UF), 1, ufs);

            if(feof(ufs) == 0)
            {
                if((strcmp (federacao.codigo, "") != 0) && (strcmp (federacao.nome, "") != 0))
                    {
                    printf("\nCodigo: %s\n", federacao.codigo);
                    printf("Nome: %s\n", federacao.nome);
                    }
                else
                {
                    cont++;
                }
            }
        }
    }
    else
    {
        printf("Nenhuma UF cadastrada.\n");
    }
    if (cont > 1)
    {
        printf("Nenhuma UF cadastrada.\n");
    }
}

void remover_uf(struct UF federacao)
{
    char aux[50];

    printf("\nDigite o codigo ou o nome da federacao:\n");
    fflush(stdin);
    gets(aux);

    fseek(ufs, 0, SEEK_SET);

    while(!feof(ufs))
    {
        fread(&federacao, sizeof (struct UF), 1, ufs);

        if (strcmp (aux, federacao.codigo) == 0  ||  strcmp (aux, federacao.nome) == 0)
        {
            strcpy(federacao.codigo, "");
            strcpy(federacao.nome, "");

            fseek(ufs, -1 *sizeof (struct UF), SEEK_CUR);
            fwrite(&federacao, sizeof(struct UF), 1, ufs);
            printf("UF removida com sucesso!\n");
            break;
        }
    }
}

int main()
{
    ufs = fopen("unidadesdafederacao.bin", "rb+");

    if (ufs == NULL)
    {
        ufs = fopen("unidadesdafederacao.bin", "wb+");
    }

    struct UF federacao;
    int escolha;

    do
    {
        opcoes();
        scanf("%d", &escolha);

        switch(escolha)
        {
        case 1:
            inserir_uf(federacao);
            break;
        case 2:
            alterar_uf(federacao);
            break;

        case 3:
            listar_uf(federacao);
            break;

        case 4:
            remover_uf(federacao);
            break;

        case 0:
            break;

        default:
            printf("Opcao invalida, digite novamente.\n");
        }
    }
    while(escolha != 0);

    fclose(ufs);
    return 0;
}
