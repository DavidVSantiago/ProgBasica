/** Desenvolva um algoritmo que receba como entrada 4 notas de um aluno
  * e exiba como saída a média desse aluno.
 */

#include <stdio.h>
int main() {
  // declaração das variáveis
  float nota1;
  float nota2;
  float nota3;
  float nota4;
  float media;

  // obtenção das notas (ENTRADA)
  printf("Digite a nota 01: ");
  scanf("%f",&nota1);

  printf("Digite a nota 02: ");
  scanf("%f",&nota2);

  printf("Digite a nota 03: ");
  scanf("%f",&nota3);

  printf("Digite a nota 04: ");
  scanf("%f",&nota4);

  // cálculo da média (PROCESSAMENTO)
  media = (nota1 + nota2 + nota3 + nota4) / 4;

  // exibição da média (SAÍDA)
  printf("\nMedia = %0.2f", media);
}