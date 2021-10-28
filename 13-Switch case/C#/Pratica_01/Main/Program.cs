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
 
using System;
class Program
{
    static void Main(string[] args)
    {
        // declaração das variáveis
        char sinal;
        double oper1, oper2, resultado=0;

        // obtenção dos valores (ENTRADA)
        Console.WriteLine("Operadores: ");
        Console.WriteLine("+ - * /");
        Console.Write("Digite o caracter da operacao: ");
        sinal = Console.ReadLine()[0]; // obtém um único caracter
        // validação do operador
        while(sinal!='+' && sinal!='-' && sinal!='*' && sinal!='/'){
            Console.WriteLine("\nOperador inválido! Digite novamente!");
            Console.Write("+ - * /: ");
            sinal = Console.ReadLine()[0]; // obtém um único caracter
        }
        Console.Write("Digite o operando 1: ");
        oper1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Digite o operando 2: ");
        oper2 = Convert.ToDouble(Console.ReadLine());
        while(sinal=='/' && oper2==0){ // tentativa de divisão por zero!
            Console.WriteLine("\nTentativa de divisao por zero!");
            Console.Write("Digite o operando 2: ");
            oper2 = Convert.ToDouble(Console.ReadLine());
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
        Console.WriteLine("\n"+oper1+" "+sinal+" "+oper2+" = "+resultado);
    }
}
