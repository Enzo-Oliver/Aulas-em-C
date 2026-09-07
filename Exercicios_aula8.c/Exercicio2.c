// 2. Validação de Acesso
// Crie um programa que defina uma senha numérica interna (ex: 2026). O programa deve pedir
// para o usuário digitar a senha. Se ele errar, exiba "Senha Inválida! Tente novamente" e peça o
// dado de novo. O programa só deve parar quando a senha correta for digitada ou quando o
// usuário atingir o limite de 3 tentativas erradas, exibindo a mensagem correspondente ("Acesso
// Permitido" ou "Conta Bloqueada").

#include <stdio.h>

int main(){

    int tentativas = 0;
    int senha = 2026;

for (int i = 0; i < 3; i++){

    printf("Digite sua senha: ");
    scanf("%d", &senha);

        if (senha == 2026){
        printf("Bem vindo ao sistema!");
        break;
        }
        else {
        printf("Senha invalida, tente novamente!\n");
        }
        
    if (i == 2){
        printf("Conta bloqueada!");
        }
}
    return 0;
}