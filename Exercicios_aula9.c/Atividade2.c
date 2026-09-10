// Exercício 2: Calculadora de Imposto de Renda e Alíquota Efetiva Simplificada
// --------------------------------------------------------------------------------
// Contexto: O cálculo do Imposto de Renda Retido na Fonte (IRRF) utiliza faixas de 
// renda e deduções fixas para cada faixa.

// Enunciado: Crie um programa que leia o salário bruto mensal de um trabalhador e 
// calcule o imposto devido com base nas seguintes regras compostas:
// - Até R$ 2.259,20: Isento (0% de imposto)
// - De R$ 2.259,21 até R$ 2.826,65: Alíquota de 7.5% (Dedução de R$ 169,44)
// - De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (Dedução de R$ 381,44)
// - De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22.5% (Dedução de R$ 662,77)
// - Acima de R$ 4.664,68: Alíquota de 27.5% (Dedução de R$ 896,00)

// Cálculo: O imposto é calculado como: (Salário Bruto * Alíquota) - Dedução.

// Saída do Programa:
// Exiba o Salário Bruto, o Valor do Imposto a ser pago e a Alíquota Efetiva Real 
// (que é a porcentagem real que o imposto representa do salário bruto: 
// (Imposto / Salário Bruto) * 100). Formate com duas casas decimais.

#include <stdio.h>

int main(){

    float salariobruto, imposto, aliquotaefetiva;

    printf("Digite o valor bruto do salario: ");
    scanf("%f",&salariobruto);

    if (salariobruto <= 2.559,20 ){
        printf("insento de imposto");
    }
    else if (salariobruto <= 2.826,65 && salariobruto > 2.259,21){
        imposto = (salariobruto * 0.075) - 169.44;
        aliquotaefetiva = (imposto / salariobruto) * 100;
        printf("O valor do imposto a ser pago e: %.2f\n", imposto);
        printf("A aliquota efetiva real e: %.2f%%\n", aliquotaefetiva);
    }
    else if (salariobruto <= 3.751,05 && salariobruto > 2.826,66){
        imposto = (salariobruto * 0.15) - 381.44;
        aliquotaefetiva = (imposto / salariobruto) * 100;
        printf("O valor do imposto a ser pago e: %.2f\n", imposto);
        printf("A aliquota efetiva real e: %.2f%%\n", aliquotaefetiva);
    }
    else if (salariobruto <= 4.664,68 && salariobruto > 3.751,06){
        imposto = (salariobruto * 0.225) - 662.77;
        aliquotaefetiva = (imposto / salariobruto) * 100;
        printf("O valor do imposto a ser pago e: %.2f\n", imposto);
        printf("A aliquota efetiva real e: %.2f%%\n", aliquotaefetiva);
    }
    else {
        imposto = (salariobruto * 0.275) - 896.00;
        aliquotaefetiva = (imposto / salariobruto) * 100;
        printf("O valor do imposto a ser pago e: %.2f\n", imposto);
        printf("A aliquota efetiva real e: %.2f%%\n", aliquotaefetiva);
    }
    
    return 0;
}