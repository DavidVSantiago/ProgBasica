/** Faça um programa que leia o valor de um produto e imprima
 * o valor com desconto, tendo em vista que o desconto foi de 12%.
 **/
 
using System;
class Program
{
    static void Main(string[] args)
    {
        // declaração das variáveis
        double valor;

        // obtenção dos valores (ENTRADA)
        Console.Write("Digite o valor do produto: R$");
        valor = Convert.ToDouble(Console.ReadLine());

        // cálculo do desconto (PROCESSAMENTO)
        valor -= (valor*0.12);
        //valor = valor - (valor*0.12);

        // exibição do valor descontado (SAÍDA)
        Console.WriteLine("\nValor descontado: R$"+valor);
    }
}
