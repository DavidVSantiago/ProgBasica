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

#include <stdio.h>

int main() {
	// declaração das variáveis
    char sinal;
    float oper1, oper2, resultado=0;

    // obtenção dos valores (ENTRADA)
    printf("Operadores:");
    printf("\n+ - * /");
    printf("\nDigite o caracter da operação: ");
    scanf("%c",&sinal);
    fflush(stdin);// limpar o buffer do teclado
    while(sinal!='+' && sinal!='-' && sinal!='*' && sinal!='/'){ // validação para o caracter inválido
        printf("\nOperador invalido! Digite novamente");
        printf("\n+ - * /");
        scanf("%c",&sinal);
        fflush(stdin);// limpar o buffer do teclado
    }
    printf("Digite o operando 1");
    scanf("%f",&oper1);
    printf("Digite o operando 2");
    scanf("%f",&oper2);
    while(sinal=='/' && oper2==0){ // divisão por zero
        printf("\nDivisão por zero!");
        printf("\nDigite o operando 2");
        scanf("%f",&oper2);
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
    printf("\n%0.2f %c %0.2f = %0.2f",oper1,sinal,oper2,resultado);
}