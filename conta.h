//definir um tipo produto (ponteiro para o produto)
typedef struct Conta * p_conta;

void init(p_conta pConta[], int tamanho);

void inserir(p_conta pConta[], int posicao);

void alterar(p_conta pConta[], int tamanho);

void procurarConta(p_conta pConta[], int tamanho);