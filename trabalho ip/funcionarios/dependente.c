/*#include <stdio.h>
#include <string.h>

#include "dependente.h"
#include "funcionario.h"

int linhad = 50;
int colunad = 3;



void opcoes_dependentes()
{
    printf("\n1 - Inserir um novo dependente.\n");
    printf("2 - Alterar um dependente existente.\n");
    printf("3 - Excluir um dependente.\n");
    printf("4 - Mostrar dados de um dependete com base no codigo.\n");
    printf("5 - Mostrar todos os dependentes de um funcionario.\n");
    printf("6 - Mostrar todos os dependentes de um funcionario em ordem alfabetica pelo nome.\n");
    printf("0 - Menu anterior.\n\n");
}

int novo_dependente()
{
    int cod;
    int cont = 0;

    for (int i = 0; i < linhad; i++)
    {
        if (cod_funcionario[i] == 0)
        {
            cont++;
        }
    }

    if (cont == linhad)
    {
        printf("Nenhum funcinario cadastrado.\n\n");
        return 0;
    }
    else
    {
        cont = 0;
        printf("Digite o codigo do funcionario que deseja adicionar um depentente:\n");
        scanf("%d", &cod);

        for (int i = 0; i < linhad; i++)
        {
            if (cod == cod_funcionario[i])
            {
                for (int j = 0; j < colunad; j++)
                {
                    if (numero_dependentes[i][j] == 0)
                    {
                        printf("Digite o codigo do dependente:\n");
                        cod_dependente[i][j] = inserir_coddependente();

                        printf("Digite o nome do dependente:\n");
                        inserir_nomedependente(i, j);

                        printf("Digite o RG do dependente (opcional):\n");
                        inserir_rgdependente(i, j);

                        printf("Digite o CPF do dependente:\n");
                        inserir_cpfdependente(i, j);

                        printf("Digite o endereco do dependente (opcional):\n");
                        inserir_endependente(i, j);

                        printf("Digite a data de nascimento do dependente:\n");
                        inserir_datadependente(i, j);

                        printf("Digite o tipo sanguineo do dependente (opcional):\n");
                        inserir_tiposan_dependente(i, j);

                        numero_dependentes[i][j] = 1;

                        printf("Dependente cadatrado com sucesso!\n\n");
                        return 0;
                    }
                }
            }
            else
            {
                cont++;
            }
        }
    }

    if (cont == linhad)
    {
        printf("Codigo do funcionario nao identificado, tente novamente.\n");
        return 0;
    }

    printf("Limite de dependentes atingido.\n\n");
    return 0;
}


int inserir_coddependente()
{
    int num;
REFAZ:

    scanf("%d", &num);

    for (int i = 0; i < linhad; i++)
    {
        for (int j = 0; j < colunad; j++)
        {
            if (num == cod_dependente[i][j])
            {
                printf("Codigo ja existente, tente outro:\n");
                num = 0;
                goto REFAZ;
            }
        }
    }
    if (num != 0)
    {
        printf ("Codigo registrado com sucesso!\n\n");
    }

    return num;
}

int inserir_rgdependente(int i, int j)
{
REF:
    fflush(stdin);
    gets(rg_dependente[i][j]);

    if (rg_dependente[i][j][0] == '\0')
    {
        return 0;
    }
    else
    {
        if (strlen(rg_dependente[i][j]) < 11)
        {
            printf("RG invalido, digite novamente:\n");
            goto REF;
        }
        printf("RG registrado com sucesso!\n");
    }


    return 0;
}

int inserir_cpfdependente(int i, int j)
{
    char aux[50][3][11];

REFAZ:
    fflush(stdin);
    gets(aux[i][j]);

    if(aux[i][j][0] == '\0')
    {
        printf("Campo obrigatorio, digite novamente.\n");
        goto REFAZ;
    }

    for(int n = 0; n < linhad; n++)
        for(int m = 0; m < colunad; m++)
        {
            if(strcmp(aux[i][j], cpf_dependente[n][m]) == 0)
            {
                printf("CPF ja existente, insira outro. \n");
                goto REFAZ;
            }
        }

    strcpy(cpf_dependente[i][j], aux[i][j]);
    printf("CPF registrado com sucesso!\n\n");
    return 0;
}

int inserir_endependente(int i, int j)
{
    printf("Insira o nome da rua: \n");
    fflush(stdin);
    gets(rua_dependente[i][j]);

    if (rua_dependente[i][j][0] == '\0')
    {
        return 1;
    }
    printf("Insira o nome bairro: \n");
    fflush(stdin);
    gets(bairro_dependente[i][j]);

    printf("Insira o numero da sua casa: \n");
    scanf("%d", &num_dependente[i][j]);

    printf("Endereco adicionado com suceesso!\n\n");

    return 0;
}


int inserir_nomedependente(int i, int j)
{
    fflush(stdin);
    gets(nome_dependente[i][j]);

    printf("Nome registrado com sucesso!\n\n");

    return 0;

}

int inserir_datadependente(int i, int j)
{

REFAZ:
    printf("Dia:");
    scanf("%d", &dia_dependente[i][j]);

    printf("Mes:");
    scanf("%d", &mes_dependente[i][j]);

    printf("Ano:");
    scanf("%d", &ano_dependente[i][j]);

    if ((dia_dependente[i][j] == 0) || (dia_dependente[i][j] > 31))
    {
        printf("Data invalida, digite novamente.\n");
        goto REFAZ;
    }

    if ((mes_dependente[i][j] == 0) || (mes_dependente[i][j] > 12))
    {
        printf("Data invalida, digite novamente.\n");
        goto REFAZ;
    }

    if (ano_dependente[i][j] == 0)
    {
        printf("Data invalida, digite novamente.\n");
        goto REFAZ;
    }

    printf("Data de nascimento registrada com sucesso!\n\n");

    return 0;
}

int inserir_tiposan_dependente(int i, int j)
{
    fflush(stdin);
    gets(tipo_dependente[i][j]);

    if(tipo_dependente[i][j][0] == '\0')
    {
        return 0;
    }
    else
    {
        printf("Tipo sanguineo registrado com sucesso!\n\n");
    }

    return 0;
}


int alterar_dependente()
{
    int cod;
    int cont = 0;

    for (int i = 0; i < linhad; i++)
        for (int j = 0; j < colunad; j++)
        {
            if (cod_dependente[i][j] == 0)
            {
                cont++;
            }
        }


    if (cont == linhad * colunad)
    {
        printf("Nenhum dependente cadastrado.\n\n");
        cont = 0;
        return 0;
    }
    else
    {
        printf("Digite o codigo do dependente que deseja altera:\n");
        scanf("%d", &cod);

        for (int i = 0; i < linhad; i++)
            for(int j = 0; j < colunad; j++)
            {
                if (cod == cod_dependente[i][j])
                {
                    alterar_d(i, j);
                    printf("Dependente alterado com sucesso\n\n");

                    return 0;
                }
            }
    }

    printf("Codigo inexistente.\n\n");
    return 0;

}

int alterar_d(int i, int j)
{
    printf("Digite o nome do dependente:\n");
    inserir_nomedependente(i, j);

    printf("Digite o RG do dependente (opcional):\n");
    inserir_rgdependente(i, j);

    printf("Digite o CPF do dependente:\n");
    inserir_cpfdependente(i, j);

    printf("Digite o endereco do dependente (opcional):\n");
    inserir_endependente(i, j);

    printf("Digite a data de nascimento do dependente:\n");
    inserir_datadependente(i, j);

    printf("Digite o tipo sanguineo do dependente (opcional):\n");
    inserir_tiposan_dependente(i, j);


    return 0;
}



int excluir_dependente()
{
    int excluir;
    int cont = 0;

    for (int i = 0; i < linhad; i++)
        for (int j = 0; j < colunad; j++)
        {
            if (cod_dependente[i][j] == 0)
            {
                cont++;
            }
        }

    if (cont == linhad * colunad)
    {
        printf("Nenhum dependente cadastrado.\n\n");
        return 0;
    }
    else
    {
        printf("Digite o codigo do dependente que deseja excluir:\n");
        scanf("%d", &excluir);

        for (int i=0; i < linhad; i++)
        {
            for (int j=0; j < colunad; j++)
            {
                if (excluir == cod_dependente[i][j])
                {
                    cod_dependente[i][j] = 0;
                    rg_dependente[i][j][0] = '\0';
                    cpf_dependente[i][j][0] = '\0';
                    nome_dependente[i][j][0] = '\0';
                    tipo_dependente[i][j][0] = '\0';

                    rua_dependente[i][j][0] = '\0';
                    bairro_dependente[i][j][0] = '\0';
                    num_dependente[i][j] = 0;


                    dia_dependente[i][j] = 0;
                    mes_dependente[i][j] = 0;
                    ano_dependente[i][j] = 0;

                    numero_dependentes[i][j] = 0;

                    printf("Dependente excluido com sucesso!\n\n");
                    return 0;
                }
            }
        }
    }
    printf("Codigo inexistente.\n\n");
    return 0;
}

int dados_coddependente()
{
    int num;
    int cont = 0;

    for (int k = 0; k < linhad; k++)
    {
        for (int l = 0; l < colunad; l++)
        {
            if (cod_dependente[k][l] == 0)
            {
                cont++;
            }
        }
    }
    if (cont == (linhad * colunad))
    {
        printf("Nenhum dependente cadastrado.\n\n");
        cont = 0;
        return 0;
    }
    else
    {
        cont = 0;

        printf("Digite o codigo do dependente:\n");
        scanf("%d", &num);

        for (int i = 0; i < linhad; i++)
        {
            for (int j = 0; j < colunad; j++)
            {
                if (num == cod_dependente[i][j])
                {

                    printf("Nome: %s\n", nome_dependente[i][j]);

                    printf("Codigo: %d\n", cod_dependente[i][j]);

                    if (rg_dependente[i][j][0] == '\0')
                    {
                        printf("RG: nao informado.\n");
                    }
                    else
                    {
                        printf("RG: %s\n", rg_dependente[i][j]);
                    }

                    printf("CPF: %s\n", cpf_dependente[i][j]);

                    if (rua_dependente[i][j][0] == '\0')
                    {
                        printf("Endereco: nao informado.\n");
                    }
                    else
                    {
                        printf("Endereco: \n");
                        printf("Rua: %s\n", rua_dependente[i][j]);
                        printf("Numero: %d \n", num_dependente[i][j]);
                        printf("Bairro: %s \n", bairro_dependente[i][j]);
                    }
                    printf("Data de nascimento: %d/%d/%d\n", dia_dependente[i][j], mes_dependente[i][j], ano_dependente[i][j]);

                    if (tipo_dependente[i][j][0] == '\0')
                    {
                        printf("Tipo sanguineo: nao informado.\n");
                    }
                    else
                    {
                        printf("Tipo sanguineo: %s.\n", tipo_dependente[i][j]);
                    }
                    return 0;
                }
                else
                {
                    cont++;
                }
            }
        }
    }

    if (cont == linhad * colunad)
    {
        printf("Codigo inexistente.\n\n");
    }

    return 0;
}


int todos_dependente()
{
    int cod;
    int cont = 0;
    int cont2 =0;

    for (int i = 0; i < linhad; i++)
    {
        if (cod_funcionario[i] == 0)
        {
            cont++;
        }
    }
    if (cont == linhad)
    {
        printf("Nenhum funcinario cadastrado.\n\n");
        return 0;
    }
    else
    {

        for (int i = 0; i < linhad; i++)
            for (int j = 0; j < colunad; j++)
            {
                if (cod_dependente[i][j] == 0)
                {
                    cont2++;
                }
            }

        if (cont2 == linhad * colunad)
        {
            printf("Nenhum dependente cadastrado.\n\n");
            return 0;
        }
        else
        {
            cont = 0;

            printf("Digite o codigo do funcionario:\n");
            scanf("%d", &cod);

            for (int i = 0; i < linhad; i++)
            {
                if (cod == cod_funcionario[i])
                {
                    for (int j = 0; j < colunad; j++)
                    {
                        if (cod_dependente[i][j] != 0)
                        {
                            printf("Nome: %s\n", nome_dependente[i][j]);

                            printf("Codigo: %d\n", cod_dependente[i][j]);

                            if (rg_dependente[i][j][0] == '\0')
                            {
                                printf("RG: nao informado.\n");
                            }
                            else
                            {
                                printf("RG: %s\n", rg_dependente[i][j]);
                            }

                            printf("CPF: %s\n", cpf_dependente[i][j]);

                            if (rua_dependente[i][j][0] == '\0')
                            {
                                printf("Endereco: nao informado.\n");
                            }
                            else
                            {
                                printf("Endereço:\n");
                                printf("Rua %s, ", rua_dependente[i][j]);
                                printf("%d \n", num_dependente[i][j]);
                                printf("Bairro: %s \n", bairro_dependente[i][j]);
                            }

                            printf("Data de nascimento: %d/%d/%d\n", dia_dependente[i][j], mes_dependente[i][j], ano_dependente[i][j]);

                            if (tipo_dependente[i][j][0] == '\0')
                            {
                                printf("Tipo sanguineo: nao informado.\n\n");
                            }
                            else
                            {
                                printf("Tipo sanguineo: %s.\n", tipo_dependente[i][j]);
                            }
                        }

                    }

                }
                else
                {
                    cont++;
                }
            }
        }
    }

    if(cont == linhad)
    {
        printf("Codigo inexistente.\n\n");
    }

    return 0;
}

int todos_ordem()
{
    char auxd[100];
    char aux_ordemd[linhad][colunad][100];
    int cont = 0;
    int cont2 = 0;

    int cod;

    for (int i = 0; i < linhad; i++)
        for(int j = 0; j < colunad; j++)
            aux_ordemd[i][j][0]  = '\0';

    for (int i = 0; i < linhad; i++)
    {
        if (cod_funcionario[i] == 0)
        {
            cont++;
        }
    }

    if (cont == linhad)
    {
        printf("Nenhum funcinario cadastrado.\n\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < linhad; i++)
            for (int j = 0; j < colunad; j++)
            {
                if (cod_dependente[i][j] == 0)
                {
                    cont2++;
                }
            }

        if (cont2 == linhad * colunad)
        {
            printf("Nenhum dependente cadastrado.\n\n");
            return 0;
        }
        else
        {
            cont = 0;

            printf("Digite o codigo do funcionario:\n");
            scanf("%d", &cod);

            for (int i = 0; i < linhad; i++)
            {
                if (cod == cod_funcionario[i])
                {
                    for (int j = 0; j < colunad; j++)
                    {
                        if (nome_dependente[i][j][0] != '\0')
                            strcpy(aux_ordemd[i][j], nome_dependente[i][j]);
                    }

                    for (int  j = 1; j < colunad; j++)
                    {
                        if (strcmp(aux_ordemd[i][j - 1], aux_ordemd[i][j]) > 0)
                        {
                            strcpy(auxd, aux_ordemd[i][j - 1]);
                            strcpy(aux_ordemd[i][j - 1], aux_ordemd[i][j]);
                            strcpy(aux_ordemd[i][j], auxd);
                        }
                    }


                    for(int l =0; l < colunad; l++)
                        for (int k = 0; k < colunad; k++)
                        {
                            if ((aux_ordemd[i][l][0] != '\0')  && (nome_dependente[i][k][0] != '\0'))

                                if (strcmp(aux_ordemd[i][l],nome_dependente[i][k]) == 0)
                                {
                                    printf("Nome: %s\n", aux_ordemd[i][l]);

                                    printf("Codigo: %d\n", cod_dependente[i][k]);

                                    if (rg_dependente[i][k][0] == '\0')
                                    {
                                        printf("RG: nao informado.\n");
                                    }
                                    else
                                    {
                                        printf("RG: %s\n", rg_dependente[i][k]);
                                    }

                                    printf("CPF: %s\n", cpf_dependente[i][k]);

                                    if (rua_dependente[i][k][0] == '\0')
                                    {
                                        printf("Endereco: nao informado.\n");
                                    }
                                    else
                                    {
                                        printf("Endereco:\n");
                                        printf("Rua: %s\n", rua_dependente[i][k]);
                                        printf("Numero: %d \n", num_dependente[i][k]);
                                        printf("Bairro: %s \n", bairro_dependente[i][k]);
                                    }

                                    printf("Data de nascimento: %d/%d/%d\n", dia_dependente[i][k], mes_dependente[i][k], ano_dependente[i][k]);

                                    if (tipo_dependente[i][k][0] == '\0')
                                    {
                                        printf("Tipo sanguineo: nao informado.\n\n");
                                    }
                                    else
                                    {
                                        printf("Tipo sanguineo: %s.\n", tipo_dependente[i][k]);
                                    }

                                }
                        }
                }
                else
                {
                    cont++;
                }
            }
        }
    }

    if (cont == linhad)
    {
        printf("Codigo inexistente.\n\n");
    }

    return 0;
}

*/
