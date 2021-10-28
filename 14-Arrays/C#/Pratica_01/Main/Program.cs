/** Faça um programa para calcular a média aritmética
 * de uma série de n temperaturas digitadas pelo usuário.
 *  O programa deve solicitar do usuário a quantidade n de temperaturas
 * a serem digitadas, bem como cada uma das n temperaturas.
 *  O programa deve armazenar as temperaturas em um array.
 *  Como saída, o programa deve exibir a média das n temperaturas digitadas
**/
 
using System;
class Program
{
    static void Main(string[] args)
    {
        // declaração da variáveis
        int n;
        double media = 0;

        // solicitação dos valores (ENTRADA)
        Console.Write("Digite a quantidade de temperaturas: ");
        n = Convert.ToInt32(Console.ReadLine());
        double[] temperaturas = new double[n]; // inicializa o array
        for(int i=0; i<n; i++){ // percorre as n posições do array
            Console.Write("Digite a temperatura "+(i+1)+": ");
            temperaturas[i] = Convert.ToDouble(Console.ReadLine());
        }

        // cálculo da média (PROCESSAMENTO)
        for(int i=0; i<n; i++){ // percorre as n posições do array
            media = media + temperaturas[i];
        }
        media = media/n;

        // exibição da média (SAÍDA)
        Console.WriteLine("\nA media das temperaturas = "+media);
    }
}
