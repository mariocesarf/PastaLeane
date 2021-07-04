#include <stdio.h>
#include "funcionario.h"
#include "dependente.h"


int main()
{
    f = fopen("func.bin", "rb+");

    if (f == NULL)
    {
        f = fopen("func.bin", "wb+");
        printf("Novo arquivo\n");
    }

    int opf, opcao;

    //--------------------- FUNCIONARIOS ------------------------------------------------------------------------------------
    do
    {
        opcoes();
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                do
                {
                    opcoes_funcionario();
                    scanf("%d", &opf);

                    switch (opf)
                    {
                        case 1:
                            novo_funcionario(funcionarios);
                            break;
                        case 2:
                            alterar_funcionario(funcionarios);
                            break;
                        case 3:
                            excluir_funcionario(funcionarios);
                            break;
                        case 4:
                            dados_codfuncionario(funcionarios);
                            break;
                        case 5:
                            todos_funcionario(funcionarios);
                            break;

                        case 6:
                            ordem_funcionario(ordenar, funcionarios);
                            break;
                        case 0:
                            break;

                        default:
                            printf("Opcao invalida, digite novamente:\n");
                            break;
                    }
                } while (opf != 0);

                //--------------------------- DEPENDENTES-----------------------------------------------------------------------------------
            case 2:
                /*do
                    {
                        opcoes_dependentes();
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


                case 0:
                    break;

                default:
                    printf("Opcao invalida, digite novamente:\n");*/
                break;
        }
    } while (opcao != 0);

    fclose(f);
    return 0;
}

