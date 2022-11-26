#include <stdlib.h>
#include <stdio.h>
#include "conta.h"

struct Conta{
    int numero;
    char cliente[51];
    int especial;
    float saldo;
};

int procurarConta() {
    int numConta;
    printf("Digite o numero da conta a ser procurado: \n");
    scanf("%d", &numConta);
    return numConta;
}

    void init(p_conta pConta[], int tamanho){
        for(int i=0; i<tamanho; i++){
            pConta[i] = NULL;
        }
    }

    void inserir(p_conta pConta[], int posicao) {
        //reserva 1 espaco na memoria para uma conta
        pConta[posicao] = (p_conta) malloc(sizeof(struct Conta));
        printf("Digite o numero da conta: \n");
        scanf("%d", &pConta[posicao]->numero);

        fflush(stdin);
        printf("Digite o nome do cliente: \n");
        gets(pConta[posicao]->cliente);

        printf("Digite o saldo da conta: \n");
        scanf("%lf", &pConta[posicao]->saldo);

        int isEspecial;
        printf("Conta especial: [1]SIM   [0]NAO \n");
        scanf("%d", &isEspecial);
        if(isEspecial == 1) {
            pConta[posicao]->especial = 1;
        }
        printf("Conta inserida com sucesso. \n");
        system("pause");
    }

    void alterar(p_conta pConta[], int tamanho){
        int numProcurado = procurarConta();
        for(int i = 0; i<tamanho; i++){
            if(numProcurado == pConta[i]->numero){
                fflush(stdin);
                printf("Digite o novo nome do cliente: \n");
                gets(pConta[i]->cliente);
                printf("Nome atualizado com sucesso \n");
                system("pause");
                return; //sai da funcao
            }
        }
    //printf("Conta nao encontrada\n");
    system("pause");

    void procurarConta(p_conta pConta[], int tamanho){
        int numProcurado = procurarConta();
        for(int i = 0; i<tamanho; i++){
            if(numProcurado == pConta[i]->numero){
                printf("")
            }
        }
    }
}