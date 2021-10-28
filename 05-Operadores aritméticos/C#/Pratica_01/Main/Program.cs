/** Desenvolva um algoritmo que receba como entrada 4 notas de um aluno
  * e exiba como saída a média desse aluno.
 */

using System;
class Program
{
  static void Main(string[] args)
  {
    // declaração das variáveis
    double nota1;
    double nota2;
    double nota3;
    double nota4;
    double media;

    // obtenção das notas (ENTRADA)
    Console.Write("Digite a nota1: ");
    nota1 = Convert.ToDouble(Console.ReadLine());

    Console.Write("Digite a nota2: ");
    nota2 = Convert.ToDouble(Console.ReadLine());

    Console.Write("Digite a nota3: ");
    nota3 = Convert.ToDouble(Console.ReadLine());

    Console.Write("Digite a nota4: ");
    nota4 = Convert.ToDouble(Console.ReadLine());

    // cálculo da média (PROCESSAMENTO)
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // exibição da média (SAÍDA)
    Console.WriteLine("\nMedia = " + media);

  }
}
