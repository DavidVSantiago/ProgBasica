/** Faça um programa para calcular a média aritmética
 * de uma série de n notas digitadas pelo usuário.
 *  O programa deve solicitar do usuário a quantidade n de notas
 * a serem digitadas, bem como cada uma das n notas.
 *  Como saída, o programa deve exibir a média das n notas digitadas
 **/

#include <stdio.h>

int main() {
  // declaração das variáveis
  int n;
  float media = 0;

  // solicitação das notas (ENTRADA E PROCESSAMENTO)
  printf("Digite a quantidade de notas: ");
  scanf("%d",&n);

  for(int i=0; i<n; i++){ // repete n vezes
    printf("Digite a nota %d: ",(i+1));
    float nota;
    scanf("%f",&nota);
    media = media + nota; // acumula cada uma das notas
  }
  media = media/n; // dividimos por n para calcular a média

  // exibição da média (SAÍDA)
  printf("\nMedia: %0.2f",media);
}