#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "conta.h"

struct Conta{
    int numero;
    char cliente[51];
    int especial;
    float saldo;
};


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

void alterar(p_conta pConta[], int tamanho) {
    int numProcurado = procurarConta();
    for (int i = 0; i < tamanho; i++) {
        if (numProcurado == pConta[i]->numero) {
            fflush(stdin);
            printf("Digite o novo nome do cliente: \n");
            gets(pConta[i]->cliente);
            printf("Nome atualizado com sucesso \n");
            system("pause");
            return; //sai da funcao
        }
    }
    printf("Conta nao encontrada\n");
    system("pause");
}

int procurarConta() {
    int numProcurado;
    bool searchConta = true;
    printf("Digite a conta a ser procurada:\n");
    scanf("%d", &numProcurado);
        return numProcurado;
    }



void listar(p_conta pConta[], int tamanho){
    int numProcurado = procurarConta();
    for (int i = 0; i < tamanho; i++) {
        if (numProcurado == pConta[i]->numero){
            imprimir(pConta, i);
            system("pause");
            return;

        }

    }
}

void depositar(p_conta pConta[], int tamanho){
    int numProcurado = procurarConta();
    for (int i = 0; i < tamanho; i++) {
        if (numProcurado ==pConta[i] -> numero) {
            fflush(stdin);
            printf("Digite a quantidade depositada:");
            float qtd_Depositada;
            scanf("%f", &qtd_Depositada);
            if (qtd_Depositada <= 0){
                printf("Valor Incorreto. Informe Corretamente\n");
                system("pause");
                return;

            }
            pConta [i] -> saldo += qtd_Depositada;
            printf("Valor lancado na conta.");
            system("pause");
            return; //sai da funcao
        }
    }
    printf("Conta nao encontrada");
    system("pause");
}

void sacar(p_conta pConta[], int tamanho) {
    int numProcurado = procurarConta();
    for (int i = 0; i < tamanho; i++) {
        if (numProcurado == pConta[i]->numero) {
            fflush(stdin);
            printf("Digite a quantidade que deseja sacar:");
            int qtd_Sacada;
            scanf("%f", &qtd_Sacada);
            if (qtd_Sacada > pConta[i]->saldo) {
                printf("Valor Indisponivel.\n");
                system("pause");
                return;
            }
            pConta[i]->saldo -= qtd_Sacada;
            printf("Valor sacado com sucesso.");
            system("pause");
            return;
        }
        printf("Conta nao encontrada");
        system("pause");
    }
}

void imprimir (p_conta const *pConta, int i){
    printf("Numero da Conta: %d", pConta[i] -> numero);
    printf("Nome: %s", pConta[i] -> cliente);
    printf("Saldo: %.2f", pConta[i]  -> saldo);
}

void saldoGeral(p_conta pConta[], int tamanho){
    double total = 0.0;
    for (int i = 0; i <tamanho ; i++) {
        total+= pConta[i] ->saldo;
    }
    printf("Saldo geral: %lf", total);


}
