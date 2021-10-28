/** Desenvolva uma calculadora simples de 1 operador e 2 operandos.
 *  O usuário deve digitar o tipo de operação e os dois valores
 * que serão utilizados na operação.
 *  O programa deve apresentar para o usuário as 4 operações básicas:
 *  + soma
 *  - subtração
 *  * multiplicação
 *  / divisão
 * 
 *  O programa deve exibir como saída o resultado da operação
 **/

#include <iostream>

int main() {
	// declaração das variáveis
    char sinal;
    float oper1, oper2, resultado=0;

    // obtenção dos valores (ENTRADA)
    std::cout << "Operadores:";
    std::cout << "\n+ - * /";
    std::cout << "\nDigite o caracter da operecao: ";
    std::cin >> sinal;
    while(sinal!='+' && sinal!='-' && sinal!='*' && sinal!='/'){ // validação do operador
        std::cout << "\nOperador invalido! Digite novamente!";
        std::cout << "\n+ - * /: ";
        std::cin >> sinal;
    }
    std::cout << "Digite o operando 1: ";
    std::cin >> oper1;
    std::cout << "Digite o operando 2: ";
    std::cin >> oper2;
    while(sinal=='/' && oper2==0){ // verifica a divisão por zero
        std::cout << "\nDivisao por zero nao e valida";
        std::cout << "\nDigite o operando 2: ";
        std::cin >> oper2;
    }

    // cálculo da operação (PROCESSAMENTO)
    switch(sinal){
    case '+':
        resultado = oper1 + oper2;
        break;
    case '-':
        resultado = oper1 - oper2;
        break;
    case '*':
        resultado = oper1 * oper2;
        break;
    case '/':
        resultado = oper1 / oper2;
        break;
    }

    // exibição do resultado (SAÍDA)
    std::cout << "\n"<<oper1<<" "<<sinal<<" "<<oper2<<" = "<<resultado;
}