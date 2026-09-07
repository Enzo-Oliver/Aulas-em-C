// 5. O Investimento de Longo Prazo
// Escreva um programa que receba um valor inicial investido, uma taxa de juros anual (em %) e a
// quantidade de anos que o dinheiro ficará rendendo. Utilizando um laço, calcule e exiba o saldo
// da conta ano a ano, mostrando o crescimento do patrimônio.

#include <stdio.h>

int main() {
    float valorInicial, taxaJuros, saldo;
    int anos;

    printf("Digite o valor inicial investido: ");
    scanf("%f", &valorInicial);
    printf("Digite a taxa de juros anual (em %%): ");
    scanf("%f", &taxaJuros);
    printf("Digite a quantidade de anos que o dinheiro ficara rendendo: ");
    scanf("%d", &anos);

    saldo = valorInicial;

    for (int i = 1; i <= anos; i++) {
        saldo += saldo * (taxaJuros / 100);
        printf("Ano %d: Saldo = %.2f\n", i, saldo);
    }

    return 0;
}