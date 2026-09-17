#include <stdio.h>
float dolar = 5.45;

void imprimeBomdia(){
    printf("Bom dia!");
}

float converteParaDolar(float valorReal){
    float valorConvertido = valorReal / dolar;
    return valorConvertido;
}

int main(){
    imprimeBomdia();
    printf("O valor em dolar eh: %2.f",converteParaDolar(10000));
    return 0;
}