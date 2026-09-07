// 4. Controle de Estoque de Loja
// Desenvolva um programa que exiba um menu repetitivo com as seguintes opções: 1 - Adicionar
// Item, 2 - Remover Item, 3 - Exibir Saldo Atual e 4 - Sair. O programa deve começar com um
// estoque de 100 itens. Cada vez que o usuário escolher 1 ou 2, o programa deve pedir a
// quantidade e atualizar o estoque. O menu deve continuar aparecendo até que a opção 4 seja
// selecionada

#include <stdio.h>

int main() {
    int estoque = 100;
    int opcao, quantidade;

    do {
        printf("\nMenu:\n");
        printf("1 - Adicionar Item\n");
        printf("2 - Remover Item\n");
        printf("3 - Exibir Saldo Atual\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite a quantidade a adicionar: ");
            scanf("%d", &quantidade);
            estoque += quantidade;
            printf("Estoque atualizado: %d itens\n", estoque);
        } else if (opcao == 2) {
            printf("Digite a quantidade a remover: ");
            scanf("%d", &quantidade);
            if (quantidade <= estoque) {
                estoque -= quantidade;
                printf("Estoque atualizado: %d itens\n", estoque);
            } else {
                printf("Quantidade insuficiente no estoque!\n");
            }
        } else if (opcao == 3) {
            printf("Saldo atual do estoque: %d itens\n", estoque);
        } else if (opcao != 4) {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    printf("Saindo do programa...\n");
    return 0;
}