using System;

class Program
{
    static void Main(string[] args)
    {
		
        Console.WriteLine("Digite o seu nome:");
		
		string user; // local que armazena um nome
		user = Console.ReadLine(); // entrada padrão. captura o que foi digitado pelo usuário no teclado

		Console.WriteLine("Ola, " + user + ". Seja bem-vindo!");
    }
}
