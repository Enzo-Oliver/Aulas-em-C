// Exercício 5: Validador de Elegibilidade de Passagens Aéreas e Conexões (Visto/Vacina)
// --------------------------------------------------------------------------------
// Contexto: Sistemas de check-in internacional validam regras rígidas de trânsito 
// aeroportuário combinando o destino, escalas e documentos.

// Enunciado: Escreva um programa que simule o pré-embarque de um passageiro. 
// O programa deve ler o código do Continente de Destino usando um menu switch-case:
// 1 - América do Norte | 2 - Europa | 3 - Ásia

// Depois, o programa deve fazer três perguntas booleanas (use 1 para Sim e 0 para Não):
// - Possui passaporte válido? (int)
// - Possui visto aprovado para o destino? (int)
// - Comprovante de vacinação internacional em dia? (int)

// Regras de Elegibilidade Combinadas:
// - Para qualquer destino, se não possuir passaporte válido, o embarque é "NEGADO" 
//   imediatamente.
// - Caso 1 (América do Norte): Exige Passaporte VÁLIDO E Visto APROVADO E Vacinação EM DIA.
// - Caso 2 (Europa): Exige Passaporte VÁLIDO e Vacinação EM DIA. O visto NÃO é 
//   obrigatório (isento para turismo).
// - Caso 3 (Ásia): Exige Passaporte VÁLIDO E (Visto APROVADO OU Vacinação EM DIA - 
//   caso o país de parada aceite teste alternativo).

// Saída do Programa:
// Exiba o status final: "Embarque Autorizado" ou "Embarque Negado", detalhando qual 
// documento ou requisito impediu a viagem.

#include <stdio.h>

int main(){

    int continente, passaporte, visto, vacina;
    printf("Digite o continente de destino (1-America do Norte, 2-Europa, 3-Asia): ");
    scanf("%d", &continente);
    printf("Possui passaporte valido? (1-Sim, 0-Nao): ");
    scanf("%d", &passaporte);

    if (passaporte == 0){
        printf("Embarque Negado: Passaporte invalido.\n");
        return 0;
    }

    printf("Possui visto aprovado para o destino? (1-Sim, 0-Nao): ");
    scanf("%d", &visto);
    printf("Comprovante de vacinação internacional em dia? (1-Sim, 0-Nao): ");
    scanf("%d", &vacina);

    switch(continente){
        case 1: 
            if (visto == 1 && vacina == 1){
                printf("Embarque Autorizado.\n");
            } else {
                printf("Embarque Negado: Requisitos nao atendidos para America do Norte.\n");
            }
            break;
        case 2:
            if (vacina == 1){
                printf("Embarque Autorizado.\n");
            } else {
                printf("Embarque Negado: Vacinacao obrigatoria para Europa.\n");
            }
            break;
        case 3:
            if (visto == 1 || vacina == 1){
                printf("Embarque Autorizado.\n");
            } else {
                printf("Embarque Negado: Visto ou Vacinacao obrigatorios para Asia .\n");
            }
            break;
        default:
            printf("Continente invalido.\n");
            break;
    }

    return 0;
}