// contagem regressiva
// O usuario entra com um numero inteiro e você deve decrementá-lo ate 1

#include <stdio.h>

int main(){
    
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    while(n >= 1){
        printf("%d\n", n);
        n = n - 1;
    }

    return 0;
}