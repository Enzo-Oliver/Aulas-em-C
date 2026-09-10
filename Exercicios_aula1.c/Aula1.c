// Para rodar o codigo em c:
// gcc .\(nome da pasta).c -o (nome da pasta)
// .\(nome da pasta)

// com int a mascara é (%d)
// com float a mascara é (%f)
// a mascara (%.2f) ele limita com duas casas decimais depois da virgula
// a mascara (%2f) ele vai deixar duas casas decimais antes da virgula

#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float media;

    //entra a nota 1
    printf("Digite a nota 1: ");
    scanf("%f", &nota1); // (&) = i comercial ele direciona a variavel.

    //entra a nota 2
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1  +nota2)/2;
    printf("A Media eh: %.2f. A nota1: %.2f. Nota2: %.2f", media, nota1, nota2);
    return 0;
}