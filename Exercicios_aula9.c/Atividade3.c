// Exercício 3: Sistema de Triagem Hospitalar Avançado (Protocolo de Manchester)
// --------------------------------------------------------------------------------
// Contexto: Prontos-socorros utilizam sistemas de triagem para definir a urgência do 
// atendimento com base em sintomas combinados.

// Enunciado: Desenvolva um programa que auxilie na triagem médica. O programa deve 
// solicitar ao usuário que informe a gravidade de 3 sintomas clássicos usando uma 
// escala de 0 (Ausente) a 3 (Grave):
// - Dor Torácica (int)
// - Dificuldade Respiratória (int)
// - Febre/Temperatura (int)

// Regras de Classificação:
// - Se a Dor Torácica FOR igual a 3 OU a Dificuldade Respiratória FOR igual a 3: 
//   Classificação "VERMELHA" (Emergência - Atendimento Imediato).
// - Se a Dor Torácica for 2 OU a Dificuldade Respiratória for 2, E a Febre for maior 
//   ou igual a 2: Classificação "LARANJA" (Muito Urgente - Até 10 minutos).
// - Se pelo menos um dos três sintomas for igual a 2 ou 3 (e não se enquadrar nas 
//   regras anteriores): Classificação "AMARELA" (Urgente - Até 60 minutos).
// - Se todos os sintomas forem menores ou iguais a 1, mas pelo menos um for igual a 1: 
//   Classificação "VERDE" (Pouco Urgente).
// - Se todos os sintomas forem 0: Classificação "AZUL" (Não Urgente).

// Saída do Programa:
// Exiba a cor da classificação do paciente e o tempo máximo de espera recomendado.

#include <stdio.h>

int main(){

    int dorToracica, dificuldadeRespiratoria, febre;

    printf("Infome a gravidade dos sintomas (0-Ausente, 1-leve, 2-moderado, 3-gravissimo):\n");
    printf("Dor toracica: ");
    scanf("%d", &dorToracica);
    printf("Dificuldade respiratoria: ");
    scanf("%d", &dificuldadeRespiratoria);
    printf("Febre/temperatura: ");
    scanf("%d", &febre);

    if (dorToracica == 3 || dificuldadeRespiratoria == 3){
        printf("Emergencia atendimento Imediato\n");
        printf("Vermelho\n");
    }
    else if ((dorToracica == 2 || dificuldadeRespiratoria == 2) && febre >= 2){
        printf("Muito Urgente ate 10 minutos\n");
        printf("Laranja\n");
    }
    else if (dorToracica == 2 || dorToracica == 3 || 
        dificuldadeRespiratoria == 2 || dificuldadeRespiratoria == 3 ||
        febre == 2 || febre == 3 ){
        printf("Urgente ate 60 minutos\n");
        printf("Amarelo\n");
    }
    else if (dorToracica <= 1 && dificuldadeRespiratoria <= 1 && febre <= 1 &&
        (dorToracica == 1 || dificuldadeRespiratoria == 1 || febre == 1)){
        printf("Pouco Urgente\n");
        printf("Verde\n");
    }   
    else {
        printf("Nao Urgente\n");
        printf("Azul\n");
    }

    return 0;
}