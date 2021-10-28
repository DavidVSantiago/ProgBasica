/** Faça um programa para calcular a média aritmética
 * de uma série de n temperaturas digitadas pelo usuário.
 *  O programa deve solicitar do usuário a quantidade n de temperaturas
 * a serem digitadas, bem como cada uma das n temperaturas.
 *  O programa deve armazenar as temperaturas em um array.
 *  Como saída, o programa deve exibir a média das n temperaturas digitadas
**/

#include <stdio.h>

int main() {
  // declaração das variáveis
  int n;
  float media = 0;

  // solicitação dos valores (ENTRADA)
  printf("Digite a quantidade de temperaturas: ");
  scanf("%d",&n);
  float temperaturas[n]; // inicializa o array
  for(int i=0; i<n; i++){ // percorre as n posições do array
    printf("Digite a temperatura %d: ", (i+1));
    scanf("%f",&temperaturas[i]); // armazena a temperatura na i-ésima posição do array
  }
  

  // cálculo da média (PROCESSAMENTO)
  for(int i=0; i<n; i++){ // percorre as n posições do array
    media = media + temperaturas[i]; // acumular o somatório das temperaturas
  }
  media = media/n;

  // exibição da média (SAÍDA)
  printf("\nA media das temperaturas = %0.2f", media);
}