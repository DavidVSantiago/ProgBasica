/**Desenvolva um algoritmo que solicite do usuário algumas informações
    e as exiba na tela, como um relatório
 * As informações são:
 * - nome
 * - idade
 * - sexo
 * - profissão
 * - salario
 */
using System;

class Program
{
    static void Main(string[] args)
    {
        // criação das variáveis
        string nome;
        int idade;
        char sexo;
        string profissao;
        double salario;

        // solicitação dos valores (ENTRADA)
        Console.WriteLine("Digite os seus dados");

        // solicitação do nome
        Console.Write("Nome: ");
        nome = Console.ReadLine();

        // solicitação da idade
        Console.Write("Idade: ");
        idade = Convert.ToInt32(Console.ReadLine());

        // solicitação do sexo
        Console.Write("Sexo: ");
        sexo = Console.ReadLine()[0]; // obtém um único caracter

        // solicitação da Profissão
        Console.Write("Profissao: ");
        profissao = Console.ReadLine();

        // solicitação do salario
        Console.Write("Salario: ");
        salario = Convert.ToDouble(Console.ReadLine());

        // exibição na tela (SAÍDA)
        Console.WriteLine("\nOla, " + nome + ". Segue abaixo os seus dados.");
        Console.WriteLine("Idade: "+idade+" anos.");
        Console.WriteLine("Sexo: "+sexo);
        Console.WriteLine("Profissao: "+profissao);
        Console.WriteLine("Salario: "+salario);
    }
}
