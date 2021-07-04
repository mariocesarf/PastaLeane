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

 struct cliente *clientes = malloc(50 * sizeof(struct cliente));

 void iniciar_struct(struct cliente *cli);
/*void lercodigo (char msg[], char cod[]);
void lernome (char msg[], char nome[]);
void lerfone (char msg[], char fone[]);
void lerrg(char msg[], char rg[]);
void lercpf (char msg[], char cpf[]);
void lerdatadenasc (char msg[], char dia[], char mes[], char ano[]);
int verificar_clientes();
*/
