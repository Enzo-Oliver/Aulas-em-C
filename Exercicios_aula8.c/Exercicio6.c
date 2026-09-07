// 6. Sequência de Fibonacci Aplicada
// Crie um programa que peça ao usuário um número inteiro N. O programa deve gerar e imprimir
// os N primeiros termos da Sequência de Fibonacci (onde os dois primeiros termos são 0 e 1, e os
// próximos são sempre a soma dos dois anteriores: 0, 1, 1, 2, 3, 5, 8, 13...).

#include <stdio.h>

int main() {
    int N, t1 = 0, t2 = 1, proximoTermo;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    printf("Sequencia de Fibonacci ate %d termos:\n", N);

    for (int i = 1; i <= N; i++) {
        printf("%d ", t1);
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
    }

    return 0;
}