/** Faça um programa para calcular a média aritmética
 * de uma série de n temperaturas digitadas pelo usuário.
 *  O programa deve solicitar do usuário a quantidade n de temperaturas
 * a serem digitadas, bem como cada uma das n temperaturas.
 *  O programa deve armazenar as temperaturas em um array.
 *  Como saída, o programa deve exibir a média das n temperaturas digitadas
**/

#include <iostream>

int main() {
  // declaração das variáveis
  int n;
  float media = 0;

  // solicitação dos valores (ENTRADA)
  std::cout << "Digite a quantidade de temperaturas: ";
  std::cin >> n;
  float temperaturas[n]; // inicializar o array
  for(int i=0; i<n; i++){ // percorre as n posições do array
    std::cout << "Digite a temperatura "<< (i+1) << ": ";
    std::cin >> temperaturas[i]; // armazena na i-ésima posição do array
  }

  // cálculo da média (PROCESSAMENTO)
  for(int i=0; i<n; i++){ // percorre as n posições do array
    media = media + temperaturas[i]; // acumular as temperaturas
  }
  media = media/n;

  // exibição da média (SAÍDA)
  std::cout << "\nA media das temperaturas = "<<media;
}