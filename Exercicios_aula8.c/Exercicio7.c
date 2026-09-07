// 7. Analisador de Números Primos
// Desenvolva um programa que receba um número inteiro positivo do usuário. Utilizando uma
// estrutura de repetição, verifique se o número digitado é primo (divisível apenas por 1 e por ele
// mesmo) ou composto. Exiba uma mensagem direta na tela informando o resultado.

#include <stdio.h>

int main() {
    int numero, i, ehPrimo = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0; 
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                ehPrimo = 0; 
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("%d é um numero primo.\n", numero);
    } else {
        printf("%d é um numero composto.\n", numero);
    }

    return 0;
}