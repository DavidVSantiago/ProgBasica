/** Escreva um programa que implemente uma função que receba
 * como parâmetro o raio de uma esfera, e retorne o volume dessa esfera.
 *  O programa deve receber como ENTRADA o raio da esfera
 * e exibir como SAÍDA o volume da esfera. 
 * Fórmula: volume=(4*π*raio³)/3
 **/
 
using System;
class Program
{
    static double calculaVolume(double r){
        double v = (4*Math.PI*Math.Pow(r,3)) / 3;
        return v;
    }
    static void Main(string[] args)
    {
       // declaração das variáveis
       double raio;
       double volume;

       // solicitação dos valores (ENTRADA)
       Console.Write("Digite o raio da esfera (em metros): ");
       raio = Convert.ToDouble(Console.ReadLine());

       // cálculo do volume (PROCESSAMENTO)
       volume = calculaVolume(raio);

       // exibição do volume (SAÍDA)
       Console.WriteLine("\nVolume da esfera: "+volume);
    }
}
