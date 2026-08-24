// Exercício 3: Cálculo de Imposto de Renda Retido na Fonte (IRRF)

#include <stdio.h>

int main(){

    int salarioBruto;
    float impostoRetido, salarioLiquido;

    printf("Digite o salario bruto do funcionario: ");
    scanf("%d", &salarioBruto);

    if (salarioBruto <= 2000){
        impostoRetido = 0;
    }
    else if (salarioBruto <= 4000){
        impostoRetido = (salarioBruto - 2000) * 0.15;
    }
    else{
        impostoRetido = (salarioBruto - 4000) * 0.225 + 300;
    }

    salarioLiquido = salarioBruto - impostoRetido;
    printf("Salario Bruto: R$ %.2f\n", (float)salarioBruto);
    printf("imposto Retido: R$ %.2f\n", impostoRetido);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}

