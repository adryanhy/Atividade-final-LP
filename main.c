#include <stdio.h>
#include <stdlib.h>
#include "conta.h"
#define MAX 1000

int main() {
    p_conta vtrConta[MAX];
    int p = 0; //indica posicao (quantidade)
    init(vtrConta, MAX);
    int numProcurado;

    int accessMenu;
    do {


        system("cls");
        printf("CONTA\n");
        printf("1. Inserir Conta\n");
        printf("2. Alterar Conta\n");
        printf("3. Procurar Conta\n");
        printf("4. Listar Conta\n");
        printf("5. Depositar\n");
        printf("6. Sacar\n");
        printf("7. Imprimir Dados da Conta\n");
        printf("8. Saldo Geral\n");
        printf("9. Sair \n");
        printf("Digite sua opcao:  \n");
        scanf("%d", &accessMenu);
        switch (accessMenu) {
            case 1:
                inserir(vtrConta, p);
                p++;
                break;
            case 2:
                alterar(vtrConta, p);
                break;
            case 3:
                procurarConta(vtrConta, p);
                break;
            case 4:
                listar(vtrConta, p);
                break;
            case 5:
                depositar(vtrConta, p);
                break;
            case 6:
                sacar(vtrConta, p);
                break;
            case 7:
                imprimir(vtrConta, p);
                break;
            case 8:
                saldoGeral(vtrConta, p);
                break;
            case 9:
                printf("Fim do programa \n");
                exit(0);
        }

    } while (accessMenu != 9);

    return 0;
}

