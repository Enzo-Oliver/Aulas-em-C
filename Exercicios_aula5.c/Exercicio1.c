#include <stdio.h>

int main(){

    float nota1;
    float nota2;
    float nota3;
    float media;
    float media_aproveitamento;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota2);

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota3);

    //MA = (N1 + N2*2 + N3*3 + ME)/7.

    media = (nota1 + nota2 + nota3)/3;

    media_aproveitamento = (nota1 + nota2*2 + nota3*3 + media) / 7;

    // maior ou igual a 9 A
    // maior ou igual a 7.5 e menor que 9 B
    // maior ou igual a 6 e menor que 7.5 C
    // maior ou igual a 4 e menor que 6 D
    // menor que 4 E

    if (media_aproveitamento >= 9){
        printf("Sua nota: A.");
    } 
    
    else if  (media_aproveitamento >= 7.5 && media_aproveitamento < 9) {
        printf("Sua nota: B.");
    }
        
    else if (media_aproveitamento >= 6 && media_aproveitamento < 7.5) {
        printf("Sua nota: C.");
    }

    else if (media_aproveitamento >= 4 && media_aproveitamento < 6) {
        printf("Sua nota: D.");
    }

    else if (media_aproveitamento < 4) {
        printf("Sua nota: E.");
    }

    //printf("A media e a Media de aproveitamento sera de: %.2f,%.2f. ", media, media_aproveitamento);


    return 0;
}