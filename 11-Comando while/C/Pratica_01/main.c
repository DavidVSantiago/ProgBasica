/** Escreva um programa que solicite um número inteiro positivo,
 * maior que zero (0).
 *  Caso o número não seja positivo, repita o procedimento de solicitação.
 *  Caso seja positivo, exiba o número na tela.
 **/

#include <stdio.h>

int main(void){
    // declaração das variáveis
    int numero;

    // solicitação dos valores (ENTRADA E PROCESSAMENTO)
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&numero);

    while(numero < 0){ // repete enquanto o número for negativo
        printf("\nO numero digitado e negativo!");
        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d",&numero);
    }

    // exibição do resultado (SAÍDA)
    printf("\nNumero digitado: %d",numero);
}