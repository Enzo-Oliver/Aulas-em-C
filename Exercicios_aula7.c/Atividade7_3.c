// 3. Escreva um programa que:
// Leia inteiros até que o usuário digite 0.
// Conte e imprima quantos números pares e ímpares foram informados
// (desconsiderando o 0).

#include <stdio.h>

int main(){

    int n = 0;
    int pares = 0;
    int impares = 0;

    do{
        printf("Digite um numero inteiro (0 para sair):");
        scanf("%d",&n);

        if(n != 0){
            if(n % 2 == 0){
                pares++;
            }
            else{
                impares++;
            }
        }
    }
    while(n != 0);

    printf("A quantidade de numeros pares eh: %d\n",pares);
    printf("A quantidade de numeros impares eh: %d\n",impares);
    return 0;
}