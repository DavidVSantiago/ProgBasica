/** Desenvolva um algoritmo que receba como entrada:
	1 - um valor de um produto
	2 - um valor de desconto desse produto (em %)
    e exiba como saída: a valor final descontado
 */
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        // declaração de variáveis
        double valorProduto;
        double valorDesconto;
        double valorFinal;

        // obtenção das entradas(ENTRADA)
        Scanner reader = new Scanner(System.in); // obtejo para ler do teclado
        System.out.print("Digite o valor do produto: ");
        valorProduto = reader.nextDouble();
        System.out.print("Digite o valor do desconto (em %): ");
        valorDesconto = reader.nextDouble();

        // cálculo do desconto (PROCESSAMENTO)
        valorFinal = valorProduto - (valorProduto*(valorDesconto/100));

        // exibição do valor descontado (SAÍDA)
        System.out.println("\nValor final descontado = "+valorFinal);
    }
}