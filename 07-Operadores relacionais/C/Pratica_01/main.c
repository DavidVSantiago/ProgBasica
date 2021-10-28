/** Faça um programa que solicite a idade do usuário e informe:
 *  - se ele é maior ou menor de idade.
 *  - se o número que representa a sua idade é um valor par ou ímpar.
 */

#include <stdio.h>

int main() {
    // declaração das variáveis
    int idade;

    // solicitação da idade (ENTRADA)
    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    // verificação da idade (PROCESSAMENTO E SÁIDA)
    if(idade >= 18){ // verifico se o usuário é maior de idade
        printf("Maior de idade!\n");
    }else{ // caso contrário
        printf("Menor de idade!\n");
    }

    if((idade%2)==0){ // verificar se a idade é um valor par
        printf("Idade PAR!\n");
    }else{ // caso contrário
        printf("Idade IMPAR!\n");
    }
}