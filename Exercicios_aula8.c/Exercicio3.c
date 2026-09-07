// 3. Estatísticas de uma População
// Crie um algoritmo que leia a idade e o salário de 15 pessoas. Usando loops, calcule e exiba:
// A média de salário do grupo.
// A maior e a menor idade do grupo.
// A quantidade de pessoas com salário menor que R$ 2.000,00.

#include <stdio.h>

int main() {
    int idade, maiorIdade = 0, menorIdade = 100, countSalarioBaixo = 0;
    float salario, somaSalario = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        printf("Digite o salário da pessoa %d: ", i + 1);
        scanf("%f", &salario);

        somaSalario += salario;

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }
        if (salario < 2000) {
            countSalarioBaixo++;
        }
    }
    float mediaSalario = somaSalario / 15;
    printf("Média de salário: %.2f\n", mediaSalario);
    printf("Maior idade: %d\n", maiorIdade);
    printf("Menor idade: %d\n", menorIdade);
    printf("Quantidade de pessoas com salário menor que R$ 2.000,00: %d\n", countSalarioBaixo);

    return 0;
}