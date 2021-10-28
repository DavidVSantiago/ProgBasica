/** Desenvolva um algoritmo que receba como entrada:
	1 - um valor de um produto
	2 - um valor de desconto desse produto (em %)
	e exiba como saída: a valor final descontado
 */
 
using System;
class Program
{
    static void Main(string[] args)
    {
        // declaração das variáveis
        double valorProduto;
        double valorDesconto;
        double valorFinal;

        // obtenção das entradas (ENTRADA)
        Console.Write("Digite o valor do produto: ");
        valorProduto = Convert.ToDouble(Console.ReadLine());
        Console.Write("Digite o valor do desconto (em %): ");
        valorDesconto = Convert.ToDouble(Console.ReadLine());

        // exibição do valor descontado (PROCESSAMENTO)
        valorFinal = valorProduto - (valorProduto* (valorDesconto/100));

        // exibição do valor descontado (SAÍDA)
        Console.WriteLine("\nValor final descontado = "+valorFinal);
    }
}
