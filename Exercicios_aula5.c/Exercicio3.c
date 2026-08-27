// 3. Crie um código para verificar se dado um número pelo usuário, verifique se ele é
// primo

#include <stdio.h>

int main(){

    int numero;
    int divisores = 0;

printf("Digite um numero: ");
scanf("%d", &numero);

for (int i = 1; i <= numero; i++) {
    if (numero % i == 0) {
        divisores++;
    }
}

if (numero > 1 && divisores == 2) {
    printf("O numero é primo");
} else {
    printf("O numero não é primo");
}

return 0;

}