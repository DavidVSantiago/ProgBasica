import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		System.out.println("Digite o seu nome:"); // saída padrão. impressão no monitor
		
		String user; // local que armazena um nome
		Scanner reader = new Scanner(System.in); // criação de objeto para ler o teclado. Específico do Java
		user = reader.nextLine(); // entrada padrão. captura o que foi digitado pelo usuário no teclado

		System.out.println("Ola, " + user + ". Seja bem-vindo!");
	}
}