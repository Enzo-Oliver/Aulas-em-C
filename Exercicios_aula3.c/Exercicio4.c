// Exercício 4: Verificador de Ano Bissexto Completo

#include <stdio.h>

int main(){

    int Ano;

    printf("Digite o ano que deseja saber: ");
    scanf("%d", &Ano);

    if ((Ano % 4 == 0 && Ano % 100 != 0) || (Ano % 400 == 0)){
        printf("O ano %d eh bissexto\n", Ano);
    } else {
        printf("O ano %d nao eh bissexto\n", Ano);
    }
    
    return 0;
}