// Exercício 2: Caixa Eletrônico (Cálculo de Cédulas)

#include <stdio.h>

int main(){

    int saque;
    int notas50, notas20, notas10, notas5;

    printf("Digite o valor que deseja ser sacado: ");
    scanf("%d", &saque);

    if (saque < 5 || saque % 5 != 0){
        printf("Erro: O valor digitado nao pode ser sacado com as notas disponiveis.\n");
    } else {
        notas50 = saque / 50;
        saque = saque % 50;
        notas20 = saque / 20;
        saque = saque % 20;
        notas10 = saque / 10;
        saque = saque % 10;
        notas5 = saque / 5;
        saque = saque % 5;

        printf("O valor sera sacado em notas de R$ 50:%d,  R$ 20:%d, R$ 10:%d, R$ 5:%d.", notas50, notas20, notas10, notas5);
    }

    return 0;
}