//--------------------------------------------------------------------------------
// #include <stdio.h>

// float media(float a, float b){
//     float media;
//     media = (a + b) / 2;
//     return media;
// }

// int main(){

//     float m = media(10, 5);
//     printf("A media eh: %.2f\n", m);
//     return 0;
// }
//--------------------------------------------------------------------------------

#include <stdio.h>

float validar_cpf(int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9) {
    int soma1 = (d1*10) + (d2*9) + (d3*8) + (d4*7) + (d5*6) + (d6*5) + (d7*4) +(d8*3) + (d9*2);
    int resto1 = soma1 % 11;
    int dv1 = (resto1 < 2) ? 0 : 11 - resto1;

    int soma2 = (d2*10) + (d3*9) + (d4*8) + (d5*7) + (d6*6) + (d7*5) + (d8*4) +(d9*3) + (dv1*2);
    int resto2 = soma2 % 11;
    int dv2 = (resto2 < 2) ? 0 : 11 - resto2;

    return dv1 * 10 + dv2;
}

#include <stdio.h>

int main(){

    int d1,d2,d3,d4,d5,d6,d7,d8,d9;
    printf("Digite os 9 primeiros digitos do CPF:\n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9);

    int dv = validar_cpf(d1, d2, d3, d4, d5, d6, d7, d8, d9);

    printf("=============== Validador CPF =================\n");
    printf("O digito verificador do CPF eh: %02d\n", dv);
    int dv1 = dv / 10;
    int dv2 = dv % 10;
    printf("O dv1 do CPF eh: %d\n", dv1);
    printf("O dv2 do CPF eh: %d\n", dv2);
    printf("===============================================\n");

return 0;
}

//----------------------------------------------------------------------------------------