/** Faça um programa que leia o valor de um produto e imprima
 * o valor com desconto, tendo em vista que o desconto foi de 12%.
 **/

#include <iostream>

int main() {
    // declaração das variáveis
    float valor;

    // obtenção dos valores (ENTRADA)
    std::cout << "Digite o valor do produto: R$";
    std::cin >> valor;

    // cálculo do desconto (PROCESSAMENTO)
    valor -= (valor*0.12);
    //valor = valor - (valor*0.12);

    // exibição do valor descontado (SAÍDA)
    std::cout << "\nValor descontado: R$" << valor;
}