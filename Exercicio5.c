// Exercício 5: Conversor de Tempo Complexo

// Crie um programa que leia um valor inteiro correspondente a uma quantidade total de segundos.
// O programa deve realizar as conversões necessárias e exibir essa quantidade exata fragmentada
// no padrão: Semanas, Dias, Horas, Minutos e Segundos.

// Exemplo: Se o usuário digitar um valor alto de segundos, o sistema deve dizer exatamente
// quantas semanas inteiras cabem ali, quantos dias restaram, quantas horas, minutos e, por fim, os
// segundos restantes. 

#include <stdio.h>

int main(){

    int semanas, dias, horas, minutos, segundos, mes, ano;

    printf("Digite os segundos para conversao no maximo 8 digitos: ");
    scanf("%d", &segundos);

    if (segundos < 0 || segundos > 99999999){
        printf("Erro: O valor digitado nao pode ser convertido.\n");
        return 1;
    }
    
    ano = segundos / 31536000; // 1 ano = 31536000 segundos
    segundos = segundos % 31536000;
    mes = segundos / 2628000; // 1 mes = 2628000 segundos
    segundos = segundos % 2628000;
    semanas = segundos / 604800; // 1 semana = 604800 segundos
    segundos = segundos % 604800;
    dias = segundos / 86400; // 1 dia = 86400 segundos
    segundos = segundos % 86400;
    horas = segundos / 3600; // 1 hora = 3600 segundos
    segundos = segundos % 3600;
    minutos = segundos / 60; // 1 minuto = 60 segundos
    segundos = segundos % 60;

    printf("O tempo convertido eh: %d anos, %d meses, %d semanas, %d dias, %d horas, %d minutos e %d segundos.\n", ano, mes, semanas, dias, horas, minutos, segundos);

    return 0;
    
}