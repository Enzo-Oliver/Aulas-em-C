// leitor de notas até que o usuario gigite um valor negativo. 6a

#include <stdio.h>

int main(){
    float nota = 0;
    float soma = 0;

    while(nota >= 0){

        printf("Digite o valor da nota: ");
        scanf("%f",&nota);

        soma = soma + nota;
        printf("A soma eh:%.2f\n",soma);
    }

    return 0;
}