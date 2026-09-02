
// calcular a PA, onde o usuario vai entrar com:
//-primeiro termo termo da PA
//-razap da PA
//-quantidade de termos a ser calculados

#include <stdio.h>

int calcula_pa(int P,int R,int N){
    int termo_atual = P;

    for(int i = 1; i<=N; i++){
        printf("%d\n", termo_atual);
        termo_atual = termo_atual + R;
    }
     return 0;
}

int calcula_pg(int P,int R,int N){
    int termo_atual = P;

    for(int i = 1; i<=N; i++){
        printf("%d\n", termo_atual);
        termo_atual = termo_atual * R;
    }
    return 0;
}

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
        return -1;
    }
    else{
        printf("=========== informacoes de PA/PG =============\n");
        calcula_pa(P,R,N);
        printf("==============================================\n");
        calcula_pg(P,R,N);
        printf("==============================================\n");
        }
    
    return 0;

    }