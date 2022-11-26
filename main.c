#include <stdio.h>
#include <stdlib.h>
#include "conta.h"
#define MAX 1000

int main() {
    p_conta vtrConta[MAX];
    int p = 0; //indica posicao (quantidade)
    init(vtrConta, MAX);
    return 0;

    int accessMenu;
    do{
        //system("cls");
        printf("CONTA\n");
        printf("1. Inserir Conta\n");
        printf("2. Alterar Conta\n");
        printf("3. Comprar Produto\n");
        printf("4. Vender Produto\n");
        printf("5. Estoque de Produto\n");
        printf("6. Patrimonio Estocado \n");
        printf("7. Listar todos os produtos\n");
        printf("9. Sair \n");
        printf("Digite sua opcao:  \n");
        scanf("%d", &accessMenu);
        switch(accessMenu){
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
                vender(vtrProdutos, p);
                break;
            case 5:
                listarProdutoUnico(vtrProdutos, p);
                break;
            case 6:
                verificarPatrimonio(vtrProdutos, p);
                break;
            case 7:
                imprimir(vtrProdutos, p);
                break;
            case 9:
                printf("Fim do programa \n");
                exit(0);
        }
    }while(accessMenu!=9);
}
