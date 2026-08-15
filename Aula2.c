#include <stdio.h>

float main() {

    float T_fahrenheit;
    float T_Celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &T_Celsius);

    T_fahrenheit = ( T_Celsius * 9 / 5 ) + 32;

    printf("A temperatura em Fahrenheit sera de: %.2f\n", T_fahrenheit);
    return 0;
}