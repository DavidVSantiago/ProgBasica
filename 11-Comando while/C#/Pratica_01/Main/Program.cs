/** Escreva um programa que solicite um número inteiro positivo,
 * maior que zero (0).
 *  Caso o número não seja positivo, repita o procedimento de solicitação.
 *  Caso seja positivo, exiba o número na tela.
 **/
 
using System;
class Program
{
    static void Main(string[] args)
    {
        // declaração das variáveis
        int numero;

        // solicitação dos valores (ENTRADA E PROCESSAMENTO)
        Console.Write("Digite um numero inteiro positivo: ");
        numero = Convert.ToInt32(Console.ReadLine());
        while(numero < 0){ // enquanto o numero digitado for negativo
            Console.WriteLine("\nO numero digitado e negativo!");
            Console.Write("Digite um numero inteiro positivo: ");
            numero = Convert.ToInt32(Console.ReadLine());
        }

        // exibição do resultado (SAÍDA)
        Console.WriteLine("\nNumero digitado: "+numero);
    }
}
