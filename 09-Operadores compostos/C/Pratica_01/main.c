/** Faça um programa que leia o valor de um produto e imprima
 * o valor com desconto, tendo em vista que o desconto foi de 12%.
 **/

#include <stdio.h>

int main() {
   // declaração das variáveis
   float valor;

   // obtenção dos valores (ENTRADA)
   printf("Digite o valor do produto: R$");
   scanf("%f",&valor);

   // cálculo do desconto (PROCESSAMENTO)
   valor -= (valor*0.12);
   //valor = valor - (valor*0.12);

   // exibição do valor descontado (SAÍDA)
   printf("\nValor Descontado: R$%0.2f",valor);
}