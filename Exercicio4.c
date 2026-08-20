// Exercício 4: Verificador de Ano Bissexto Completo

// Peça para o usuário digitar um ano qualquer (número inteiro). O programa deve determinar se o
// ano informado é bissexto ou não, exibindo uma mensagem correspondente.

// Regra de cálculo: Um ano é bissexto se for divisível por 4, mas não por 100, a menos que ele
// também seja divisível por 400. Utilize operadores lógicos para resolver o problema em uma única
// estrutura de decisão. 

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