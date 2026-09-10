//calculando o IMC
//usando case e switch

#include <stdio.h>

int main(){

    float peso;
    float altura;
    float imc;

    printf("Digite o valor do seu peso em Kg");
    scanf("%f", &peso);
    printf("Digite sua altura em metros");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    
    if (imc <= 18.5){
        printf("Abaixo do peso");
    }
    else if (imc >= 18.5 && imc <= 24.9){
        printf("Peso adequado");
    }
    else if (imc >= 24.9 && imc <= 29.9){
        printf("Sobrepeso");
    }
    else {
        printf("Obesidade");
    }

    return 0;
}