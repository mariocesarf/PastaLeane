#include <stdio.h>
#include <string.h>
#include "clientes.h"

void iniciar_struct(struct cliente *cli)
{
    strcpy(cli->codigo,"");
}
/*
int verificar_clientes()
{
    int cont = 0;

    for(int i = 0; i < 50; i++)
    {
        if (clientes[i].codigo[0] == '\0')
        {
            cont++;
        }
    }

    if (cont == 50)
    {
        return -1;
    }

    return 0;
}

void opcoes()
{
    printf("\nEscolha uma opcao:\n");
    printf("1 - Inserir Cliente\n");
    printf("2 - Alterar Cliente\n");
    printf("3 - Excluir Cliente\n");
    printf("4 - Pesquisar Cliente\n");
    printf("0 - Sair\n");
}

void lercodigo (char msg[], char cod[])
{
    printf("%s", msg);
    fflush(stdin);
    gets(cod);
}

void lernome (char msg[], char nome[])
{
    printf("%s", msg);
    fflush(stdin);
    gets(nome);
}

void lerfone (char msg[], char fone[])
{
    printf("%s", msg);
    fflush(stdin);
    gets(fone);
}

void lerrg(char msg[], char rg[])
{
    printf("%s", msg);
    fflush(stdin);
    gets(rg);
}

void lercpf (char msg[], char cpf[])
{
    printf("%s", msg);
    fflush(stdin);
    gets(cpf);
}

void lerdatadenasc (char msg[], char dia[], char mes[], char ano[])
{
    printf("%s\n", msg);

    fflush(stdin);
    printf("Dia:");
    gets(dia);

    fflush(stdin);
    printf("Mes:");
    gets(mes);

    fflush(stdin);
    printf("Ano:");
    gets(ano);

}

void inserir()
{
    int cont = 0;
    for (int i = 0; i < 50; i++)
    {
        if (clientes[i].codigo[0] == '\0')
        {
            printf("\nInsira os dados do cliente:\n");

            lercodigo("Codigo: ", clientes[i].codigo);

            lernome("Nome:",clientes[i].nome);

            lerfone("Fone:", clientes[i].fone);

            lerrg("Rg:", clientes[i].rg);

            lercpf("CPF:", clientes[i].cpf);

            lerdatadenasc("Data de nascimento:", clientes[i].dia, clientes[i].mes, clientes[i].ano);
            break;
        }
        else
        {
            cont++;
        }
    }
    if (cont == 50)
    {
        printf("Limite de clientes atingido\n.");
    }
}

void alterar()
{
    char aux[10];
    int cont = 0;

    int verificar = verificar_clientes();

    if (verificar != -1)
    {
        printf("\nDigite o codigo do cliente que deseja alterar:\n");
        fflush(stdin);
        gets(aux);

        for (int i = 0; i < 50; i++)
        {
            if (strcmp(aux,clientes[i].codigo) == 0)
            {
                lernome("Nome:",clientes[i].nome);

                lerfone("Fone:", clientes[i].fone);

                lerrg("Rg:", clientes[i].rg);

                lercpf("CPF:", clientes[i].cpf);

                lerdatadenasc("Data de nascimento:", clientes[i].dia, clientes[i].mes, clientes[i].ano);
            }
            else
            {
                cont++;
            }
        }
        if (cont == 50)
        {
            printf("Codigo invalido\n");
        }
    }
    else
    {
        printf("Nenhum cliente cadastrado\n");
    }

}


void excluir()
{
    char aux[10];
    int cont = 0;

    int verificar = verificar_clientes();

    if (verificar != -1)
    {
        printf("\nDigite o codigo do cliente que deseja excluir:\n");
        fflush(stdin);
        gets(aux);

        for (int i = 0; i < 50; i++)
        {
            if (strcmp(aux,clientes[i].codigo) == 0)
            {
                clientes[i].codigo[0] = '\0';
            }
            else
            {
                cont++;
            }
        }
        if (cont == 50)
        {
            printf("Codigo invalido\n");
        }
    }
    else
    {
        printf("Nenhum cliente cadastrado\n");
    }
}

void pesquisar ()
{
    char aux[10];
    int cont = 0;

    int verificar = verificar_clientes();

    if (verificar != -1)
    {
        printf("\nDigite o codigo do cliente que deseja encontrar:\n");
        fflush(stdin);
        gets(aux);

        for (int i = 0; i < 50; i++)
        {
            if (strcmp(aux,clientes[i].codigo) == 0)
            {
                printf("Codigo: %s\n", clientes[i].codigo);
                printf("Nome: %s\n",clientes[i].nome);
                printf("Fone: %s\n", clientes[i].fone);
                printf("Rg: %s\n", clientes[i].rg);
                printf("CPF: %s\n", clientes[i].cpf);
                printf("Data de nascimento: %s/%s/%s \n\n", clientes[i].dia, clientes[i].mes, clientes[i].ano);
            }
            else
            {
                cont++;
            }
        }
        if (cont == 50)
        {
            printf("Codigo invalido\n");
        }
    }
    else
    {
        printf("Nenhum cliente cadastrado\n");
    }
}
*/
