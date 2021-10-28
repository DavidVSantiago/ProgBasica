/** Faça um programa que solicite a idade do usuário e informe:
 *  - se ele é maior ou menor de idade.
 *  - se o número que representa a sua idade é um valor par ou ímpar.
 */
 
using System;
class Program
{
    static void Main(string[] args)
    {
        // solicitação das variáveis
        int idade;

        // solicitação da idade (ENTRADA)
        Console.Write("Digite a sua idade: ");
        idade = Convert.ToInt32(Console.ReadLine());

        // verificação da idade (PROCESSAMENTO E SAÍDA)
        if(idade >= 18){ // se é maior de idade
            Console.WriteLine("Maior de idade!");
        }else{ // caso contrário
            Console.WriteLine("Menor de idade!");
        }

        if((idade%2)==0){ // se a idade é par
            Console.WriteLine("Idade é PAR!");
        }else{
            Console.WriteLine("Idade é ÍMPAR");
        }
    }
}
