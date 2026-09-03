// 1. O Contador de Passos
// Escreva um programa que use uma estrutura de repetição para ler a quantidade de passos dados
// em cada minuto (totalizando 10 entradas). Ao final, o programa deve exibir o total de passos
// acumulados e a média de passos por minuto.

#include <stdio.h>

int main(){

    int ttlpss = 0;
    int m;



    for (int i = 0; i < 10; i++){
        printf("Digite a quantidade de passos dados: ");
        scanf("%d", &ttlpss);
        ttlpss += ttlpss;

        printf("Digite em minutos o tempo do percuso: ");
        scanf("%d", &m);
        ttlpss += m;
    }

    printf("O total de passos dados foi: %d\n", ttlpss);
    printf("A media de passos por minuto foi: %.2f\n", (float)ttlpss / 10.0);
   
    return 0;
}