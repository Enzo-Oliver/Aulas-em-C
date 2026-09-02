//Opção de menu.

#include <stdio.h>

int main(){

    int opcao;

    do{
        printf("---- Informacoes do menu ----\n");
        printf("(1) - Opcao1\n");
        printf("(2) - Opcao2\n");
        printf("(3) - Sair\n");
        printf("------------------------------\n");

        scanf("%d",&opcao);
        if (opcao == 1){
            printf("Voce escolheu a opcao 1\n");
        }
        else if (opcao == 2){
            printf("Voce esconheu a opcao 2\n");
        }
        else if (opcao != 3){
            printf("Opcao invalida! tente novamente\n");
        }
    }while (opcao != 3);
    printf("O programa foi encerrado!\n");
    return 0;
}