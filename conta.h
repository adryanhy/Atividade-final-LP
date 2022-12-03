//definir um tipo produto (ponteiro para o produto)
typedef struct Conta * p_conta;

void init(p_conta pConta[], int tamanho);

void inserir(p_conta pConta[], int posicao);

void alterar(p_conta pConta[], int tamanho);

int procurarConta();

void listar(p_conta pConta[], int tamanho);

void depositar(p_conta pConta[], int tamanho);

void sacar(p_conta pConta[], int tamanho);

//void imprimir (p_conta pConta[], int tamanho);

//void imprimir (p_conta pConta[], int tamanho);

void saldoGeral(p_conta pConta[], int tamanho);

void imprimir (p_conta const *pConta, int i);

//int procurarConta(p_conta pConta[]);
