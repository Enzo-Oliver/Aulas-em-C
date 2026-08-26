// #include <stdio.h>

// imprime de 1 a 10 com for.

// int main(){

//     for(int i = 1; i <=10; i++){
//         printf("O numero eh: %d\n", i);
//     }

//     return 0;
// }

// ==========================================================================

// #include <stdio.h>

// //imprimir os numeros pares de 2 a 20.

// int main(){

//     for(int i=2; i<=20; i++){
//         if (i%2 ==0){
//             printf("O numero eh: %d\n", i);
//         }
//     }

//     return 0;
// }

// ==========================================================================

//  #include <stdio.h>

// // calcular o somatorio de 1 a n(n informação do usuario).

//  int main(){

//     int n,soma;
    
//     printf("Digite o valor de N: ");
//     scanf("%d", &n);
//     soma = 0;

//     for (int i=1; i<=n; i++){
//         soma = soma + i;
//     }

//     printf("A soma de 1 a n eh igual a: %d\n", soma);

//     return 0;
    
//  }


// ==========================================================================

// calcular a PA, onde o usuario vai entrar com:
//-primeiro termo termo da PA
//-razap da PA
//-quantidade de termos a ser calculados

#include <stdio.h>

int main(){

    int P,R,N,termo_atual;

    //primeiro termo
    printf("Entre com o primeiro termo da PA: ");
    scanf("%d", &P);

    //razao
    printf("Entre com a razao da PA: ");
    scanf("%d", &R);

    //quantidade de termos
    printf("Entre com a quantidade de termos a serem calculados: ");
    scanf("%d", &N);

    if (N <= 0){
        printf("Numero negativo nao eh aceito!\n");
    }

    termo_atual = P;

    for(int i = 1; i<=N; i++){
        printf("%d ", termo_atual);
        termo_atual = termo_atual + R;
    }

    return 0;
}