/** Desenvolva um algoritmo que receba como entrada:
	1 - um valor de um produto
	2 - um valor de desconto desse produto (em %)
    e exiba como saída: a valor final descontado
 */

#include <stdio.h>

int main() {
	// declaração das variáveis
	float valorProduto;
	float valorDesconto;
	float valorFinal;

	// obtenção das entradas (ENTRADA)
	printf("Digite o valor do produto: ");
	scanf("%f", &valorProduto);
	printf("Digite o valor do desconto: ");
	scanf("%f", &valorDesconto);

	// cálculo do desconto (PROCESSAMENTO)
	valorFinal = valorProduto - ( valorProduto * (valorDesconto/100));

	// exibição do valor descontado (SAÍDA)
	printf("\nValor final descontado = %0.2f",valorFinal);
}