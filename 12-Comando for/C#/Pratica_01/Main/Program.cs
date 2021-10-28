/** Faça um programa para calcular a média aritmética
 * de uma série de n notas digitadas pelo usuário.
 *  O programa deve solicitar do usuário a quantidade n de notas
 * a serem digitadas, bem como cada uma das n notas.
 *  Como saída, o programa deve exibir a média das n notas digitadas
 **/
 
using System;
class Program
{
    static void Main(string[] args)
    {
        // declaração das variáveis
        int n;
        double media = 0;

        // solicitação das notas (ENTRADA E PROCESSAMENTO)
        Console.Write("Digite a quantidade de notas: ");
        n = Convert.ToInt32(Console.ReadLine());

        for(int i=0; i<n; i++){ // repete n vezes
            Console.Write("Digite a nota "+(i+1)+": ");
            double nota = Convert.ToDouble(Console.ReadLine());
            media = media + nota; // acumula cada uma das notas
        }
        media = media/n; // dividimos por n para calcular a média

        // exibição da média (SAÍDA)
        Console.WriteLine("\nMedia: "+media);
    }
}
