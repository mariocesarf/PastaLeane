int cod_dependente[50][3];
char rg_dependente[50][3][11];
char cpf_dependente[50][3][11];
char nome_dependente[50][3][100];
int numero_dependentes[50][3];

char rua_dependente[50][3][50];
char bairro_dependente[50][3][50];
int num_dependente[50][3];

int dia_dependente[50][3];
int mes_dependente[50][3];
int ano_dependente[50][3];

char tipo_dependente[50][3][3];

int novo_dependente();
int inserir_coddependente();
int inserir_rgdependente(int i, int j);
int inserir_cpfdependente(int i , int j);
int inserir_endependente(int i, int j);
int inserir_nomedependente(int i, int j);
int inserir_tiposan_dependente(int i, int j);

int inserir_datadependente(int i, int j);

int alterar_dependente();
int alterar_d(int i, int j);

int excluir_dependente();

int dados_coddependente();

int todos_dependente();
int todos_ordem();
