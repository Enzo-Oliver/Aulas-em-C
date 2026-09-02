//tabuada de 1 a 5 com for

#include <stdio.h>

int main(){

    for(int numero=1; numero<=10; numero++){
        for(int i=1; i<=10; i++){
            int mult = numero * i;
            printf("%d x %d = %d\n", numero, i, mult);
    }
    printf("===========================================\n");
}

    return 0;

}