#include <stdio.h>
#include "funcionario.h"
#include "dependente.h"

int main()
{
    int linha = 50;
    int coluna = 3;

    int funcionario, dependente;
    int opcao;

    for (int i=0; i<linha; i++)
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
    }


    for (int i=0; i < linha; i++)
    {
        for (int j=0; j < coluna; j++)
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
        }
    }


//--------------------- FUNCIONARIOS ------------------------------------------------------------------------------------
do{
    opcoes();
scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        do{
        printf("\n1 - Inserir um novo funcionario.\n");
        printf("2 - Alterar um funcionario existente.\n");
        printf("3 - Excluir um funcionario.\n");
        printf("4 - Mostrar dados de um funcionario com base no codigo.\n");
        printf("5 - Mostrar todos os funcionarios.\n");
        printf("6 - Mostrar todos os funcionarios em ordem alfabetica pelo nome.\n");
        printf("0 - Menu anterior.\n");

        scanf("%d", &funcionario);

        switch (funcionario)
        {

        case 1:
            novo_funcionario();
break;
        case 2:
            alterar_funcionario();
break;
        case 3:
            excluir_funcionario();
break;
        case 4:
            dados_codfuncionario();
break;
        case 5:
            todos_funcionario();
break;
        case 6:
            ordem_funcionario();
break;
        case 0:
            break;

        default:
            printf("Opcao invalida, digite novamente:\n");
break;

        }
        }while(funcionario != 0);
        break;






//--------------------------- DEPENDENTES-----------------------------------------------------------------------------------
    case 2:

do{
        printf("\n1 - Inserir um novo dependente.\n");
        printf("2 - Alterar um dependente existente.\n");
        printf("3 - Excluir um dependente.\n");
        printf("4 - Mostrar dados de um dependete com base no codigo.\n");
        printf("5 - Mostrar todos os dependentes de um funcionario.\n");
        printf("6 - Mostrar todos os dependentes de um funcionario em ordem alfabetica pelo nome.\n");
        printf("0 - Menu anterior.\n\n");

        scanf("%d", &dependente);


        switch (dependente)
        {
        case 1:
            novo_dependente();
            break;

        case 2:
            alterar_dependente();
            break;

        case 3:
            excluir_dependente();
            break;

        case 4:
            dados_coddependente();
            break;

        case 5:
            todos_dependente();
            break;
        case 6:
            todos_ordem();
            break;

        case 0:
            break;

        default:
            printf("Opcao invalida, digite novamente:\n");
            break;
        }
}while(dependente != 0);
break;

    case 0:
        break;

    default:
        printf("Opcao invalida, digite novamente:\n");
        break;
    }
}while(opcao != 0);


    return  0;
}
