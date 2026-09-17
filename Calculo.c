#include <stdio.h>
#include "matematica.h"

int main(){
    float valorsalario = 1621;
    printf("O valor do salario em real eh: R$ %.2F. Em dolar eh: $%2.f", valorsalario,converteParaDolar(valorsalario));
    return 0;
}

// void imprimeBoanoite();
// void imprimeBomdia(){
//     printf("Bom dia!");
// }
// int main(){
//     imprimeBomdia();
//     dolar = 7.00;
//     printf("O valor em dolar eh: %2.f\n",converteParaDolar(10000));
//     return 0;
// }

// void imprimeBoanoite(){
//     printf("Boa noite!\n");
// }