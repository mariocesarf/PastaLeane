int cod_funcionario[50];
float salario_funcionario[50];
char rg_funcionario[50][11];
char cpf_funcionario[50][11];
char nome_funcionario[50][100];

char rua_funcionario[50][50];
char bairro_funcionario[50][50];
int num_funcionario[50];

int dia_funcionario[50];
int mes_funcionario[50];
int ano_funcionario[50];

char tipo_funcionario[50][3];

int novo_funcionario();
int inserir_codfuncionario();
int inserir_salariofuncionario(int s);
int inserir_rgfuncionario(int r);
int inserir_cpffuncionario(int c);
int inserir_nomefuncionario(int n);
int inserir_datafuncionario(int d);
int inserir_endefuncionario(int e);
int inserir_tiposan_funcionario(int t);

int alterar_funcionario();
int alterar_f(int a);


int excluir_funcionario();

int dados_codfuncionario();
int dados_funcionario(int dado);

int todos_funcionario();

int ordem_funcionario();

