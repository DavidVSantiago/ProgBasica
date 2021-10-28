/** Escreva um programa que solicite um número inteiro positivo,
 * maior que zero (0).
 *  Caso o número não seja positivo, repita o procedimento de solicitação.
 *  Caso seja positivo, exiba o número na tela.
 **/

#include <iostream>

int main() {
	// declaração das variáveis
	int numero;

	// solicitação dos valores (ENTRADA E PROCESSAMENTO)
	std::cout << "Digite um numero inteiro positivo: ";
	std::cin >> numero;

	while(numero < 0){ // repete enquanto o numero digitado for negativo
		std::cout << "\nO numero digitado e negativo!";
		std::cout << "\nDigite um numero inteiro positivo: ";
		std::cin >> numero;
	}

	// exibição do resultado (SAÍDA)
	std::cout << "\nNumero digitado: " << numero;
}