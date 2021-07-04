#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define linha 3

void opcoes()
{
    printf("\nEscolha uma opcao:\n");
    printf("1 - Inserir Cliente\n");
    printf("2 - Alterar Cliente\n");
    printf("3 - Excluir Cliente\n");
    printf("4 - Pesquisar Cliente\n");
    printf("0 - Sair\n");
}

struct cliente
{
    char codigo[10];
    char nome[100];
    char fone[9];
    char rg[11];
    char cpf[11];
    char dia[3];
    char mes[3];
    char ano[3];
};




void iniciar_struct(struct cliente *clientes)
{
    for(int i = 0; i < linha; i++)
    {
        strcpy((clientes+i)->codigo,"");
        strcpy((clientes+i)->nome,"");
        strcpy((clientes+i)->fone,"");
        strcpy((clientes+i)->rg,"");
        strcpy((clientes+i)->cpf,"");
        strcpy((clientes+i)->ano,"");
        strcpy((clientes+i)->mes,"");
        strcpy((clientes+i)->ano,"");
    }

}

//-------------------------verificar clientes-----------------
int verificar_clientes(struct cliente *clientes)
{
    int cont = 0;
    for(int i = 0; i < linha; i++)
    {
        if (strcmp((clientes + i)->codigo, "") == 0)
        {
            cont++;
        }
    }

    if(cont == linha)
    {
        return -1;
    }
    return 0;
}

//------------------dados----------------------------

void lercodigo (char msg[], char *cod)
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

void lerfone (char msg[], char *fone)
{
    printf("%s", msg);
    fflush(stdin);
    gets(fone);
}

void lerrg(char msg[], char *rg)
{
    printf("%s", msg);
    fflush(stdin);
    gets(rg);
}

void lercpf (char msg[], char *cpf)
{
    printf("%s", msg);
    fflush(stdin);
    gets(cpf);
}

void lerdatadenasc (char msg[], char *dia, char *mes, char *ano)
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

//------------------------inserir------------------
void inserir(struct cliente *clientes)
{
    int cont = 0;

    for (int i = 0; i < linha; i++)
    {
        if (strcmp((clientes+i)->codigo, "") == 0)
        {
            printf("\nInsira os dados do cliente:\n");

            lercodigo("Codigo: ", (clientes+i)->codigo);

            lernome("Nome:", (clientes+i)->nome);

            lerfone("Fone:", (clientes+i)->fone);

            lerrg("Rg:", (clientes+i)->rg);

            lercpf("CPF:", (clientes+i)->cpf);

            lerdatadenasc("Data de nascimento:", (clientes+i)->dia, (clientes+i)->mes, (clientes+i)->ano);

            printf("Cliente registrado com sucesso!\n");
            break;
        }
        else
        {
            cont++;
        }
    }
    if (cont == linha)
    {
        printf("Limite de clientes atingido\n");
    }
}

//----------------------------alterar-------------------------

void alterar(struct cliente *clientes)
{
    char aux[10];
    int cont = 0;

    int verificar = verificar_clientes(clientes);

    if (verificar != -1)
    {
        printf("\nDigite o codigo do cliente que deseja alterar:\n");
        fflush(stdin);
        gets(aux);

        for (int i = 0; i < linha; i++)
        {
            if (strcmp(aux, (clientes+i)->codigo) == 0)
            {
                lernome("Nome:", (clientes+i)->nome);

                lerfone("Fone:", (clientes+i)->fone);

                lerrg("Rg:", (clientes+i)->rg);

                lercpf("CPF:", (clientes+i)->cpf);

                lerdatadenasc("Data de nascimento:", (clientes+i)->dia,(clientes+i)->mes, (clientes+i)->ano);

                printf("Cliente alterado com sucesso\n");
                break;
            }
            else
            {
                cont++;
            }
        }
        if (cont == linha)
        {
            printf("Codigo invalido\n");
        }
    }
    else
    {
        printf("Nenhum cliente cadastrado\n");
    }
}

//---------------------------excluir--------------------------------
void excluir(struct cliente *clientes)
{
    char aux[10];
    int cont = 0;

    int verificar = verificar_clientes(clientes);

    if (verificar != -1)
    {
        printf("\nDigite o codigo do cliente que deseja excluir:\n");
        fflush(stdin);
        gets(aux);

        for (int i = 0; i < linha; i++)
        {
            if (strcmp(aux, (clientes+i)->codigo) == 0)
            {
                strcpy((clientes+i)->codigo, "");
                printf("Cliente excluido com sucesso!\n");
                break;
            }
            else
            {
                cont++;
            }
        }
        if (cont == linha)
        {
            printf("Codigo invalido\n");
        }
    }
    else
    {
        printf("Nenhum cliente cadastrado\n");
    }
}

//----------------------------------pesquisar-----------------------------
void pesquisar (struct cliente *clientes)
{
    char aux[10];
    int cont = 0;

    int verificar = verificar_clientes(clientes);

    if (verificar != -1)
    {
        printf("\nDigite o codigo do cliente que deseja encontrar:\n");
        fflush(stdin);
        gets(aux);

        for (int i = 0; i < linha; i++)
        {
            if (strcmp(aux,(clientes+i)->codigo) == 0)
            {
                printf("Codigo: %s\n", (clientes+i)->codigo);
                printf("Nome: %s\n", (clientes+i)->nome);
                printf("Fone: %s\n", (clientes+i)->fone);
                printf("Rg: %s\n", (clientes+i)->rg);
                printf("CPF: %s\n", (clientes+i)->cpf);
                printf("Data de nascimento: %s/%s/%s \n\n", (clientes+i)->dia, (clientes+i)->mes, (clientes+i)->ano);
                break;
            }
            else
            {
                cont++;
            }
        }
        if (cont == linha)
        {
            printf("Codigo invalido\n");
        }
    }
    else
    {
        printf("Nenhum cliente cadastrado\n");
    }
}


//--------------------------main--------------

int main()
{
    struct cliente *clientes = malloc(linha * sizeof(struct cliente));

    iniciar_struct(clientes);

    int escolha = 1;

    do
    {
        opcoes();
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            inserir(clientes);
            break;

        case 2:
            alterar(clientes);
            break;

        case 3:
            excluir(clientes);
            break;

        case 4:
            pesquisar(clientes);
            break;

        case 0:
            escolha = 0;
            break;

        default:
            printf("Opcao invalida, digite novamente.\n");
            break;
        }
    }
    while (escolha >= 1);

    return 0;
}
