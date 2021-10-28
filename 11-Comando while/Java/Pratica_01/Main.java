  /** Escreva um programa que solicite um número inteiro positivo,
 * maior que zero (0).
 *  Caso o número não seja positivo, repita o procedimento de solicitação.
 *  Caso seja positivo, exiba o número na tela.
 **/
import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        
        // declaração das variáveis
        int numero;
		
		// solicitação dos valores (ENTRADA E PROCESSAMENTO)
        System.out.print("Digite um numero inteiro positivo: ");
        Scanner reader = new Scanner(System.in);
		numero = reader.nextInt();
        while(numero < 0){ // enquanto o numero digitado for negativo
            System.out.println("\nO numero digitado e negativo!");
            System.out.print("Digite um numero inteiro positivo: ");
            numero = reader.nextInt();
        }

        // exibição do resultado (SAÍDA)
        System.out.println("\nNumero digitado: "+numero);
    }
}