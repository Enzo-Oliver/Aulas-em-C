// Exercício 1: Verificação do Triangulo 

//&& (E lógico): retorna verdadeiro apenas quando as duas condições são verdadeiras.
//|| (OU lógico): retorna verdadeiro quando pelo menos uma das condições é verdadeira.

#include <stdio.h>

int main(){

    int ladoA;
    int ladoB;
    int ladoC;

    printf("Digite o lado A do triangulo: ");
    scanf("%d", &ladoA);
    printf("Digite o lado B do triangulo: ");
    scanf("%d", &ladoB);
    printf("Digite o lado C do triangulo: ");
    scanf("%d", &ladoC);

    if (ladoA + ladoB <= ladoC || ladoA + ladoC <= ladoB || ladoB + ladoC <= ladoA){
        printf("Erro: Os lados informados nao podem formar um triangulo.\n");
        return 1;
    }

    if (ladoA == ladoB && ladoB == ladoC){
        printf("O triangulo eh equilatero\n");
    }

    else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
        printf("O triangulo eh isosceles\n");
    }

    else{
        printf("O triangulo eh escaleno\n");
    }
    
return 0;

}