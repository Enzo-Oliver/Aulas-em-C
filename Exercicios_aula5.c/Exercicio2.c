// 2. Faça o programa que apresenta a seguinte saída, perguntando ao usuário o
// número máximo (no exemplo, 9). Este número deve ser sempre ímpar.

// 1 2 3 4 5 6 7 8 9
//   2 3 4 5 6 7 8
//     3 4 5 6 7
//       4 5 6
//         5

#include <stdio.h>

int main(){

    int numero;

for (int i = 1; i <= numero / 2 + 1; i++) {
    
    for (int j = i; j <= numero - i + 1; j++) {
        printf("%d ", j);
    }

    printf("\n");
}

return 0;

}