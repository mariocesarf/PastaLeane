#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funcionario.h"

int linhaf = 50;

int novo_funcionario()
{

    for (int i = 0; i < linhaf; i++)
    {

        if (cod_funcionario[i] == 0)
        {
            printf("Digite o codigo do funcionario:\n");
            cod_funcionario[i] = inserir_codfuncionario();

            printf("Digite o nome do funcionario:\n");
            inserir_nomefuncionario(i);

            printf("Digite o RG do funcionario (opcional):\n");
            inserir_rgfuncionario(i);

            printf("Digite o CPF do funcionario:\n");
            inserir_cpffuncionario(i);

            printf("Digite o salario do funcionario:\n");
            inserir_salariofuncionario(i);

            printf("Digite o endereco do funcionario (opcional):\n");
            inserir_endefuncionario(i);

            printf("Digite a data de nascimento do funcionario:\n");
            inserir_datafuncionario(i);

            printf("Digite o tipo sanguineo do funcionario (opcional):\n");
            inserir_tiposan_funcionario(i);

            printf("Funcionario cadratrado com sucesso!\n\n");
            break;
        }
    }
    return 0;
}

int inserir_codfuncionario()
{
    int num;

REFAZ:

    scanf("%d",&num);

    for (int i = 0; i < linhaf; i++)
    {
        if (num == cod_funcionario[i])
        {
            printf("Codigo ja existente, tente outro:\n");
            num = 0;
            goto REFAZ;
        }
    }
    if (num != 0)
    {
        printf ("Codigo registrado com sucesso!\n\n");
    }
    else
    {
        printf("Campo obrigatorio, digite novamente.\n");
        goto REFAZ;
    }

    return num;
}

int inserir_nomefuncionario(int n)
{
REF:
    fflush(stdin);
    gets(nome_funcionario[n]);

    if (nome_funcionario[n][0] == '\0')
    {
        printf("Campo obrigatorio,  digite novamente:\n");
        goto REF;
    }
    printf("Nome registrado com sucesso!\n\n");
    return 0;
}


int inserir_rgfuncionario(int r)
{
REF:
    fflush(stdin);
    gets(rg_funcionario[r]);

    if (rg_funcionario[r][0] == '\0')
    {
        return 0;
    }
    else
    {
        if (strlen(rg_funcionario[r]) < 11)
        {
            printf("RG invalido, digite novamente:\n");
            goto REF;
        }
        else
        {
            printf("RG registrado com sucesso!\n\n");
        }
    }

    return 0;
}

int inserir_cpffuncionario(int c)
{
    char aux[50][11];

REFAZ:
    fflush(stdin);
    gets(aux[c]);

    if(aux[c][0] == '\0')
    {
        printf("Campo obrigatorio, digite novamente.\n");
        goto REFAZ;
    }

    for(int n=0; n < linhaf; n++)
    {
        if(strcmp(aux[c], cpf_funcionario[n]) == 0)
        {
            printf("CPF ja existente, insira outro. \n");
            goto REFAZ;
        }
    }

    strcpy(cpf_funcionario[c], aux[c]);
    printf("CPF registrado com sucesso!\n\n");

    return 0;
}



int inserir_salariofuncionario(int s)
{

    scanf ("%f",&salario_funcionario[s]);

    printf("Salario registrado com sucesso!\n\n");
    return 0;
}


int inserir_endefuncionario(int e)
{
    printf("Insira o nome da rua: \n");
    fflush(stdin);
    gets(rua_funcionario[e]);

    if (rua_funcionario[e][0] == '\0')
    {
        return 0;
    }

    printf("Insira o nome bairro: \n");
    fflush(stdin);
    gets(bairro_funcionario[e]);

    printf("Insira o numero da sua casa: \n");
    scanf("%d", &num_funcionario[e]);


    printf("Endereco adicionado com suceesso!\n\n");

    return 0;
}


int inserir_datafuncionario(int d)
{


REFAZ:
    printf("Dia:");
    scanf("%d", &dia_funcionario[d]);

    printf("Mes:");
    scanf("%d", &mes_funcionario[d]);

    printf("Ano:");
    scanf("%d", &ano_funcionario[d]);

    if ((dia_funcionario[d] < 0) || (dia_funcionario[d] >= 31))
    {
        printf("Data invalida, digite novamente.\n");
        goto REFAZ;
    }

    if ((mes_funcionario[d] < 0) || (mes_funcionario[d] >= 12))
    {
        printf("Data invalida, digite novamente.\n");
        goto REFAZ;
    }

    if (ano_funcionario[d] < 0)
    {
        printf("Data invalida, digite novamente.\n");
        goto REFAZ;
    }

    printf("Data de nascimento registrada com sucesso!\n\n");

    return 0;
}

int inserir_tiposan_funcionario(int t)
{
    fflush(stdin);
    gets(tipo_funcionario[t]);

    if(tipo_funcionario[t][0] == '\0')
    {
        return 0;
    }
    else
    {
        printf("Tipo sanguineo registrado com sucesso!\n\n");
    }

    return 0;
}

int alterar_funcionario()
{
    int cod;
    int cont = 0;
    for (int i = 0; i < linhaf; i++)
    {
        if (cod_funcionario[i] == 0)
        {
            cont++;
        }
    }
    if (cont == linhaf)
    {
        printf("Nenhum funcinario cadastrado.\n\n");
        return 0;
    }
    else
    {
        printf("Digite o codigo do funcionario que deseja altera:\n");
        scanf("%d", &cod);

        for (int i = 0; i < linhaf; i++)
        {
            if (cod == cod_funcionario[i])
            {
                alterar_f(i);
                return 0;
            }
        }
    }
    printf("Codigo inexistente.\n\n");
    return 0;

}
int alterar_f(int a)
{
    printf("Digite o nome do funcionario:\n");
    inserir_nomefuncionario(a);

    printf("Digite o RG do funcionario (opcional):\n");
    inserir_rgfuncionario(a);

    printf("Digite o CPF do funcionario:\n");
    inserir_cpffuncionario(a);

    printf("Digite o salario do funcionario:\n");
    inserir_salariofuncionario(a);

    printf("Digite o endereco do funcionario (opcional):\n");
    inserir_endefuncionario(a);

    printf("Digite a data de nascimento do funcionario:\n");
    inserir_datafuncionario(a);

    printf("Digite o tipo sanguineo do funcionario (opcional):\n");
    inserir_tiposan_funcionario(a);

    return 0;
}

int excluir_funcionario()
{
    int excluir;
    int cont = 0;

    for (int i = 0; i < linhaf; i++)
    {
        if (cod_funcionario[i] == 0)
        {
            cont++;
        }
    }
    if (cont == linhaf)
    {
        printf("Nenhum funcinario cadastrado.\n\n");
        return 0;
    }
    else
    {
        cont = 0;
        printf("Digite o codigo do funcionario que deseja excluir:\n");
        scanf("%d", &excluir);

        for (int i=0; i < linhaf; i++)
        {
            if (excluir == cod_funcionario[i])
            {
                cod_funcionario[i] = 0;
                rg_funcionario[i][0]= '\0';
                cpf_funcionario[i][0] = '\0';
                nome_funcionario[i][0] = '\0';
                salario_funcionario[i] = 0;
                tipo_funcionario[i][0] = '\0';

                rua_funcionario[i][0] = '\0';
                bairro_funcionario[i][0] = '\0';
                num_funcionario[i] = 0;

                dia_funcionario[i] = 0;
                mes_funcionario[i] = 0;
                ano_funcionario[i] = 0;


                printf("Funcionario excluido com sucesso!\n\n");
            }
            else
            {
                cont++;
            }
        }
        if (cont == linhaf)
        {
            printf("Codigo inexistente.\n\n");
        }
    }
    return 0;
}

int dados_codfuncionario()
{
    int num;
    int cont = 0;

    for (int i = 0; i < linhaf; i++)
    {
        if (cod_funcionario[i] == 0)
        {
            cont++;
        }
    }
    if (cont == linhaf)
    {
        printf("Nenhum funcinario cadastrado.\n\n");
        return 0;
    }
    else
    {
        cont = 0;
        printf("Digite o codigo do funcionario:\n");
        scanf("%d", &num);

        for (int i = 0; i < linhaf; i++)
        {

            if (num == cod_funcionario[i])
            {
                printf("\nNome: %s\n", nome_funcionario[i]);

                printf("Codigo: %d\n", cod_funcionario[i]);

                if (rg_funcionario[i][0]== '\0')
                {
                    printf("RG: nao informado.\n");
                }
                else
                {
                    printf("RG: %s\n", rg_funcionario[i]);
                }

                printf("CPF: %s\n", cpf_funcionario[i]);

                if (rua_funcionario[i][0] == '\0')
                {
                    printf("Endereco: nao informado\n");
                }
                else
                {
                    printf("Endereco:\n");
                    printf("Rua: %s \n", rua_funcionario[i]);
                    printf("Numero: %d \n", num_funcionario[i]);
                    printf("Bairro: %s \n", bairro_funcionario[i]);
                }

                printf("Salario: R$ %.2f\n", salario_funcionario[i]);

                printf("Data de nascimento: %d/%d/%d\n", dia_funcionario[i], mes_funcionario[i], ano_funcionario[i]);

                if (tipo_funcionario[i][0] == '\0')
                {
                    printf("Tipo sanguineo: nao informado\n");
                }
                else
                {
                    printf("Tipo sanguineo: %s\n\n", tipo_funcionario[i]);
                }

                return 0;
            }
            else
            {
                cont++;
            }
        }

        if (cont == linhaf)
        {
            printf("Codigo inexistente.\n\n");
        }
    }

    return 0;
}


int todos_funcionario()
{

    int cont = 0;
    for (int i = 0; i < linhaf; i++)
    {
        if (cod_funcionario[i] == 0)
        {
            cont++;
        }
    }
    if (cont == linhaf)
    {
        printf("Nenhum funcinario cadastrado.\n\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < linhaf; i++)
        {
            if (nome_funcionario[i][0] != '\0')
            {
                printf("\nNome: %s\n", nome_funcionario[i]);
                printf("Codigo: %d\n", cod_funcionario[i]);

                if (rg_funcionario[i][0] == '\0')
                {
                    printf("RG: nao informado.\n");
                }
                else
                {
                    printf("RG: %s\n", rg_funcionario[i]);
                }

                printf("CPF: %s\n", cpf_funcionario[i]);

                if (rua_funcionario[i][0] == '\0')
                {
                    printf("Endereco: nao informado\n");
                }
                else
                {
                    printf("Endereco:\n");
                    printf("Rua: %s \n", rua_funcionario[i]);
                    printf("Numero: %d \n", num_funcionario[i]);
                    printf("Bairro: %s \n", bairro_funcionario[i]);
                }

                printf("Salario: R$ %.2f\n", salario_funcionario[i]);

                printf("Data de nascimento: %d/%d/%d\n", dia_funcionario[i], mes_funcionario[i], ano_funcionario[i]);

                if (tipo_funcionario[i][0] == '\0')
                {
                    printf("Tipo sanguineo: nao informado\n");
                }
                else
                {
                    printf("Tipo sanguineo: %s\n\n", tipo_funcionario[i]);
                }
            }
            else
            {
                continue;
            }
        }
    }

    return 0;
}


int ordem_funcionario()
{
    char aux[100];
    char aux_ordem[linhaf][100];
    int cont = 0;

    for (int i = 0; i < linhaf; i++)
        aux_ordem[i][0]  = '\0';

    for (int i = 0; i < linhaf; i++)
    {
        if (cod_funcionario[i] == 0)
        {
            cont++;
        }
    }

    if (cont == linhaf)
    {
        printf("Nenhum funcinario cadastrado.\n\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < linhaf; i++)
        {
            if (nome_funcionario[i][0] != '\0')
                strcpy(aux_ordem[i], nome_funcionario[i]);
        }

        for (int j = 1; j < linhaf ; j++)
        {
            if (strcmp(aux_ordem[j - 1], aux_ordem[j]) > 0)
            {
                strcpy(aux, aux_ordem[j - 1]);
                strcpy(aux_ordem[j - 1], aux_ordem[j]);
                strcpy(aux_ordem[j], aux);
            }
        }

        for (int i = 0; i < linhaf; i++)
        {
            for (int k = 0; k < linhaf; k++)
            {
                if ((aux_ordem[i][0] != '\0')  && (nome_funcionario[k][0] != '\0'))

                    if (strcmp(aux_ordem[i],nome_funcionario[k]) == 0)
                    {
                        printf("\nNome: %s\n", aux_ordem[i]);

                        printf("Codigo: %d\n", cod_funcionario[k]);

                        if (rg_funcionario[k][0] == '\0')
                        {
                            printf("RG: nao informado.\n");
                        }
                        else
                        {
                            printf("RG: %s\n", rg_funcionario[k]);
                        }

                        printf("CPF: %s\n", cpf_funcionario[k]);

                        if (rua_funcionario[k][0] == '\0')
                        {
                            printf("Endereco: nao informado\n");
                        }
                        else
                        {
                            printf("Endereco:\n");
                            printf("Rua: %s\n", rua_funcionario[k]);
                            printf("Numero: %d \n", num_funcionario[k]);
                            printf("Bairro: %s \n", bairro_funcionario[k]);
                        }

                        printf("Salario: R$ %.2f\n", salario_funcionario[k]);

                        printf("Data de nascimento: %d/%d/%d\n", dia_funcionario[k], mes_funcionario[k], ano_funcionario[k]);

                        if (tipo_funcionario[k][0] == '\0')
                        {
                            printf("Tipo sanguineo: nao informado\n");
                        }
                        else
                        {
                            printf("Tipo sanguineo: %s\n\n", tipo_funcionario[k]);
                        }
                    }
            }
        }
    }
    return 0;
}
