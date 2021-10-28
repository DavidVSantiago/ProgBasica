/** Desenvolva um algoritmo que receba como entrada 4 notas de um aluno
  * e exiba como saída a média desse aluno.
 */

#include <iostream>
int main() {
  // declaração das variáveis
  float nota1;
  float nota2;
  float nota3;
  float nota4;
  float media;

  // obtenção das notas (ENTRADA)
  std::cout << "Digite a nota 01: ";
  std::cin >> nota1;

  std::cout << "Digite a nota 02: ";
  std::cin >> nota2;

  std::cout << "Digite a nota 03: ";
  std::cin >> nota3;

  std::cout << "Digite a nota 04: ";
  std::cin >> nota4;

  // cálculo da média (PROCESSAMENTO)
  media = (nota1 + nota2 + nota3 + nota4) / 4;

  // exibição da média (SAÍDA)
  std::cout << "\nMedia = " << media;
}