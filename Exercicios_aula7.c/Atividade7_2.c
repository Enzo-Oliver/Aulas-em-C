// 2. Escreva um programa que:
// Leia 10 notas (0 a 10).
// Calcule e imprima a média, a maior e a menor nota.


#include <stdio.h>

int main(){

    float nota = 0;
    float soma = 0;
    float maior = 0;
    float menor = 10;

    for(int i=0; i<10; i++){
        printf("Digite o valor da nota: ");
        scanf("%f",&nota);

        soma = soma + nota;
        if(nota > maior){
            maior = nota;
        }
        else if(nota < menor){
            menor = nota;
        }
        else{
            printf("Nota invalida! Digite um valor entre 0 e 10\n");
        }
    }

    float media = soma / 10;
    printf("A media eh: %.2f\n",media);
    printf("A maior nota eh: %.2f\n",maior);
    printf("A menor nota eh: %.2f\n",menor);

return 0;
}