/** Faça um programa que calcule a aprovação eu reprovação de um aluno.
 *  O programa deve receber como ENTRADA:
 *  - nota da 1ª prova (peso de 30%)
 *  - nota da 2ª prova (peso de 50%)
 *  - nota do trabalho (peso de 20%)
 *  Com base nas entradas, o programa deve calcular a média ponderada
 *  O programa deve exibir como SAÍDA:
 *  - A mensagem: "APROVADO!", caso a média seja igual ou maior que 7
 *  - A mensagem: "REPROVADO!", caso a média seja menor que 7
 */
 
using System;
class Program
{
    static void Main(string[] args)
    {
        // declaração das variáveis
        double nota1;
        double nota2;
        double notaTrabalho;
        double media;

        // obtenção das notas (ENTRADA)
        Console.Write("Digite a nota da 1ª prova: ");
        nota1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Digite a nota da 2ª prova: ");
        nota2 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Digite a nota do trabalho: ");
        notaTrabalho = Convert.ToDouble(Console.ReadLine());

        // cálculo da média (PROCESSAMENTO)
        media = (nota1*0.3) + (nota2*0.5) + (notaTrabalho*0.2);

        // exibição do resultado (SAÍDA)
        Console.WriteLine("\nMedia = " + media);
        if(media < 7){ // se a média for menor que
            Console.WriteLine("REPROVADO!");
        }else{ // caso contrário
            Console.WriteLine("APROVADO!");
        }
    }
}
