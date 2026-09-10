#include <stdio.h>

int main(){

    int opcao;

    printf("1 - Cadastrar\n2 - Consultar\n3 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Cadastro selecionado\n");
            break;
        case 2:
            printf("Consulta selecionada\n");
            break;
        case 3:
            printf("Encerrando\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}