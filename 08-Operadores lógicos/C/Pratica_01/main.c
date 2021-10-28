/** Faça um programa que leia do usuário o valor da quantidade de
 * calorias consumidas por dia.
 *  O programa deve verificar se a quantidade de calorias se encontra
 * na faixa de segurança - entre 1200 e 1900 cal.(incluíndo ambos) por dia
 *  O programa deve exibir como saída uma das duas informações:
 *  - Ou exibe "Dentro da faixa", para qtd. de calorias entre 1200 e 1900.
 *  - Ou, caso contrário, exibe "Fora da faixa". 
 **/

#include <stdio.h>

int main() {
   // declaração das variáveis
   int calorias;

   // solicitação dos valores (ENTRADA)
   printf("Digite a qtd. de calorias consumidas por dia: ");
   scanf("%d",&calorias);

   // verificação da faixa (PROCESSAMENTO E SAÍDA)
   if(calorias >= 1200 && calorias <= 1900){ // verifica faixa de segurança
        printf("\nDentro da faixa");
   }else{ // caso contrário
        printf("\nFora da faixa");
   }
}