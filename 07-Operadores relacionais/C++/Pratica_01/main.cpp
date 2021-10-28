/** Faça um programa que solicite a idade do usuário e informe:
 *  - se ele é maior ou menor de idade.
 *  - se o número que representa a sua idade é um valor par ou ímpar.
 */

#include <iostream>

int main() {
    // declaração das variáveis
    int idade;

    // solicitação da idade (ENTRADA)
    std::cout << "Digite a sua idade: ";
    std::cin >> idade;

    // verificação da idade (PROCESSAMENTO E SAÍDA)
    if(idade >= 18){ // se o usuário é maior de idade
        std::cout << "Maior de idade!\n";
    }else{ // caso contrário
        std::cout << "menor de idade!\n";
    }

    if((idade%2)==0){ // se a idade é um valor par
        std::cout << "Idade PAR!\n";
    }else{ // caso contrário
        std::cout << "Idade IMPAR!\n";
    }
}