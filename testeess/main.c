#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct funcionario
{
    char cod[10];
};

void iniciar_struct(struct funcionario *funcionarios)
{
    for(int i = 0; i < 50; i++)
    {
        strcpy((funcionarios+i)->cod,"");
        /* strcpy((funcionarios+i)->nome,"");
         strcpy((funcionarios+i)->salario,"");
         strcpy((funcionarios+i)->rg,"");
         strcpy((funcionarios+i)->cpf,"");

         strcpy((funcionarios+i)->rua,"");
         strcpy((funcionarios+i)->bairro,"");
         (funcionarios+i)->numero = 0;

         (funcionarios+i)->ano = 0;
         (funcionarios+i)->mes = 0;
         (funcionarios+i)->ano = 0;

         strcpy((funcionarios+i)->tipo_sanguineo,"");*/
    }
}

void novo_funcionario(struct funcionario *funcionarios)
{
    for (int i = 0; i < 50; i++)
    {
        if (strcmp((funcionarios +i)->cod, "") == 0)
        {
            /*printf("Digite o codigo do funcionario:\n");
            inserir_codfuncionario(funcionarios, (funcionarios +i)->cod);
*/
            printf("Digite o nome do funcionario:\n");
            inserir_nomefuncionario((funcionarios +i));

           /* printf("Digite o RG do funcionario (opcional):\n");
            inserir_rgfuncionario((funcionarios +i));

            printf("Digite o CPF do funcionario:\n");
            inserir_cpffuncionario((funcionarios +i));

            printf("Digite o salario do funcionario:\n");
            inserir_salariofuncionario((funcionarios +i));

            printf("Digite o endereco do funcionario (opcional):\n");
            inserir_endefuncionario((funcionarios +i));

            printf("Digite a data de nascimento do funcionario:\n");
            inserir_datafuncionario((funcionarios +i));

            printf("Digite o tipo sanguineo do funcionario (opcional):\n");
            inserir_tiposan_funcionario((funcionarios +i));

            printf("Funcionario cadratrado com sucesso!\n\n");*/
            break;
        }
    }
}

void inserir_nomefuncionario(char *n)
{
 char aux[100];
do{
    fflush(stdin);
    gets(aux);

    if (strcmp(aux, "") == 0)
    {
        printf("Campo obrigatorio,  digite novamente:\n");
    }
}while(strcmp(aux, "") == 0);

    printf("Nome registrado com sucesso!\n\n");

    strcpy(n, aux);
}

int main()
{
    struct funcionario *funcionarios = malloc (50 * sizeof (struct funcionario));

    int escolha;
    iniciar_struct(funcionarios);

    do
    {
        scanf("%d", &escolha);

        if(escolha ==  1)
        novo_funcionario(funcionarios);

    }while(escolha == 1);


    free(funcionarios);
    return 0;
}
