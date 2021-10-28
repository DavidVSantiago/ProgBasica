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

import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        // declaração das variáveis
        char sinal;
        double oper1, oper2, resultado = 0;

        // obtenção dos valores (ENTRADA)
        Scanner reader = new Scanner(System.in);
        System.out.println("Operadores:");
        System.out.println("+ - * /");
        System.out.println("Digite o caracter da operacao: ");
        sinal = reader.next().charAt(0); // obtém apenas o 1º caracter
        // validação da entrada
        while(sinal!='+' && sinal!='-' && sinal!='*' && sinal!='/'){
            System.out.println("Operador inválido! digite novamente!");
            System.out.println("+ - * /");
            sinal = reader.next().charAt(0); // obtém apenas o 1º caracter
        }
        System.out.println("Digite o operando 1: ");
        oper1 = reader.nextDouble();
        System.out.println("Digite o operando 2: ");
        oper2 = reader.nextDouble();
        while(sinal=='/' && oper2==0){ // tentativa de divisão por zero
            System.out.println("\nDivisão por zero!");
            System.out.println("Digite o operando 2: ");
            oper2 = reader.nextDouble();
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
        System.out.println("\n"+oper1+" "+sinal+" "+oper2+" = "+resultado);
    }
}