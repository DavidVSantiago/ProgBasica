/** Desenvolva um algoritmo que receba como entrada:
	1 - um valor de um produto
	2 - um valor de desconto desse produto (em %)
    e exiba como saída: a valor final descontado
 */

#include <iostream>

int main() {
	// declaração das variáveis
	float valorProduto;
	float valorDesconto;
	float valorFinal;

	// obtenção das entradas (ENTRADA)
	std::cout << "Digite o valor do produto: ";
	std::cin >> valorProduto;
	std::cout << "Digite o valor do desconto: ";
	std::cin >> valorDesconto;

	// cálculo do desconto (PROCESSAMENTO)
	valorFinal = valorProduto - (valorProduto * (valorDesconto/100));

	// exibição do valor descontado (SAÍDA)
	std::cout << "\nValor final descontado = " << valorFinal;
}